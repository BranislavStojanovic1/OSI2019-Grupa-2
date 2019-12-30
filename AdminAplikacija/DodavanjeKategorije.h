#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
using namespace System;
using namespace System::Runtime::InteropServices;

namespace AdministrativnaAplikacija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DodavanjeKategorije
	/// </summary>
	public ref class DodavanjeKategorije : public System::Windows::Forms::Form
	{
	public:
		DodavanjeKategorije(void)
		{
			InitializeComponent();
			textBox1->MaxLength = 22;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DodavanjeKategorije()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Naziv";
			this->label1->Click += gcnew System::EventHandler(this, &DodavanjeKategorije::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Dodaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DodavanjeKategorije::button1_Click);
			// 
			// DodavanjeKategorije
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 118);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"DodavanjeKategorije";
			this->Text = L"DodavanjeKategorije";
			this->Load += gcnew System::EventHandler(this, &DodavanjeKategorije::DodavanjeKategorije_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DodavanjeKategorije_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ unos = textBox1->Text;

		if (!String::IsNullOrWhiteSpace(unos))
		{
			std::ifstream inFile;
			inFile.open("../../Fajlovi\\Kategorije.txt", std::ios_base::in);
			std::string kategorijaUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(unos).ToPointer());
			std::string temp;
			int k = 1;
			while (inFile >> temp && k)
			{
				if (temp == kategorijaUnmenaged)
					k = 0;

			}
			inFile.close();

			if (k)
			{
				std::ofstream outFile;
				outFile.open("../../Fajlovi\\Kategorije.txt", std::ios_base::app);
				outFile << kategorijaUnmenaged;
				outFile << "\n";
				MessageBox::Show("Uspjesno dodano");
			}
			else
				MessageBox::Show("Kategorija vec postoji");

		}
		else MessageBox::Show("Polje je prazno");





	}
	};
}
