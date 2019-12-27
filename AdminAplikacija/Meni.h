#pragma once
#include "PregledSvihDogadjaja.h"
#include "DodavanjeDogadjaja.h"
#include "BrisanjeDogadjaja.h"
#include "DodavanjeKategorije.h"
#include "BrisanjeKategorije.h"
#include "IzmjenaDogadjaja.h"

namespace AdministrativnaAplikacija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Meni
	/// </summary>
	public ref class Meni : public System::Windows::Forms::Form
	{
	public:
		Meni(void)
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
		~Meni()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button8;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dodaj dogadjaj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Meni::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(48, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Izmijeni dogadjaj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Meni::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(48, 154);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Izbrisi dogadjaj";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Meni::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(48, 72);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(203, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Pregled svih dogadjaja";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Meni::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(286, 72);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 35);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Dodaj kategoriju";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Meni::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(286, 113);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(203, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Izbrisi kategoriju";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Meni::button6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(69, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Rad sa dogadjajima";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(302, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Rad sa kategorijama";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(414, 234);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Odjava";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Meni::button8_Click);
			// 
			// Meni
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(542, 269);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Meni";
			this->Text = L"Meni";
			this->Load += gcnew System::EventHandler(this, &Meni::Meni_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		PregledSvihDogadjaja pregled;
		pregled.ShowDialog();
		this->Show();
	}
	private: System::Void Meni_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		DodavanjeDogadjaja dodavanje;
		dodavanje.ShowDialog();
		this->Show();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		BrisanjeDogadjaja brisanje;
		brisanje.ShowDialog();
		this->Show();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		DodavanjeKategorije dodavanjekategorije;
		dodavanjekategorije.ShowDialog();
		this->Show();

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		BrisanjeKategorije brisanjekategorije;
		brisanjekategorije.ShowDialog();
		this->Show();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		IzmjenaDogadjaja izmjena;
		izmjena.ShowDialog();
		this->Show();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
};
}
