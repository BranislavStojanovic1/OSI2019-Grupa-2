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
	/// Summary for PregledSvihDogadjaja
	/// </summary>
	public ref class PregledSvihDogadjaja : public System::Windows::Forms::Form
	{
	public:
		PregledSvihDogadjaja(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;

	public:
		DataTable^ table = gcnew DataTable();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PregledSvihDogadjaja()
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(29, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(648, 256);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PregledSvihDogadjaja::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PregledSvihDogadjaja::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sortirati pritiskom na zeljeni naziv kolone";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(699, 47);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(209, 256);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(696, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Komentari";
			// 
			// PregledSvihDogadjaja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(931, 315);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"PregledSvihDogadjaja";
			this->Text = L"PregledSvihDogadjaja";
			this->Load += gcnew System::EventHandler(this, &PregledSvihDogadjaja::PregledSvihDogadjaja_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PregledSvihDogadjaja_Load(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Enabled = false;
		dataGridView1->AllowUserToAddRows = false;
		table->Columns->Add("ID");
		table->Columns->Add("Naziv");
		table->Columns->Add("Opis");
		table->Columns->Add("Lokacija");
		table->Columns->Add("Kategorija");
		table->Columns->Add("Datum");
		table->Columns->Add("Vrijeme");
		dataGridView1->DataSource = table;
		std::ifstream myfile;


		DataGridViewButtonColumn^ btn = gcnew DataGridViewButtonColumn();
		btn->Name = "Komentari";
		btn->Text = "Komentari";
		btn->UseColumnTextForButtonValue = true;
		dataGridView1->Columns->Add(btn);




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
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void dataGridView1_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		if (e->ColumnIndex == 7)
		{
			std::ifstream myfile;
			myfile.open("../../Fajlovi\\Komentari.txt");
			String^ current = dataGridView1->Rows[e->RowIndex]->Cells["Naziv"]->Value->ToString();
			std::string currentUn = static_cast<const char*>(Marshal::StringToHGlobalAnsi(current).ToPointer());
			int k = 1;
			std::string sline;
			
			for (; k && std::getline(myfile, sline); )
			{
				if (sline == currentUn)
					k = 0;
			}
			if (k) MessageBox::Show("Nema komentara za ovaj dogadjaj");
			else
			{
				std::getline(myfile, sline);
				std::getline(myfile, sline);


				std::string svi;
				
				while (sline != "}")
				{
					svi = svi + sline;
					svi = svi + '\n';

					std::getline(myfile, sline);

				}
				String^ komentar = gcnew String(svi.c_str());
				textBox1->Text = komentar;


			}


		}

	}
	};
}
