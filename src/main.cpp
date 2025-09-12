#include <iostream>
#include <string>

using namespace std;
int main() {

	while(true) {

		// Flush after every std::cout / std:cerr
		cout << unitbuf;
		cerr << unitbuf;

		cout << "$ ";

		string input;
		getline(cin, input);

		if (input == "exit") {
			break;
		} else {
			cout << input << ": command not found " << endl;
		}
	
	}

	return 0;
}
