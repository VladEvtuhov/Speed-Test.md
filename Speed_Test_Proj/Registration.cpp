#include "StdAfx.h"
#include "Registration.h"
namespace SpeedTest{
	System::Void Registration::textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
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
				 button1->Enabled = true;
			 }
			 else { button1->Enabled = false; }
			 if (textBox2->Text == "")
             {
                button1->Enabled = false;
             }
		 }
	System::Void Registration::button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 MyMenu ^ mm = gcnew MyMenu();
				 mm->Show();
				 mm->textBox1->Text=this->textBox1->Text;
				 mm->textBox2->Text=this->textBox2->Text;
				 this->Hide();
			 }
	System::Void Registration::Registration_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 timer1->Start();
			 }
	System::Void Registration::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
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
			 else { textBox2->Enabled = false; label1->Enabled = false; button1->Enabled = false; }
			 if (textBox1->Text == "")
             {
                textBox2->Enabled = false;
                label1->Enabled = false;
                button1->Enabled = false;
             }
		 }
	System::Void Registration::timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer1->Stop();
			 r = r + 0.05;
			 this->Opacity=r;
			 timer1->Start();
			 if (r==1) timer1->Stop();
		 }
	System::Void Registration::statisticsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
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
		 }
	System::Void Registration::exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 exit(0);
		 }
}