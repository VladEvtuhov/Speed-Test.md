#include "StdAfx.h"
#include "MyMenu.h"

namespace SpeedTest {
	System::Void MyMenu::comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if ((comboBox1->Text=="1 level") || (comboBox1->Text=="2 level") || (comboBox1->Text=="3 level") || (comboBox1->Text=="4 level") || (comboBox1->Text=="5 level") || (comboBox1->Text=="6 level") || (comboBox1->Text=="7 level") || (comboBox1->Text=="8 level") || (comboBox1->Text=="9 level") || (comboBox1->Text=="10 level")) 
					 button3->Enabled=true;
				 else
					 button3->Enabled=false;
			 }
	System::Void MyMenu::button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 Statistics ^ st = gcnew Statistics();
				 StreamReader^ sr = gcnew StreamReader("Result.txt",true);
				 DataTable ^ table = gcnew DataTable();
				 table->Columns->Add("Second Name");
				 table->Columns->Add("Name");
				 table->Columns->Add("Level");
				 table->Columns->Add("Lead time taken");
				 table->Columns->Add("The average number of clicks per second");
				 st->Show();
				 while (sr->Peek()> -1)
				 {
					 table->Rows->Add(sr->ReadLine(), sr->ReadLine(), sr->ReadLine(), sr->ReadLine(), sr->ReadLine());
				 }
				 st->dataGridView1->DataSource = table;
				 sr->Close();
			 }
	System::Void MyMenu::button3_Click(System::Object^  sender, System::EventArgs^  e) 
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
					 this->comboBox1->Text="";
					 this->button3->Enabled=false;
					 f1->Show();
					 this->Hide();
				 }
			 else MessageBox::Show("Enter another difficulty!","", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
		 }
	System::Void MyMenu::button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 exit(0);
		 }
	System::Void MyMenu::button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 String^ sname; String^ fname; String ^ lev; String^ rez1; String^ rez2;
				 Statistics ^ st = gcnew Statistics();
				 StreamReader^ sr = gcnew StreamReader("Result.txt",true);
				 DataTable ^ table = gcnew DataTable();
				 table->Columns->Add("Second Name");
				 table->Columns->Add("Name");
				 table->Columns->Add("Level");
				 table->Columns->Add("Lead time taken");
				 table->Columns->Add("The average number of clicks per second");
				 st->Show();
				 while (sr->Peek()> -1)
				 {
					 sname=sr->ReadLine();
					 fname=sr->ReadLine();
					 lev=sr->ReadLine();
					 rez1=sr->ReadLine();
					 rez2=sr->ReadLine();
					 if ((sname==textBox1->Text) && (fname==textBox2->Text))
						table->Rows->Add(sname, fname, lev, rez1, rez2);
				 }
				 st->dataGridView1->DataSource = table;
				 sr->Close();
			 }
	System::Void MyMenu::MyMenu_Load(System::Object^  sender, System::EventArgs^  e) 
			{
				 timer1->Start();
			}
	System::Void MyMenu::button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Registration ^ reg = gcnew Registration();
			 reg->Show();
			 this->Close();
		 }
	System::Void MyMenu::timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Stop();
			 opacit = opacit + 0.05;
			 this->Opacity=opacit;
		     timer1->Start();
			 if (opacit==1) timer1->Stop();
		 }
}