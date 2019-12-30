#pragma once
#include <string>
#include <fstream>
#include <istream>
#include <streambuf>
#include <iostream>
#include <sstream>
#include <ctime>
#include <chrono>

namespace Projektni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Buduci
	/// </summary>
	public ref class Buduci : public System::Windows::Forms::Form
	{
	public:
		Buduci(void)
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
		~Buduci()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::BindingSource^  bindingSource1;
	protected:
	private: System::Windows::Forms::BindingSource^  bindingSource2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Naziv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Opis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Lokacija;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vrsta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vrijeme;
	private: System::ComponentModel::IContainer^  components;
	protected:
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->bindingSource2 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Naziv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Opis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lokacija = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vrsta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vrijeme = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Naziv,
					this->Opis, this->Lokacija, this->Vrsta, this->Vrijeme
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(581, 291);
			this->dataGridView1->TabIndex = 0;
			// 
			// Naziv
			// 
			this->Naziv->HeaderText = L"Naziv";
			this->Naziv->Name = L"Naziv";
			this->Naziv->ReadOnly = true;
			// 
			// Opis
			// 
			this->Opis->HeaderText = L"Opis";
			this->Opis->Name = L"Opis";
			this->Opis->ReadOnly = true;
			// 
			// Lokacija
			// 
			this->Lokacija->HeaderText = L"Lokacija";
			this->Lokacija->Name = L"Lokacija";
			this->Lokacija->ReadOnly = true;
			// 
			// Vrsta
			// 
			this->Vrsta->HeaderText = L"Vrsta";
			this->Vrsta->Name = L"Vrsta";
			this->Vrsta->ReadOnly = true;
			// 
			// Vrijeme
			// 
			this->Vrijeme->HeaderText = L"Vrijeme";
			this->Vrijeme->Name = L"Vrijeme";
			this->Vrijeme->ReadOnly = true;
			// 
			// Prosli
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 308);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Prosli";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Buduci::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		time_t t = time(0);
		std::ifstream myfile;
		std::string strline, datum1, datum2;
		System::String^ naziv, ^opis, ^lokacija, ^vrsta, ^datum, ^vrijeme;
		System::String^ itemname;
		myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Dogadjaji.txt", std::ifstream::in); //Reading txt file
		int pozicija[100], duzina, i, j = 0, k = 0, godina, mjesec, dan, godina1, mjesec1, dan1, br, br1, pozicija2[4], prosli;
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

			naziv = itemname->Substring(0, pozicija[0]);
			opis = itemname->Substring((pozicija[0] + 1), (pozicija[1] - pozicija[0] - 1));
			lokacija = itemname->Substring((pozicija[1] + 1), (pozicija[2] - pozicija[1] - 1));
			vrsta = itemname->Substring((pozicija[2] + 1), (pozicija[3] - pozicija[2] - 1));
			datum = itemname->Substring((pozicija[3] + 1), (pozicija[4] - pozicija[3] - 1));
			vrijeme = itemname->Substring((pozicija[4] + 1), (pozicija[5] - pozicija[4] - 1));
			datum1 = sline.substr((pozicija[3] + 1), (pozicija[4] - pozicija[3] - 1));



			std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
			time_t tt = std::chrono::system_clock::to_time_t(now);
			tm local_tm = *localtime(&tt);
			godina = local_tm.tm_year + 1900;
			mjesec = local_tm.tm_mon + 1;
			dan = local_tm.tm_mday;
			if (mjesec < 10 && dan < 10)
				datum2 = '0' + std::to_string(dan) + ".0" + std::to_string(mjesec) + "." + std::to_string(godina) + ".";
			else if (mjesec < 10 && dan>9)
				datum2 = std::to_string(dan) + ".0" + std::to_string(mjesec) + "." + std::to_string(godina) + ".";
			else if (mjesec > 9 && dan < 10)
				datum2 = '0' + std::to_string(dan) + "." + std::to_string(mjesec) + "." + std::to_string(godina) + ".";
			else
				datum2 = std::to_string(dan) + "." + std::to_string(mjesec) + "." + std::to_string(godina) + ".";
			dan1 = ((datum1[0] - '0') * 10) + ((datum1[1] - '0'));
			mjesec1 = ((datum1[3] - '0') * 10) + ((datum[4] - '0'));
			godina1 = ((datum1[6] - '0') * 1000) + ((datum1[7] - '0') * 100) + ((datum1[8] - '0') * 10) + (datum1[9] - '0');
			br = godina * 10000 + mjesec * 100 + dan;
			br1 = godina1 * 10000 + mjesec1 * 100 + dan1;

			if (br1>br)
			{
				dataGridView1->Rows->Add();
				dataGridView1->Rows[k]->Cells["Naziv"]->Value = naziv;
				dataGridView1->Rows[k]->Cells["Opis"]->Value = opis;
				dataGridView1->Rows[k]->Cells["Lokacija"]->Value = lokacija;
				dataGridView1->Rows[k]->Cells["Vrsta"]->Value = vrsta;
				dataGridView1->Rows[k]->Cells["Vrijeme"]->Value = vrijeme;
				k++;
			}
		}

	}

	};
}
