#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <regex>

#include <msclr\marshal_cppstd.h>
using namespace System::Text::RegularExpressions;
using namespace System::Runtime::InteropServices;




namespace AdministrativnaAplikacija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for IzmjenaDogadjaja
	/// </summary>
	public ref class IzmjenaDogadjaja : public System::Windows::Forms::Form
	{
	public:
		IzmjenaDogadjaja(void)
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
			textBox6->MaxLength = 30;
			comboBox1->MaxLength = 20;
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button2;
	public:
		DataTable^ table = gcnew DataTable();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~IzmjenaDogadjaja()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::DataGridView^  dataGridView1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 46);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(654, 221);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &IzmjenaDogadjaja::dataGridView1_CellClick);
			this->dataGridView1->CellContentDoubleClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &IzmjenaDogadjaja::dataGridView1_CellContentDoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Izaberite dogadjaj";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(77, 296);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(77, 340);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(149, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(77, 386);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(149, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(391, 293);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 20);
			this->textBox4->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 296);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Naziv";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 340);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Opis";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 386);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Lokacija";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(280, 296);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Datum[dd.mm.gggg.]";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(327, 340);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(41, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Vrijeme";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(391, 337);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(228, 20);
			this->textBox5->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(544, 420);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Azuriraj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &IzmjenaDogadjaja::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(391, 383);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(350, 383);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"ID";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(391, 415);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(314, 420);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Kategorija";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(723, 46);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(228, 373);
			this->textBox7->TabIndex = 17;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(720, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Komentari";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(795, 13);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Promjena komentara";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &IzmjenaDogadjaja::button2_Click);
			// 
			// IzmjenaDogadjaja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 450);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"IzmjenaDogadjaja";
			this->Text = L"IzmjenaDogadjaja";
			this->Load += gcnew System::EventHandler(this, &IzmjenaDogadjaja::IzmjenaDogadjaja_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &IzmjenaDogadjaja::IzmjenaDogadjaja_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void loaddd()
	{
		std::ifstream inFile;
		textBox7->Enabled = false;
		std::string temp;
		inFile.open("../../Fajlovi\\Kategorije.txt", std::ios_base::in);
		while (std::getline(inFile, temp))
		{
			String^ tempMenaged = gcnew String(temp.c_str());
			comboBox1->Items->Add(tempMenaged);
		}

		inFile.close();
	}
	private: System::Void IzmjenaDogadjaja_Load(System::Object^  sender, System::EventArgs^  e) {
		table->Columns->Add("ID");
		table->Columns->Add("Naziv");
		table->Columns->Add("Opis");
		table->Columns->Add("Lokacija");
		table->Columns->Add("Kategorija");
		table->Columns->Add("Datum");
		table->Columns->Add("Vrijeme");

		dataGridView1->DataSource = table;

		std::ifstream myfile;
		loaddd();




		System::String^ itemname;
		myfile.open("../../Fajlovi\\Dogadjaji.txt");
		int pozicija[100], duzina, i, j = 0, k = 0;


		for (std::string sline; std::getline(myfile, sline); )
		{
			j = 0;
			itemname = gcnew String(sline.c_str());
			duzina = sline.length();
			for (i = 0; i < duzina; i++)
			{
				if (sline[i] == ';')
				{
					pozicija[j] = i;
					j++;
				}
			}

			table->Rows->Add();
			dataGridView1->Rows[k]->Cells["ID"]->Value = k + 1;
			dataGridView1->Rows[k]->Cells["Naziv"]->Value = itemname->Substring(0, pozicija[0]);
			dataGridView1->Rows[k]->Cells["Opis"]->Value = itemname->Substring((pozicija[0] + 1), (pozicija[1] - pozicija[0] - 1));
			dataGridView1->Rows[k]->Cells["Lokacija"]->Value = itemname->Substring((pozicija[1] + 1), (pozicija[2] - pozicija[1] - 1));
			dataGridView1->Rows[k]->Cells["Kategorija"]->Value = itemname->Substring((pozicija[2] + 1), (pozicija[3] - pozicija[2] - 1));
			dataGridView1->Rows[k]->Cells["Datum"]->Value = itemname->Substring((pozicija[3] + 1), (pozicija[4] - pozicija[3] - 1));
			dataGridView1->Rows[k]->Cells["Vrijeme"]->Value = itemname->Substring((pozicija[4] + 1), (pozicija[5] - pozicija[4] - 1));
			k++;

		}

	}
	private: System::Void dataGridView1_CellContentDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	}
	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value != nullptr)
		{
			textBox1->Enabled = true;
			textBox7->Enabled = false;
			dataGridView1->CurrentRow->Selected = true;
			textBox1->Text = dataGridView1->Rows[e->RowIndex]->Cells["Naziv"]->FormattedValue->ToString();
			textBox2->Text = dataGridView1->Rows[e->RowIndex]->Cells["Opis"]->FormattedValue->ToString();
			textBox3->Text = dataGridView1->Rows[e->RowIndex]->Cells["Lokacija"]->FormattedValue->ToString();
			textBox4->Text = dataGridView1->Rows[e->RowIndex]->Cells["Datum"]->FormattedValue->ToString();
			textBox5->Text = dataGridView1->Rows[e->RowIndex]->Cells["Vrijeme"]->FormattedValue->ToString();
			textBox6->Text = dataGridView1->Rows[e->RowIndex]->Cells["ID"]->FormattedValue->ToString();

			String^ trenutni = dataGridView1->Rows[e->RowIndex]->Cells["Naziv"]->FormattedValue->ToString();
			std::string t = static_cast<const char*>(Marshal::StringToHGlobalAnsi(trenutni).ToPointer());
			std::fstream inFile;
			std::string sline;
			inFile.open("../../Fajlovi\\Komentari.txt");
			std::getline(inFile, sline);
			while (sline != t)
			{
				std::getline(inFile, sline);
			}
			std::string svi;
			std::getline(inFile, sline);
			std::getline(inFile, sline);
			while (sline != "}")
			{
				svi = svi + sline;

				if (svi != "")svi += "\n";
				std::getline(inFile, sline);
			}


			String^ sviMenaged = gcnew String(svi.c_str());
			textBox7->Text = sviMenaged;
			inFile.close();




			String^ id = textBox6->Text;
			std::string idUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(id).ToPointer());
			int ID = stoi(idUnmenaged);


			std::ifstream myfile;


			System::String^ itemname;
			myfile.open("../../Fajlovi\\Dogadjaji.txt");
			int pozicija[100], duzina, j = 0, k = 0;
			String^ novi;
			int p = 1, i = 1;
			for (std::string sline; std::getline(myfile, sline) && p; i++)
			{

				if (i == ID)
				{
					j = 0;
					itemname = gcnew String(sline.c_str());
					duzina = sline.length();
					for (i = 0; i < duzina; i++)
					{
						if (sline[i] == ';')
						{
							pozicija[j] = i;
							j++;

						}
					}
					p = 0;
					novi = itemname->Substring((pozicija[2] + 1), (pozicija[3] - pozicija[2] - 1));
				}


			}
			comboBox1->ResetText();


			comboBox1->SelectedText = novi;
			myfile.close();

		}
	}


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {




		String^ selected = comboBox1->Text;
		String^ naziv = textBox1->Text;
		String^ opis = textBox2->Text;
		String^ lokacija = textBox3->Text;
		String^ datum = textBox4->Text;
		String^ vrijeme = textBox5->Text;
		String^ komentar = textBox7->Text;

		std::ifstream file1;
		file1.open("../../Fajlovi\\Komentari.txt");
		std::string sline1;
		int p = 0;
		std::string nazivTemp = static_cast<const char*>(Marshal::StringToHGlobalAnsi(naziv).ToPointer());
		String^ trenutniNaziv = dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells["Naziv"]->Value->ToString();
		std::string trenutniNazivUn = static_cast<const char*>(Marshal::StringToHGlobalAnsi(trenutniNaziv).ToPointer());
		for (; std::getline(file1, sline1);)
		{
			if (sline1 == nazivTemp)
			{
				p++;
			}
			else if (trenutniNazivUn == sline1)
			{
				p++;

			}

		}
		file1.close();
		if (p == 2) MessageBox::Show("Vec postoji dogadjaj sa ovim nazivom");
		else
		{
			if (!String::IsNullOrWhiteSpace(naziv) && !String::IsNullOrWhiteSpace(selected)
				&& !String::IsNullOrWhiteSpace(opis) && !String::IsNullOrWhiteSpace(lokacija)
				&& !String::IsNullOrWhiteSpace(datum) && !String::IsNullOrWhiteSpace(vrijeme))
			{
				std::string selectedUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(selected).ToPointer());
				std::string nazivUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(naziv).ToPointer());
				std::string opisUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(opis).ToPointer());
				std::string lokacijaUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(lokacija).ToPointer());
				std::string datumUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(datum).ToPointer());
				std::string vrijemeUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(vrijeme).ToPointer());
				std::string komentarUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(komentar).ToPointer());


				String^ id = textBox6->Text;
				std::string idUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(id).ToPointer());





				std::ifstream inFile;
				inFile.open("../../Fajlovi\\Kategorije.txt", std::ios_base::in);
				std::string kategorijaUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(selected).ToPointer());
				std::string temp;
				int k = 1;
				while (inFile >> temp && k)
				{
					if (temp == kategorijaUnmenaged)
						k = 0;

				}
				inFile.close();

				if (!k)
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

					std::string nesto;
					for (int broj : niz)
						nesto += std::to_string(broj);
					if (nesto == "2245810")
					{
						int ID = std::stoi(idUnmenaged);
						std::ifstream infile;
						infile.open("../../Fajlovi\\Dogadjaji.txt", std::ios::in);
						std::string sline;

						std::ofstream outFile;
						outFile.open("../../Fajlovi\\DogadjajiTemp.txt", std::ios::out);


						for (int i = 1; std::getline(infile, sline); i++)
						{
							if (i == ID)
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

								
								std::ifstream kfile1;
								kfile1.open("../../Fajlovi\\Komentari.txt", std::ios::in);
								std::ofstream kfile2;
								kfile2.open("../../Fajlovi\\KomentariTemp.txt", std::ios::out);
								std::string sline;
								std::string pom;
								int kkk = 1, c = 1;
								String^ pom2 = dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells["Naziv"]->Value->ToString();
								std::string pomUn = static_cast<const char*>(Marshal::StringToHGlobalAnsi(pom2).ToPointer());
								while (kkk)
								{
									std::getline(kfile1, sline);

									if (sline == nazivUnmenaged)
									{
										kfile2 << "\n";
										kfile2 << sline;
										kfile2 << "\n";
										kfile2 << "{";
										kfile2 << "\n";
										kfile2 << komentarUnmenaged;
										while (sline != "}") std::getline(kfile1, sline);
										kfile2 << "}";
									}
									else if (sline == pomUn)
									{
										kfile2 << "\n";
										kfile2 << nazivUnmenaged;
										kfile2 << "\n";
										kfile2 << "{";
										kfile2 << "\n";
										kfile2 << komentarUnmenaged;
										c = 0;
										kfile2 << "}";
										while (sline != "}") getline(kfile1, sline);

									}
									else
									{
										kfile2 << "\n";
										kfile2 << sline;
									}
									if (kfile1.eof()) kkk = 0;




								}


								kfile1.close();
								kfile2.close();
								remove("../../Fajlovi\\Komentari.txt");
								rename("../../Fajlovi\\KomentariTemp.txt", "../../Fajlovi\\Komentari.txt");
								MessageBox::Show("Uspjesno izmijenjen");



							}
							else
							{
								outFile << sline;
								outFile << "\n";
							}
						}
						outFile.close();
						infile.close();

						remove("../../Fajlovi\\Dogadjaji.txt");
						rename("../../Fajlovi\\DogadjajiTemp.txt", "../../Fajlovi\\Dogadjaji.txt");
						this->Close();
					}
					else MessageBox::Show("Neispravan datum");
				}
				else
				{
					MessageBox::Show("Kategorija ne postoji");
				}
			}
			else MessageBox::Show("Sva polja moraju biti popunjena");
		}











	}
	private: System::Void IzmjenaDogadjaja_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {



	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ currentNaziv = dataGridView1->Rows[dataGridView1->CurrentRow->Index]->Cells["Naziv"]->Value->ToString();
		String^ izabraniNaziv = textBox1->Text;
		if (currentNaziv == izabraniNaziv)
		{
			textBox7->Enabled = true;
			textBox1->Enabled = false;
		}

		else
			MessageBox::Show("Naziv i komentar se ne mogu mijenjati u isto vrijeme");
	}
	};
}
