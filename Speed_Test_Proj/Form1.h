#pragma once
#include <fstream>
#include <string>
#include <cstring>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>
#include "Result.h"

namespace SpeedTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox1;



	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::TextBox^  textBox3;

	public: String^ str; String^ str1; char chr; int i; int j; String^ keyf; clock_t time; int o; int sr_znach; int fails; double r;

	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	private: 
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Timer^  timer2;
	public: 

	private: 

	public: 
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	public: 
	public: void Keyw(wchar_t ch)
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
	public: void Keyfind(wchar_t k)
			{
				if (chr==k)
				{
					Keyq(k);
				}
				else 
				{
					MessageBox::Show("Произошла ошибка при вводе(Возможно Вкл/Выкл CapsLock)","", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				}
			}
	public: void Keyq(wchar_t ch)
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
	public: void controlkey(wchar_t a)
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
	public: void nextkey()
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
private: System::ComponentModel::IContainer^  components;
public: 
	private: 


	protected: 

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(190, 150);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(230, 150);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(41, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Form1::pictureBox2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(557, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 53);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(596, 93);
			this->textBox3->TabIndex = 8;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(180, 270);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(200, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(281, 7);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(40, 40);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(327, 12);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 30);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(363, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(30, 30);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(399, 12);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(30, 30);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 15;
			this->pictureBox8->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 22);
			this->label1->TabIndex = 16;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(150, 150);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 40);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 17;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(110, 150);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 40);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 18;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(70, 150);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(40, 40);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 19;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(85, 190);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(40, 40);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 20;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(125, 190);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(40, 40);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 21;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(270, 150);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 40);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(310, 150);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(40, 40);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 23;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(350, 150);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(40, 40);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 24;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(390, 150);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(40, 40);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 25;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(430, 150);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(40, 40);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 26;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(470, 150);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(40, 40);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 27;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(510, 150);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(40, 40);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 28;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(165, 190);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(40, 40);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 29;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(205, 190);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(40, 40);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 30;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(245, 190);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(40, 40);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 31;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(285, 190);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(40, 40);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 32;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(325, 190);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(40, 40);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 33;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(365, 190);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(40, 40);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 34;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(405, 190);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(40, 40);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 35;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(445, 190);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(40, 40);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 36;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(485, 190);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(40, 40);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 37;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(100, 230);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(40, 40);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 38;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(140, 230);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(40, 40);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 39;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(180, 230);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(40, 40);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 40;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(220, 230);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(40, 40);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 41;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(260, 230);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(40, 40);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 42;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(300, 230);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(40, 40);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 43;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(340, 230);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(40, 40);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 44;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(380, 230);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(40, 40);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 45;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(420, 230);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(40, 40);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 46;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(460, 230);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(40, 40);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 47;
			this->pictureBox38->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(689, 257);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(18, 13);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(10, 7);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(23, 20);
			this->textBox2->TabIndex = 48;
			this->textBox2->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(39, 7);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(23, 20);
			this->textBox4->TabIndex = 49;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(70, 7);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(23, 20);
			this->textBox5->TabIndex = 50;
			this->textBox5->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 25;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(619, 347);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(635, 385);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(635, 385);
			this->Name = L"Form1";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Keyboard";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
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

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
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
				 MessageBox::Show("Entering error has occured(Advice: on\\off CapsLock)","", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				 fails++;
				 if (fails==3) 
				 {
					 StreamWriter^ sw = gcnew StreamWriter("Result.txt",true);
					 sw->WriteLine("Name:"+textBox2->Text);
					 sw->WriteLine("Second Name:"+textBox4->Text);
					 sw->WriteLine("Level:"+textBox5->Text);
					 sw->WriteLine("Result: FAILS");
					 sw->WriteLine("#########################################################");
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
				 sw->WriteLine("Name:"+textBox4->Text);
				 sw->WriteLine("Second Name:"+textBox2->Text);
				 sw->WriteLine("Level:"+textBox5->Text);
				 sw->WriteLine("Result:");
				 sw->WriteLine("Lead time taken: "+((double)time/CLOCKS_PER_SEC)+" sec.");
				 sw->WriteLine("The average number of clicks per second =  "+sr_znach/((float)time/CLOCKS_PER_SEC));
				 sw->WriteLine("#########################################################");
				 sw->Close();
				 Result ^ res = gcnew Result();
				 res->Show();
				 res->textBox1->Text = this->textBox2->Text;
				 res->textBox2->Text = this->textBox4->Text;
				 res->textBox3->Text = this->textBox5->Text;
				 res->label5->Text = "Lead time taken "+((double)time/CLOCKS_PER_SEC)+ " sec.";
				 res->label6->Text = "The average number of clicks per second = "+ sr_znach/((float)time/CLOCKS_PER_SEC);
				 this->Hide();
				 //MessageBox::Show("Тест окончен, время выполнения заняло "+ ((double)time/CLOCKS_PER_SEC)+ " сек.","Cреднее количество нажатий в секунду = "+ sr_znach/((double)time/CLOCKS_PER_SEC), MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
				 }
			 }
			 textBox1->Text="";
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
				if (pictureBox2->BorderStyle==System::Windows::Forms::BorderStyle::Fixed3D)
						pictureBox2->BorderStyle=System::Windows::Forms::BorderStyle::None;	
				else 
						pictureBox2->BorderStyle=System::Windows::Forms::BorderStyle::Fixed3D;
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 exit(0);
		 }

private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e)
		 {
			 label1->Text = "Нажатий в секунду: " + o;
			 o = 0;
			 timer1->Stop();
			 timer1->Start();
		 }

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timer2->Stop();
			 r = r + 0.05;
			 this->Opacity=r;
			 timer2->Start();
			 if (r==1) timer2->Stop();
		 }
};
}

