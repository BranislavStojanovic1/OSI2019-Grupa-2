#include "Prijava.h"

using namespace System;
[STAThreadAttribute]

int main()
{
	Windows::Forms::Application::EnableVisualStyles();
	Windows::Forms::Application::Run(gcnew AdministrativnaAplikacija::Prijava());
	return 0;
}
