#include "forma0.h"
#include "forma1.h"
#include "poziom1.h"
#include "MyForm.h"
#include "forma2.h"
using namespace Klotangle;

void Zamknij(Object^ sender, FormClosedEventArgs^ e)
{
	if (Application::OpenForms->Count == 0)
	{
		Application::Exit();
	}
	else
	{
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(Zamknij);
	}
}


[STAThread]
void Main(array<String^>^ args)

{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	forma0^ intro = gcnew forma0();
	intro->FormClosed += gcnew FormClosedEventHandler(Zamknij);
	intro->Show();
	Application::Run();
}