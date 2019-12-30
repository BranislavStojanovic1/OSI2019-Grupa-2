#pragma once

namespace Projektni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Kategorije
	/// </summary>
	public ref class Kategorije : public System::Windows::Forms::Form
	{
	public:
		Kategorije(void)
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
		~Kategorije()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Naziv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Opis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Lokacija;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Datum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Vrijeme;
	private: System::Windows::Forms::ComboBox^  comboBox1;

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
			this->Naziv = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Opis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Lokacija = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Datum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Vrijeme = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
					this->Opis, this->Lokacija, this->Datum, this->Vrijeme
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 79);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(544, 264);
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
			// Datum
			// 
			this->Datum->HeaderText = L"Datum";
			this->Datum->Name = L"Datum";
			this->Datum->ReadOnly = true;
			// 
			// Vrijeme
			// 
			this->Vrijeme->HeaderText = L"Vrijeme";
			this->Vrijeme->Name = L"Vrijeme";
			this->Vrijeme->ReadOnly = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 26);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Kategorije::comboBox1_SelectedIndexChanged);
			// 
			// Kategorije
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 355);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Kategorije";
			this->Text = L"Kategorije";
			this->Load += gcnew System::EventHandler(this, &Kategorije::Kategorije_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Kategorije_Load(System::Object^  sender, System::EventArgs^  e) {
		std::ifstream myfile;
		System::String^ vrsta;
		System::String^ itemname;
		myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Kategorije.txt", std::ifstream::in); //Reading txt file
		for (std::string sline; std::getline(myfile, sline); )
		{
			 itemname= gcnew String(sline.c_str());
			 if (comboBox1->Items->Contains(itemname))
			 {
			 }
			 else
				 comboBox1->Items->Add(itemname);

		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	std::ifstream myfile;
	System::String^ naziv, ^opis, ^lokacija, ^vrsta, ^datum, ^vrijeme;
	System::String^ itemname;
	myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Dogadjaji.txt", std::ifstream::in); //Reading txt file
	int pozicija[100], duzina, i, j = 0, k = 0, godina, mjesec, dan;
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
		if (comboBox1->Text == vrsta)
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[k]->Cells["Naziv"]->Value = naziv;
			dataGridView1->Rows[k]->Cells["Opis"]->Value = opis;
			dataGridView1->Rows[k]->Cells["Lokacija"]->Value = lokacija;
			dataGridView1->Rows[k]->Cells["Datum"]->Value = datum;
			dataGridView1->Rows[k]->Cells["Vrijeme"]->Value = vrijeme;
			k++;
		}
	}
	
}

};
}
