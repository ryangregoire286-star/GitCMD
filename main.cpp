#include <iostream>
#include <Windows.h>
#include <string>
#include <tuple>
#include <algorithm>
#include <cctype>
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

static void PrintTitle(string title) {
	std::cout << title << std::endl;
}

int main() {


	const auto [x, y, z] = std::make_tuple("Add", "Commit", "Push");

	string title = "Git-Hub Command Parser";

	std::transform(title.begin(), title.end(), title.begin(), ::toupper);
	PrintTitle(title);

	Command command("");
	std::cout << "Enter Type Command: ";

	string commands = command.getCommand();
	cin >> commands;


	if (commands.c_str() == x) {

		std::cout << "Enter Type Command: ";
		string addCommands;
		std::transform(addCommands.begin(), addCommands.end(), addCommands.begin(), ::toupper);
		PrintTitle(addCommands);
		cin >> addCommands;


		ShellExecuteA(0, "open", addCommands.c_str(), NULL, NULL, SW_SHOWDEFAULT);
	}

	if (commands.c_str() == y) {

		std::cout << "Enter Commit Command: ";
		string commitCommands;
		std::transform(commitCommands.begin(), commitCommands.end(), commitCommands.begin(), ::toupper);
		PrintTitle(commitCommands);
		cin >> commitCommands;


		ShellExecuteA(0, "open", commitCommands.c_str(), NULL, NULL, SW_SHOWDEFAULT);

	}


	if (commands.c_str() == z) {

		std::cout << "Enter Push Command: ";
		string pushCommands;
		std::transform(pushCommands.begin(), pushCommands.end(), pushCommands.begin(), ::toupper);
		PrintTitle(pushCommands);
		cin >> pushCommands;



		ShellExecuteA(0, "open", pushCommands.c_str(), NULL, NULL, SW_SHOWDEFAULT);

	}

}