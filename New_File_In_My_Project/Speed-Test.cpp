// Speed-Test.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"
#include "Registration.h"
#include "Result.h"
#include <fstream>

using namespace SpeedTest;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Registration());
	return 0;
}
