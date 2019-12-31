#pragma once
#include <iostream>
#include <string>
#include <fstream>

#include <msclr\marshal_cppstd.h>

using namespace System::Runtime::InteropServices;

namespace AdministrativnaAplikacija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BrisanjeKategorije
	/// </summary>
	public ref class BrisanjeKategorije : public System::Windows::Forms::Form
	{
	public:
		BrisanjeKategorije(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BrisanjeKategorije()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(60, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(146, 21);
			this->comboBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(96, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Izbrisi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BrisanjeKategorije::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Izaberite kategoriju";
			// 
			// BrisanjeKategorije
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"BrisanjeKategorije";
			this->Text = L"BrisanjeKategorije";
			this->Load += gcnew System::EventHandler(this, &BrisanjeKategorije::BrisanjeKategorije_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BrisanjeKategorije_Load(System::Object^  sender, System::EventArgs^  e) {

		std::ifstream inFile;
		std::string temp;
		inFile.open("../../Fajlovi\\Kategorije.txt", std::ios_base::in);
		while (std::getline(inFile, temp))
		{
			String^ tempMenaged = gcnew String(temp.c_str());
			comboBox1->Items->Add(tempMenaged);
		}

		inFile.close();

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (comboBox1->SelectedIndex == -1)
			MessageBox::Show("Pogresan izbor");
		else
		{
			String^ izbor = comboBox1->Text;
			std::string izborUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(izbor).ToPointer());
			std::ifstream infile;
			infile.open("../../Fajlovi\\Kategorije.txt", std::ios::in);
			std::string sline;

			std::ofstream outfile;
			outfile.open("../../Fajlovi\\KategorijeTemp.txt", std::ios::out);

			std::ifstream myfile;


			myfile.open("../../Fajlovi\\Dogadjaji.txt");

			int k = 1, p = 0;

			char delimeter(';');
			for (std::string sline; k != 0 && k != 2;)
			{
				for (int n = 4; n > 0; n--)
					std::getline(myfile, sline, delimeter);
				p++;
				if (sline == izborUnmenaged)
					k = 0;
				

				std::getline(myfile, sline);
				if (myfile.eof())k = 2;
			}
			myfile.seekg(0);


			if (k == 0)MessageBox::Show("Postoji dogadjaj ove kategorije");
			else
			{
				while (std::getline(infile, sline))
				{
					if (!izborUnmenaged.compare(sline))
					{
						MessageBox::Show("Brisanje Uspjesno");
					}
					else
					{
						outfile << sline;
						outfile << "\n";
					}
				}

				infile.close();
				outfile.close();
				remove("../../Fajlovi\\Kategorije.txt");
				rename("../../Fajlovi\\KategorijeTemp.txt", "../../Fajlovi\\Kategorije.txt");

				this->Close();
			}









		}

	}
	};
}
