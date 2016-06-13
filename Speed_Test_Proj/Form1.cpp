#include "StdAfx.h"
#include "MyMenu.h"
#include "Form1.h"
double r; 
int o;
namespace SpeedTest{
	void Form1::Keyw(wchar_t ch)
			{
				if (ch=='r')
				{
						pictureBox1->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="r";
						chr='r';
				}
				if (ch=='t')
				{
						pictureBox2->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="t";
						chr='t';
				}
				if (ch==' ')
				{
						pictureBox3->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1=" ";
						chr=' ';
				}
				if (ch=='e')
				{
						pictureBox9->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="e";
						chr='e';
				}
				if (ch=='w')
				{
						pictureBox10->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="w";
						chr='w';
				}
				if (ch=='q')
				{
						pictureBox11->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="q";
						chr='q';
				}
				if (ch=='a')
				{
						pictureBox12->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="a";
						chr='a';
				}
				if (ch=='s')
				{
						pictureBox13->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="s";
						chr='s';
				}
				if (ch=='y')
				{
						pictureBox4->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="y";
						chr='y';
				}
				if (ch=='u')
				{
						pictureBox14->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="u";
						chr='u';
				}
				if (ch=='i')
				{
						pictureBox15->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="i";
						chr='i';
				}
				if (ch=='o')
				{
						pictureBox16->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="o";
						chr='o';
				}
				if (ch=='p')
				{
						pictureBox17->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="p";
						chr='p';
				}
				if (ch=='[')
				{
						pictureBox18->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="[";
						chr='[';
				}
				if (ch==']')
				{
						pictureBox19->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="]";
						chr=']';
				}
				if (ch=='d')
				{
						pictureBox20->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="d";
						chr='d';
				}
				if (ch=='f')
				{
						pictureBox21->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="f";
						chr='f';
				}
				if (ch=='g')
				{
						pictureBox22->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="g";
						chr='g';
				}
				if (ch=='h')
				{
						pictureBox23->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="h";
						chr='h';
				}
				if (ch=='j')
				{
						pictureBox24->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="j";
						chr='j';
				}
				if (ch=='k')
				{
						pictureBox25->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="k";
						chr='k';
				}
				if (ch=='l')
				{
						pictureBox26->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="l";
						chr='l';
				}
				if (ch==';')
				{
						pictureBox27->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1=";";
						chr=';';
				}
				if (ch=='\'')
				{
						pictureBox28->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="'";
						chr='\'';
				}
				if (ch=='z')
				{
						pictureBox29->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="z";
						chr='z';
				}
				if (ch=='x')
				{
						pictureBox30->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="x";
						chr='x';
				}
				if (ch=='c')
				{
						pictureBox31->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="c";
						chr='c';
				}
				if (ch=='v')
				{
						pictureBox32->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="v";
						chr='v';
				}
				if (ch=='b')
				{
						pictureBox33->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="b";
						chr='b';
				}
				if (ch=='n')
				{
						pictureBox34->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="n";
						chr='n';
				}
				if (ch=='m')
				{
						pictureBox35->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="m";
						chr='m';
				}
				if (ch==',')
				{
						pictureBox36->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1=",";
						chr=',';
				}
				if (ch=='.')
				{
						pictureBox37->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1=".";
						chr='.';
				}
				if (ch=='/')
				{
						pictureBox38->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="/";
						chr='/';
				}

				if (ch=='R')
				{
						pictureBox1->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="R";
						chr='R';
				}
				if (ch=='T')
				{
						pictureBox2->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="T";
						chr='T';
				}
				if (ch=='E')
				{
						pictureBox9->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="E";
						chr='E';
				}
				if (ch=='W')
				{
						pictureBox10->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="W";
						chr='W';
				}
				if (ch=='Q')
				{
						pictureBox11->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="Q";
						chr='Q';
				}
				if (ch=='A')
				{
						pictureBox12->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="A";
						chr='A';
				}
				if (ch=='S')
				{
						pictureBox13->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="S";
						chr='S';
				}
				if (ch=='Y')
				{
						pictureBox4->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="Y";
						chr='Y';
				}
				if (ch=='U')
				{
						pictureBox14->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="U";
						chr='U';
				}
				if (ch=='I')
				{
						pictureBox15->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="I";
						chr='I';
				}
				if (ch=='O')
				{
						pictureBox16->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="O";
						chr='O';
				}
				if (ch=='P')
				{
						pictureBox17->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="P";
						chr='P';
				}
				if (ch=='{')
				{
						pictureBox18->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="{";
						chr='{';
				}
				if (ch=='}')
				{
						pictureBox19->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="}";
						chr='}';
				}
				if (ch=='D')
				{
						pictureBox20->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="D";
						chr='D';
				}
				if (ch=='F')
				{
						pictureBox21->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="F";
						chr='F';
				}
				if (ch=='G')
				{
						pictureBox22->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="G";
						chr='G';
				}
				if (ch=='H')
				{
						pictureBox23->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="H";
						chr='H';
				}
				if (ch=='J')
				{
						pictureBox24->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="J";
						chr='J';
				}
				if (ch=='K')
				{
						pictureBox25->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="K";
						chr='K';
				}
				if (ch=='L')
				{
						pictureBox26->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="L";
						chr='L';
				}
				if (ch==':')
				{
						pictureBox27->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1=":";
						chr=':';
				}
				if (ch=='\"')
				{
						pictureBox28->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="\"";
						chr='\"';
				}
				if (ch=='Z')
				{
						pictureBox29->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="Z";
						chr='Z';
				}
				if (ch=='X')
				{
						pictureBox30->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="X";
						chr='X';
				}
				if (ch=='C')
				{
						pictureBox31->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="C";
						chr='C';
				}
				if (ch=='V')
				{
						pictureBox32->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="V";
						chr='V';
				}
				if (ch=='B')
				{
						pictureBox33->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="B";
						chr='B';
				}
				if (ch=='N')
				{
						pictureBox34->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="N";
						chr='N';
				}
				if (ch=='M')
				{
						pictureBox35->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="M";
						chr='M';
				}
				if (ch=='<')
				{
						pictureBox36->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="<";
						chr='<';
				}
				if (ch=='>')
				{
						pictureBox37->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1=">";
						chr='>';
				}
				if (ch=='?')
				{
						pictureBox38->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
						str1="?";
						chr='?';
				}
			}
	void Form1::Keyfind(wchar_t k)
			{
				if (chr==k)
				{
					Keyq(k);
				}
				else 
				{
					MessageBox::Show("��������� ������ ��� �����(�������� ���/���� CapsLock)","", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				}
			}
	void Form1::Keyq(wchar_t ch)
			{
				if ((ch=='r') || (ch=='R'))
				{
						pictureBox1->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='t') || (ch=='T'))
				{
						pictureBox2->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if (ch==' ')
				{
						pictureBox3->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='e') || (ch=='E'))
				{
						pictureBox9->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='w') || (ch=='W'))
				{
						pictureBox10->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='q') || (ch=='Q'))
				{
						pictureBox11->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='a') || (ch=='A'))
				{
						pictureBox12->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='s') || (ch=='S'))
				{
						pictureBox13->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='y') || (ch=='Y'))
				{
						pictureBox4->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='u') || (ch=='U'))
				{
						pictureBox14->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='i') || (ch=='I'))
				{
						pictureBox15->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='o') || (ch=='O'))
				{
						pictureBox16->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='p') || (ch=='P'))
				{
						pictureBox17->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='[') || (ch=='{'))
				{
						pictureBox18->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch==']') || (ch=='}'))
				{
						pictureBox19->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='d') || (ch=='D'))
				{
						pictureBox20->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='f') || (ch=='F'))
				{
						pictureBox21->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='g') || (ch=='G'))
				{
						pictureBox22->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='h') || (ch=='H'))
				{
						pictureBox23->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='j') || (ch=='J'))
				{
						pictureBox24->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='k') || (ch=='K'))
				{
						pictureBox25->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='l') || (ch=='L'))
				{
						pictureBox26->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch==';') || (ch==':'))
				{
						pictureBox27->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='\'') || (ch=='\"'))
				{
						pictureBox28->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='z') || (ch=='Z'))
				{
						pictureBox29->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='x') || (ch=='X'))
				{
						pictureBox30->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='c') || (ch=='C'))
				{
						pictureBox31->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='v') || (ch=='V'))
				{
						pictureBox32->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='b') || (ch=='B'))
				{
						pictureBox33->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='n') || (ch=='N'))
				{
						pictureBox34->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='m') || (ch=='M'))
				{
						pictureBox35->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch==',') || (ch=='<'))
				{
						pictureBox36->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='.') || (ch=='>'))
				{
						pictureBox37->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if ((ch=='/') || (ch=='?'))
				{
						pictureBox38->BorderStyle=System::Windows::Forms::BorderStyle::None;
				}
				if (textBox1->Text!="")
				nextkey();
			}
	void Form1::controlkey(wchar_t a)
			{
				if (a==' ') keyf = "space";
				if ((a=='r') || (a=='R')) keyf = "r";
				if ((a=='t') || (a=='T')) keyf = "t";
				if ((a=='e') || (a=='E')) keyf = "e";
				if ((a=='w') || (a=='W')) keyf = "w";
				if ((a=='q') || (a=='Q')) keyf = "q";
				if ((a=='a') || (a=='A')) keyf = "a";
				if ((a=='s') || (a=='S')) keyf = "s";
				if ((a=='y') || (a=='Y')) keyf = "y";
				if ((a=='u') || (a=='U')) keyf = "u";
				if ((a=='i') || (a=='I')) keyf = "i";
				if ((a=='o') || (a=='O')) keyf = "o";
				if ((a=='p') || (a=='P')) keyf = "p";
				if ((a=='[') || (a=='{')) keyf = "[";
				if ((a==']') || (a=='}')) keyf = "]";
				if ((a=='d') || (a=='D')) keyf = "d";
				if ((a=='f') || (a=='F')) keyf = "f";
				if ((a=='g') || (a=='G')) keyf = "g";
				if ((a=='h') || (a=='H')) keyf = "h";
				if ((a=='j') || (a=='J')) keyf = "j";
				if ((a=='k') || (a=='K')) keyf = "k";
				if ((a=='l') || (a=='L')) keyf = "l";
				if ((a==';') || (a==':')) keyf = ";";
				if ((a=='\'') || (a=='\"')) keyf = "'";
				if ((a=='z') || (a=='Z')) keyf = "z";
				if ((a=='x') || (a=='X')) keyf = "x";
				if ((a=='c') || (a=='C')) keyf = "c";
				if ((a=='v') || (a=='V')) keyf = "v";
				if ((a=='b') || (a=='B')) keyf = "b";
				if ((a=='n') || (a=='N')) keyf = "n";
				if ((a=='m') || (a=='M')) keyf = "m";
				if ((a==',') || (a=='<')) keyf = ",";
				if ((a=='.') || (a=='>')) keyf = ".";
				if ((a=='/') || (a=='?')) keyf = ",,";
			}
	void Form1::nextkey()
			{
				if (i<str->Length)
				{
					 controlkey(str[i]);
					 pictureBox5->Load("key\\_"+keyf+".png");
				}
				if (i+1<str->Length)
				{
					 controlkey(str[i+1]);
					 pictureBox6->Load("key\\_"+keyf+".png");
				}
				if (i+2<str->Length)
				{
					 controlkey(str[i+2]);
					 pictureBox7->Load("key\\_"+keyf+".png");
				}
				if (i+3<str->Length)
				{
					 controlkey(str[i+3]);
					 pictureBox8->Load("key\\_"+keyf+".png");
				}
			}
	System::Void Form1::Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				 i=0;
				 j=0;
				 fails = 0;
				 o = 0;
				 sr_znach = 0;
				 str="";
				 while (j<textBox3->Lines->Length)
				 {
					str = str + textBox3->Lines[j];
					j++;
				 }
				 str = str + "0";
				 nextkey();
				 Keyw(str[0]);
				 timer1->Start();
				 timer2->Start();
				 time = clock();
			 }
	System::Void Form1::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 wchar_t k;
			 if (textBox1->Text==str1) 
			 {
				 o++;
				 sr_znach++;
				 k=textBox1->Text[0];
				 i++;
				 Keyfind(k);
			 }
			 if ((textBox1->Text!="") && (textBox1->Text!=str1))
			 {
				 MessageBox::Show("Entering error has occurred(Advice: on\\off CapsLock)","", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				 fails++;
				 if (fails==3) 
				 {
					 StreamWriter^ sw = gcnew StreamWriter("Result.txt",true);
					 sw->WriteLine(textBox2->Text);
					 sw->WriteLine(textBox4->Text);
					 sw->WriteLine(textBox5->Text);
					 sw->WriteLine("FAILS");
					 sw->WriteLine("FAILS");
					 sw->Close();
					 Result ^ res = gcnew Result();
					 res->Show();
					 res->textBox1->Text = this->textBox2->Text;
					 res->textBox2->Text = this->textBox4->Text;
					 res->textBox3->Text = this->textBox5->Text;
					 res->label7->Text = "FAILS";
					 this->Hide();
				 }
			 }

			 if ((str[i]!='0') && (textBox1->Text!="")) { Keyw(str[i]); }
			 else 
			 {
				 if ((textBox1->Text!="") && (str1!="end")) {str1="end"; time = clock() - time;
				 StreamWriter^ sw = gcnew StreamWriter("Result.txt",true);
				 sw->WriteLine(textBox2->Text);
				 sw->WriteLine(textBox4->Text);
				 sw->WriteLine(textBox5->Text);
				 sw->WriteLine(((double)time/CLOCKS_PER_SEC)+" sec.");
				 sw->WriteLine(sr_znach/((float)time/CLOCKS_PER_SEC));
				 sw->Close();
				 Result ^ res = gcnew Result();
				 res->Show();
				 res->textBox1->Text = this->textBox2->Text;
				 res->textBox2->Text = this->textBox4->Text;
				 res->textBox3->Text = this->textBox5->Text;
				 res->label5->Text = "Lead time taken "+((double)time/CLOCKS_PER_SEC)+ " sec.";
				 res->label6->Text = "The average number of clicks per second = "+ sr_znach/((float)time/CLOCKS_PER_SEC);
				 this->Hide();
				 //MessageBox::Show("���� �������, ����� ���������� ������ "+ ((double)time/CLOCKS_PER_SEC)+ " ���.","C������ ���������� ������� � ������� = "+ sr_znach/((double)time/CLOCKS_PER_SEC), MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				 }
			 }
			 textBox1->Text="";
		 }
	System::Void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MyMenu^ mm = gcnew MyMenu();
			 mm->Show();
			 mm->textBox1->Text=this->textBox2->Text;
			 mm->textBox2->Text=this->textBox4->Text;
			 this->Close();
		 }
	System::Void Form1::timer1_Tick_1(System::Object^  sender, System::EventArgs^  e)
		 {
			 label1->Text = "������� � �������: " + o;
			 o = 0;
			 timer1->Stop();
			 timer1->Start();
		 }
	System::Void Form1::timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer2->Stop();
			 r = r + 0.05;
			 this->Opacity=r;
			 timer2->Start();
			 if (r==1) timer2->Stop();
		 }
}