#include "MyForm.h"

using namespace System::Windows::Forms;
using namespace System;

[STAThreadAttribute]

int main(array < String^> ^ args ) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Grid1::MyForm form1;
	Application::Run(% form1);

	return 0;
}

