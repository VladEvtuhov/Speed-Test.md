// Speed-Test.cpp: главный файл проекта.

#include "stdafx.h"
#include "Form1.h"
#include "Registration.h"
#include "Result.h"
#include <fstream>

using namespace SpeedTest;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	// Создание главного окна и его запуск
	Application::Run(gcnew Registration());
	return 0;
}
