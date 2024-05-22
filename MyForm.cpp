#include "MyForm.h"
using namespace Course;

int main() {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	// Создание главного окна и его запуск
	System::Windows::Forms::Application::Run(gcnew MyForm());
	return 0;
}

