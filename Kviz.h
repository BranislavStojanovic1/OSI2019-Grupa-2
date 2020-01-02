#pragma once

namespace Projektni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Kviz
	/// </summary>
	public ref class Kviz : public System::Windows::Forms::Form
	{
	public:
		Kviz(void)
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
		~Kviz()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton1;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
    


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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 182);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 205);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(12, 228);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(85, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"x";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(193, 208);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 20);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Prihvati odgovor";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Kviz::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(241, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 5;
			// 
			// Kviz
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(390, 271);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Name = L"Kviz";
			this->Text = L"Kviz";
			this->Load += gcnew System::EventHandler(this, &Kviz::Kviz_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void Kviz_Load(System::Object^  sender, System::EventArgs^  e) {
		std::ifstream myfile;
		std::ofstream myfile1;
		System::String^ itemname, ^odgovor1, ^odgovor2, ^odgovor3;
		std::string odg1, odg2, odg3,t1,t2,t3;
		int duzina,i;
		std::vector<std::string> vektor;
		std::string sline;



		myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Kviz1.txt", std::ifstream::in);
		for (; std::getline(myfile, sline); )
		{
			if (sline.size() > 0)
				vektor.push_back(sline);
		}
		myfile.close();
		myfile1.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Kviz.txt", std::ofstream::out);
		for (i = 0; i < vektor.size(); i++)
			myfile1 << vektor.at(i) << "\n";
		myfile1.close();





		myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Kviz.txt", std::ifstream::in);

		
			std::getline(myfile, sline);
			itemname = gcnew String(sline.c_str());
			label1->Text = itemname;
			std::getline(myfile, sline);
			duzina = sline.length();
			t1 = sline.substr(0, 1);
			odg1 = sline.substr(2, duzina - 2);
			odgovor1 = gcnew String(odg1.c_str());
			radioButton1->Text = odgovor1;

			std::getline(myfile, sline);
			duzina = sline.length();
			t2 = sline.substr(0, 1);
			odg2 = sline.substr(2, duzina - 2);
			odgovor2 = gcnew String(odg2.c_str());
			radioButton2->Text = odgovor2;

			std::getline(myfile, sline);
			duzina = sline.length();
			t3 = sline.substr(0, 1);
			odg3 = sline.substr(2, duzina - 2);
			odgovor3 = gcnew String(odg3.c_str());
			radioButton3->Text = odgovor3;



	}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ifstream myfile;
	std::ofstream myfile1;
	std::vector<std::string> vektor;
	System::String^ itemname, ^odgovor1, ^odgovor2, ^odgovor3;
	std::string odg1, odg2, odg3, t1, t2, t3;
	std::string sline;
	int duzina,i;



	myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Kviz.txt", std::ifstream::in);
	std::getline(myfile, sline);
	
		vektor.push_back(sline);
	for (; std::getline(myfile, sline); )
	{
		if (sline.size() > 0)
			vektor.push_back(sline);
	}


	odg1 = vektor.at(1);
	odg2 = vektor.at(2);
	odg3 = vektor.at(3);
	t1 = odg1.substr(0,1);
	t2 = odg2.substr(0,1);
	t3 = odg3.substr(0, 1);
	if (radioButton1->Checked && t1 == "X")
		label2->Text = "Tacan odgovor";
	else if (radioButton2->Checked && t2 == "X")
		label2->Text = "Tacan odgovor";
	else if (radioButton3->Checked && t3 == "X")
		label2->Text = "Tacan odgovor";
	else
		label2->Text = "Netacan odgovor";



	
		vektor.erase(vektor.begin());
		vektor.erase(vektor.begin());
		vektor.erase(vektor.begin());
		vektor.erase(vektor.begin());
		myfile.close();
		if (vektor.size() == 0)
		{
			label1->Text = "Kraj kviza";
			button1->Hide();
		}
		else
		{
		myfile1.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Kviz.txt", std::ofstream::out);
		for (i = 0; i < vektor.size(); i++)
			myfile1 << vektor.at(i) << "\n";

		myfile1.close();


		myfile.open("C:\\Users\\USER.DESKTOP-DO2C60Q\\Desktop\\Projektni OSI\\Projektni\\Fajlovi\\Kviz.txt", std::ifstream::in);


		std::getline(myfile, sline);
		itemname = gcnew String(sline.c_str());
		label1->Text = itemname;
		std::getline(myfile, sline);
		duzina = sline.length();
		t1 = sline.substr(0, 1);
		odg1 = sline.substr(2, duzina - 2);
		odgovor1 = gcnew String(odg1.c_str());
		radioButton1->Text = odgovor1;

		std::getline(myfile, sline);
		duzina = sline.length();
		t2 = sline.substr(0, 1);
		odg2 = sline.substr(2, duzina - 2);
		odgovor2 = gcnew String(odg2.c_str());
		radioButton2->Text = odgovor2;

		std::getline(myfile, sline);
		duzina = sline.length();
		t3 = sline.substr(0, 1);
		odg3 = sline.substr(2, duzina - 2);
		odgovor3 = gcnew String(odg3.c_str());
		radioButton3->Text = odgovor3;


	}
}
};
}
