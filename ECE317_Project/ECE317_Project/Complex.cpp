#include "Complex.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^args) // ^ object that exists in the framework and it works like a string 
{
	Application::EnableVisualStyles(); // main object application to show something
	Application::SetCompatibleTextRenderingDefault(false);

	//ECE317_Project::Calculator form; // pointer when you see form = ECE317_Project
	//Application::Run(%form); // run the form 

	ECE317_Project::Complex form; // pointer when you see form = ECE317_Project
	Application::Run(%form);  }



