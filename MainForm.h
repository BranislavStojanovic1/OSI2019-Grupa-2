#pragma once

namespace Projektni {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(490, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Pregled danasnjih dogadjaja";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(490, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Pregled dogadjaja odredjene kategorije";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 188);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(490, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Pregled svih buducih dogadjaja";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 224);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(490, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Pregled dogadjaja koji su prosli";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 260);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(490, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Komentarisanje dogadjaja";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 297);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(490, 30);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Igranje kviza o gradu";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 343);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MainForm";
			this->Text = L"Korisnicka Aplikacija";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		this->Hide();
		Projektni::Pregled Pregled;
		Pregled.ShowDialog();
		this->Show();
	}

    private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		 this->Hide();
		 Projektni::Kategorije Kategorije;
		 Kategorije.ShowDialog();
		 this->Show();
    }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Projektni::Buduci Buduci;
		Buduci.ShowDialog();
		this->Show();
	}

    private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Projektni::Prosli Prosli;
		Prosli.ShowDialog();
		this->Show();
}
    private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Projektni::Komentarisanje Komentarisanje;
		Komentarisanje.ShowDialog();
		this->Show();
}
    private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		Projektni::Kviz Kviz;
		Kviz.ShowDialog();
		this->Show();
}
};
}
