#pragma once
#include <iostream>
#include <fstream>
#include <string>
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
	/// Summary for BrisanjeDogadjaja
	/// </summary>
	public ref class BrisanjeDogadjaja : public System::Windows::Forms::Form
	{
	public:
		BrisanjeDogadjaja(void)
		{
			InitializeComponent();
			textBox1->MaxLength = 10;
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button1;
	public:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;

	public:
		DataTable^ table = gcnew DataTable();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BrisanjeDogadjaja()
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1->Location = System::Drawing::Point(29, 48);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(648, 256);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BrisanjeDogadjaja::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(222, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Izbrisi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &BrisanjeDogadjaja::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &BrisanjeDogadjaja::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ID dogadjaja:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(714, 47);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(237, 256);
			this->textBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(711, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Komentari:";
			// 
			// BrisanjeDogadjaja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 315);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"BrisanjeDogadjaja";
			this->Text = L"BrisanjeDogadjaja";
			this->Load += gcnew System::EventHandler(this, &BrisanjeDogadjaja::BrisanjeDogadjaja_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BrisanjeDogadjaja_Load(System::Object^  sender, System::EventArgs^  e) {

		table->Columns->Add("ID");
		table->Columns->Add("Naziv");
		table->Columns->Add("Opis");
		table->Columns->Add("Lokacija");
		table->Columns->Add("Kategorija");
		table->Columns->Add("Datum");
		table->Columns->Add("Vrijeme");
		dataGridView1->DataSource = table;
		textBox2->Enabled = false;

		DataGridViewButtonColumn^ btn = gcnew DataGridViewButtonColumn();
		btn->Name = "Komentari";
		btn->Text = "Komentari";
		btn->UseColumnTextForButtonValue = true;
		dataGridView1->Columns->Add(btn);

		std::ifstream myfile;
		System::String^ itemname;
		myfile.open("../../Fajlovi\\Dogadjaji.txt"); //Reading txt file
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
	public: bool checkIfNumber(std::string a)
	{
		int length = a.length();
		int i = 0;
		while (length)
		{
			if (!isdigit(a[length - 1])) i = 1;
			length--;
		}
		if (i == 1) return 0;
		return 1;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ id = textBox1->Text;
		std::string idUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(id).ToPointer());
		if (String::IsNullOrWhiteSpace(id)) MessageBox::Show("Polje je prazno");
		else
		{
			int ID;
			if (checkIfNumber(idUnmenaged))
			{
				ID = std::stoi(idUnmenaged);
				std::ifstream infile;
				infile.open("../../Fajlovi\\Dogadjaji.txt", std::ios::in);
				std::string sline;
				std::ofstream outfile;
				outfile.open("../../Fajlovi\\DogadjajiTemp.txt", std::ios::out);

				int k = 0;
				for (int i = 1; std::getline(infile, sline); i++)
				{
					if (i == ID)
					{
						k = 1;
					}
					else
					{
						outfile << sline;
						outfile << "\n";
					}
				}
				outfile.close();
				infile.close();
				remove("../../Fajlovi\\Dogadjaji.txt");
				rename("../../Fajlovi\\DogadjajiTemp.txt", "../../Fajlovi\\Dogadjaji.txt");
				std::ifstream kfile1;
				kfile1.open("../../Fajlovi\\Komentari.txt", std::ios::in);
				std::ofstream kfile2;
				kfile2.open("../../Fajlovi\\KomentariTemp.txt", std::ios::out);
				std::string sline1;
				int h = 1, c = 1;
				if (k)
				{
					String^ naziv = dataGridView1->Rows[ID - 1]->Cells["Naziv"]->Value->ToString();
					std::string nazivUnmenaged = static_cast<const char*>(Marshal::StringToHGlobalAnsi(naziv).ToPointer());
					while (h)
					{
						std::getline(kfile1, sline1);
						if (sline1 == nazivUnmenaged)
						{
							while (sline1 != "}") std::getline(kfile1, sline1);					
						}
						else
						{
							if (c == 1)
								c = 0;
							else
								kfile2 << "\n";					
							kfile2 << sline1;
						}
						if (kfile1.eof()) h = 0;
					}
					kfile1.close();
					kfile2.close();
					remove("../../Fajlovi\\Komentari.txt");
					rename("../../Fajlovi\\KomentariTemp.txt", "../../Fajlovi\\Komentari.txt");
					MessageBox::Show("Uspjesno izbrisan");
					this->Close();
				}
				if (!k) MessageBox::Show("Ovaj ID ne postoji");
			}
			else
				MessageBox::Show("Pogresan ID");
		}	
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->ColumnIndex == 7)
		{		
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
			textBox2->Text = sviMenaged;
			inFile.close();
		}

	}
	};
}
