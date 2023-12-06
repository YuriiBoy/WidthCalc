#include "Header.h"
#include "Dialog.h"

int main()
{
	try {
		Dialog dialog;
		dialog.inputData();
		dialog.outputData();
	}
	catch (const std::runtime_error& error) {
		std::cerr << " Runtime error: " << error.what() << std::endl;
	}
}
