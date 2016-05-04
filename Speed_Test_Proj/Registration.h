#pragma once
#include "Form1.h"
#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>
#include <cstring>
#include "Statistics.h"

namespace SpeedTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Registration
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  textBox1;
	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Button^  button1;
	private: 

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Timer^  timer1;
	private: 
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  statisticsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	public: double r;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statisticsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
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
			this->label1->Location = System::Drawing::Point(61, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(1, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Second name:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(115, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownHeight = 110;
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"1 level", L"2 level", L"3 level", L"4 level", 
				L"5 level", L"6 level", L"7 level", L"8 level", L"9 level", L"10 level"});
			this->comboBox1->Location = System::Drawing::Point(74, 166);
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
			this->label3->Location = System::Drawing::Point(61, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(154, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"   Select difficulty:";
			// 
			// timer1
			// 
			this->timer1->Interval = 25;
			this->timer1->Tick += gcnew System::EventHandler(this, &Registration::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->fileToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(314, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->statisticsToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// statisticsToolStripMenuItem
			// 
			this->statisticsToolStripMenuItem->Name = L"statisticsToolStripMenuItem";
			this->statisticsToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->statisticsToolStripMenuItem->Text = L"Statistics";
			this->statisticsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Registration::statisticsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Registration::exitToolStripMenuItem_Click);
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 297);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(330, 335);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(330, 335);
			this->Name = L"Registration";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Registration_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 timer1->Start();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Form1 ^ f1 = gcnew Form1();
				 if (comboBox1->Text=="1 level")
				 {
					 auto file = System::IO::File::OpenText("1.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="2 level")
				 {
					 auto file = System::IO::File::OpenText("2.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="3 level")
				 {
					 auto file = System::IO::File::OpenText("3.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="4 level")
				 {
					 auto file = System::IO::File::OpenText("4.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="5 level")
				 {
					 auto file = System::IO::File::OpenText("5.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="6 level")
				 {
					 auto file = System::IO::File::OpenText("6.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="7 level")
				 {
					 auto file = System::IO::File::OpenText("7.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="8 level")
				 {
					 auto file = System::IO::File::OpenText("8.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="9 level")
				 {
					 auto file = System::IO::File::OpenText("9.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 if (comboBox1->Text=="10 level")
				 {
					 auto file = System::IO::File::OpenText("10.txt");
					 auto read = file->ReadToEnd();
					 f1->textBox3->Text = read;
				 }
				 f1->textBox2->Text = this->textBox1->Text;
				 f1->textBox4->Text = this->textBox2->Text;
				 f1->textBox5->Text = this->comboBox1->Text;
				 if ((comboBox1->Text=="1 level") || (comboBox1->Text=="2 level") || (comboBox1->Text=="3 level") || (comboBox1->Text=="4 level") || (comboBox1->Text=="5 level") || (comboBox1->Text=="6 level") || (comboBox1->Text=="7 level") || (comboBox1->Text=="8 level") || (comboBox1->Text=="9 level") || (comboBox1->Text=="10 level")) 
				 {
					 f1->Show();
					 this->Hide();
				 }
				 else MessageBox::Show("Enter another difficulty!","", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
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
			 if ((comboBox1->Text=="1 level") || (comboBox1->Text=="2 level") || (comboBox1->Text=="3 level") || (comboBox1->Text=="4 level") || (comboBox1->Text=="5 level") || (comboBox1->Text=="6 level") || (comboBox1->Text=="7 level") || (comboBox1->Text=="8 level") || (comboBox1->Text=="9 level") || (comboBox1->Text=="10 level")) 
				 button1->Enabled=true;
			 else
				 button1->Enabled=false;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Stop();
			 r = r + 0.05;
			 this->Opacity=r;
			 timer1->Start();
			 if (r==1) timer1->Stop();
		 }
private: System::Void statisticsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Statistics ^ st = gcnew Statistics();
			 StreamReader^ sr = gcnew StreamReader("Result.txt",true);
			 st->Show();
			 st->textBox1->Text= sr->ReadToEnd();
		 }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 exit(0);
		 }
};
}
