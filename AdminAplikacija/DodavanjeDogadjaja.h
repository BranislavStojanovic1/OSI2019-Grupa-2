#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <string>
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
	/// Summary for DodavanjeDogadjaja
	/// </summary>
	public ref class DodavanjeDogadjaja : public System::Windows::Forms::Form
	{
	public:
		DodavanjeDogadjaja(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			textBox1->MaxLength = 30;
			textBox2->MaxLength = 30;
			textBox3->MaxLength = 30;
			textBox4->MaxLength = 30;
			textBox5->MaxLength = 30;


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DodavanjeDogadjaja()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox6;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Naziv";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Opis";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(27, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Lokacija";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(27, 133);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Datum[dd.mm.gggg.]";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Vrijeme";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(141, 262);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(27, 262);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Kategorija";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(141, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(141, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(141, 97);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(173, 20);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(141, 133);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(173, 20);
			this->textBox4->TabIndex = 10;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(141, 169);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(173, 20);
			this->textBox5->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(168, 310);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Dodaj dogadjaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DodavanjeDogadjaja::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(28, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Komentar";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(141, 218);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(173, 20);
			this->textBox6->TabIndex = 14;
			// 
			// DodavanjeDogadjaja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 361);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"DodavanjeDogadjaja";
			this->Text = L"DodavanjeDogadjaja";
			this->Load += gcnew System::EventHandler(this, &DodavanjeDogadjaja::DodavanjeDogadjaja_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DodavanjeDogadjaja_Load(System::Object^  sender, System::EventArgs^  e) {
		loaddd();

	}
	public: System::Void loaddd()
	{
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
		String^ selected = comboBox1->Text;
		String^ naziv = textBox1->Text;
		String^ opis = textBox2->Text;
		String^ lokacija = textBox3->Text;
		String^ datum = textBox4->Text;
		String^ vrijeme = textBox5->Text;
		String^ komentar = textBox6->Text;
		
		std::string selectedUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(selected).ToPointer());
		std::string nazivUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(naziv).ToPointer());
		std::string opisUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(opis).ToPointer());
		std::string lokacijaUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(lokacija).ToPointer());
		std::string datumUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(datum).ToPointer());
		std::string vrijemeUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(vrijeme).ToPointer());
		std::string komentarUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(komentar).ToPointer());

		if (nazivUnmenaged.find(';') != std::string::npos || opisUnmenaged.find(';') != std::string::npos
			|| lokacijaUnmenaged.find(';') != std::string::npos || selectedUnmenaged.find(';') != std::string::npos
			|| datumUnmenaged.find(';') != std::string::npos || vrijemeUnmenaged.find(';') != std::string::npos)		
			MessageBox::Show("Znak ; nije dozvoljen");	
		else
		{
			std::ifstream inFile;
			int k = 1;
			inFile.open("../../Fajlovi\\Dogadjaji.txt");
			if (inFile)
			{
				char delimeter(';');
				for (std::string sline; k != 0 && k != 2;)
				{

					std::getline(inFile, sline, delimeter);
					if (sline == nazivUnmenaged)
						k = 0;
					if (inFile.eof())k = 2;
					else
						std::getline(inFile, sline);

				}
				inFile.close();
			}

			if (k == 0) MessageBox::Show("Dogadjaj vec postoji");
			else
			{
				std::ofstream outFile;
				std::ifstream outFile2;
				outFile2.open("../../Fajlovi\\Komentari.txt");
				outFile.open("../../Fajlovi\\Dogadjaji.txt", std::ios_base::app);
				if (outFile && !String::IsNullOrWhiteSpace(naziv) && !String::IsNullOrWhiteSpace(selected)
					&& !String::IsNullOrWhiteSpace(opis) && !String::IsNullOrWhiteSpace(lokacija) && !String::IsNullOrWhiteSpace(datum)
					&& !String::IsNullOrWhiteSpace(vrijeme) && !String::IsNullOrWhiteSpace(komentar))
				{

					int d = datumUnmenaged.length();
					int br = 0, br2 = 0;
					int niz[6];
					int k = 1;
					int j = 0;
					if (d == 11)
					{
						for (int i = 0; i < d && k; i++)
						{
							if (datum[i] >= '0' && datum[i] <= '9') br++;
							else if (datum[i] == '.') br2++;
							else k = 0;

							if (datum[i] == '.')
							{
								niz[j++] = br;
								niz[j++] = i;
							}
						}
					}
					if (!k && (br2 != 3))  MessageBox::Show("Neispravan datum");
					std::string kombinacija;
					for (int broj : niz)
						kombinacija += std::to_string(broj);
					if (kombinacija == "2245810")
					{
						outFile << nazivUnmenaged;
						outFile << ";";
						outFile << opisUnmenaged;
						outFile << ";";
						outFile << lokacijaUnmenaged;
						outFile << ";";
						outFile << selectedUnmenaged;
						outFile << ";";
						outFile << datumUnmenaged;
						outFile << ";";
						outFile << vrijemeUnmenaged;
						outFile << ";";
						outFile << "\n";

						int k = 1;
						std::string sline;
						for (; k && std::getline(outFile2, sline); )
						{
							if (sline == nazivUnmenaged)
								k = 0;
						}
						if (k)
						{
							outFile2.close();
							std::ofstream outFile3;
							outFile3.open("../../Fajlovi\\Komentari.txt", std::ios_base::app);
							outFile3 << nazivUnmenaged;
							outFile3 << "\n";
							outFile3 << "{";
							outFile3 << "\n";
							outFile3 << komentarUnmenaged;
							outFile3 << "\n";
							outFile3 << "}";
							outFile3 << "\n";
							outFile3.close();

						}
						else
						{

						}

						MessageBox::Show("Dogadjaj uspjesno dodan");
					}
					else MessageBox::Show("Neispravan datum");

				}
				else
				{
					MessageBox::Show("Nedovoljno podataka");
				}
				outFile.close();
			}
		}
			
		


	}
	};
}
