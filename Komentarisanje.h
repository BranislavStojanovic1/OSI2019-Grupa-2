#pragma once
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <iostream>
#include <vector>

namespace Projektni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Komentarisanje
	/// </summary>
	public ref class Komentarisanje : public System::Windows::Forms::Form
	{
	public:
		Komentarisanje(void)
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
		~Komentarisanje()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Komentar;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Komentar = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(26, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Komentarisanje::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Komentar });
			this->dataGridView1->Location = System::Drawing::Point(12, 86);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(728, 272);
			this->dataGridView1->TabIndex = 1;
			// 
			// Komentar
			// 
			this->Komentar->HeaderText = L"Komentar";
			this->Komentar->Name = L"Komentar";
			this->Komentar->ReadOnly = true;
			this->Komentar->Width = 500;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(216, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(253, 20);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(521, 33);
			this->button1->Name = L"Dodaj Komentar";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Dodaj Komentar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Komentarisanje::button1_Click);
			// 
			// Komentarisanje
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 370);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Komentarisanje";
			this->Text = L"Komentarisanje";
			this->Load += gcnew System::EventHandler(this, &Komentarisanje::Komentarisanje_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Komentarisanje_Load(System::Object^  sender, System::EventArgs^  e) {
		std::ifstream myfile;
		System::String^ naziv;
		System::String^ itemname;
		int index, i;
		myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Dogadjaji.txt", std::ifstream::in); //Reading txt file
		for (std::string sline; std::getline(myfile, sline); )
		{
			i = 1;
            itemname = gcnew String(sline.c_str());
			while (i)
			{
				if (sline[i] == ';')
				{
					index = i;
					i = 0;
				}
				else
					i++;
			}
			naziv = itemname->Substring(0, index);
				if (comboBox1->Items->Contains(naziv))
			{
			}
			else
				comboBox1->Items->Add(naziv);

		}
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	dataGridView1->Rows->Clear();
	std::ifstream myfile;
	System::String^ naziv, ^komentar;
	System::String^ itemname;
	int k = 0;
	myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Komentari.txt", std::ifstream::in); //Reading txt file
	for (std::string sline; std::getline(myfile, sline); )
	{
		
		itemname = gcnew String(sline.c_str());
		if (comboBox1->Text == itemname)
		{
			std::getline(myfile, sline);
			std::getline(myfile, sline);
			while (sline[0] != '}')
			{
				komentar = gcnew String(sline.c_str());
				dataGridView1->Rows->Add();
				dataGridView1->Rows[k]->Cells["Komentar"]->Value = komentar;
				k++;
				std::getline(myfile, sline);

			}
	  }
	}

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ifstream myfile;
	std::vector<std::string> vektor;
	std::ofstream myfile1;
	System::String^ itemname, ^komentar;
	std::string komentar1,dogadjaj;
	int pos,i;
	komentar = textBox1->Text;
	komentar1 = msclr::interop::marshal_as<std::string>(komentar);
	dogadjaj = msclr::interop::marshal_as<std::string>(comboBox1->Text);
	myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Komentari.txt", std::ifstream::in);
	for (std::string sline; std::getline(myfile, sline); )
	{
		if (sline.size() > 0)
			vektor.push_back(sline);
	}
	myfile.close();
	myfile1.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Komentari.txt", std::ofstream::out);
	for (i = 0; i < vektor.size(); i++)
		if (dogadjaj == vektor.at(i))
			pos = i;
	for (i = 0; i < pos+2; i++)
		myfile1 << vektor.at(i) << "\n";
	myfile1 << komentar1 << "\n";
	pos += 2;
	for (; pos < vektor.size(); pos++)
		myfile1 << vektor.at(pos) << "\n";
	myfile1.close();


}
};
}
