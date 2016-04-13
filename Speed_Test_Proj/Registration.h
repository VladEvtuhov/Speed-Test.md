#pragma once
#include "Form1.h"
#include <string>
#include <cstring>

namespace SpeedTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Button^  button1;
	private: 

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(130, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Registration::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(130, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(135, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Registration::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(75, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Имя:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(32, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Фамилия:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(115, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Начать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownHeight = 110;
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1 уровень", L"2 уровень", L"3 уровень", L"4 уровень", 
				L"5 уровень", L"6 уровень", L"7 уровень", L"8 уровень", L"9 уровень", L"10 уровень"});
			this->comboBox1->Location = System::Drawing::Point(80, 170);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Registration::comboBox1_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Enabled = false;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(53, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(201, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Выберите сложность";
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 295);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Registration";
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Registration_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Form1 ^ f1 = gcnew Form1();
				 if (comboBox1->Text=="1 уровень")
				 {
					 auto file = System::IO::File::OpenText("1.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="2 уровень")
				 {
					 auto file = System::IO::File::OpenText("2.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 f1->Show();
				 this->Hide();
			 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int y = 0;
			 String^ s = textBox1->Text;
			 int n = s->Length;
			 for(int i = 0; i < n; i++)
			 {
				 if ((((int)s[i]>64) && ((int)s[i]<91)) || (((int)s[i]>96) && ((int)s[i]<123)))
				 {
					 y++;
				 }
			 }
			 if (y==n)
			 {
				 textBox2->Enabled = true;
				 label1->Enabled = true;
				 //button1->Enabled = true;
			 }
			 else { textBox2->Enabled = false; label1->Enabled = false; button1->Enabled = false;comboBox1->Enabled = false;label3->Enabled = false; }
			 if (textBox1->Text == "")
             {
                textBox2->Enabled = false;
                label1->Enabled = false;
				comboBox1->Enabled = false;
				label3->Enabled = false;
                button1->Enabled = false;
             }
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int y = 0;
			 String^ s = textBox2->Text;
			 int n = s->Length;
			 for(int i = 0; i < n; i++)
			 {
				 if ((((int)s[i]>64) && ((int)s[i]<91)) || (((int)s[i]>96) && ((int)s[i]<123)))
				 {
					 y++;
				 }
			 }
			 if (y==n)
			 {
				 comboBox1->Enabled = true;
				 label3->Enabled = true;
				 //button1->Enabled = true;
			 }
			 else { comboBox1->Enabled = false; label3->Enabled = false; button1->Enabled = false; }
			 if (textBox2->Text == "")
             {
                comboBox1->Enabled = false;
                label3->Enabled = false;
                button1->Enabled = false;
             }
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if ((comboBox1->Text=="2 уровень") || (comboBox1->Text=="1 уровень"))
				 button1->Enabled=true;
			 else
				 button1->Enabled=false;
		 }
};
}
