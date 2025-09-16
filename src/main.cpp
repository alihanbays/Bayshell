#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main() {

	while(true) {

		// Flush after every std::cout / std:cerr
		cout << unitbuf;
		cerr << unitbuf;

		cout << "$ ";

		string input;
		string command;
		vector<string> commands;

		getline(cin, input);	
		stringstream ss(input);
		
		while (getline(ss, command, ' ')) {
			commands.push_back(command);
		}
		
		if (commands[0] == "exit") {
			if (commands.size() != 2) {
				cout << "Invalid number of arguments\n";
			} else {
				int num = stoi(commands[1]);
				return num;			
			}
		} else {
			cout << input << ": command not found " << endl;
		}
	}

	return 0;
}
