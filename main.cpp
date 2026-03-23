#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

class Command {

public:

	Command() = default;
	string commands;

	Command(string cmd) {

		this->commands = cmd;
	}

	string getCommand() const {

		return this->commands;

	}
};

int main() {

	Command command("");
	std::cout << "Enter Type Command: ";

	string commands = command.getCommand();
	cin >> commands;


	if (commands.c_str() == "Add") {

		std::cout << "Enter Type Command: ";
		string addCommands;
		cin >> addCommands;

		ShellExecuteA(0, "open", addCommands.c_str(), NULL, NULL, SW_SHOWDEFAULT);
	}

	if (commands.c_str() == "Commit") {

		std::cout << "Enter Commit Command: ";
		string commitCommands;
		cin >> commitCommands;

		ShellExecuteA(0, "open", commitCommands.c_str(), NULL, NULL, SW_SHOWDEFAULT);

	}


	if (commands.c_str() == "Push") {

		std::cout << "Enter Push Command: ";
		string pushCommands;
		cin >> pushCommands;


		ShellExecuteA(0, "open", pushCommands.c_str(), NULL, NULL, SW_SHOWDEFAULT);

	}

}