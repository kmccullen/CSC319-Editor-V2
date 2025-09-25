#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
	vector <string> file;
	string command = "";
	string input = "";
	string inBuffer;
	string fileName;
	int lineNum;
	ofstream outFile;

	while (command != "quit") {
		cout << "> ";
		cin >> input;

		if (input == "q") {
			break;
		} else if (input == "a") {
			cout << "Enter new line: ";
			cin.ignore(); // Clear the input buffer before reading new data
			getline(cin, inBuffer);
			file.push_back(inBuffer);
		} else if (input[0] == 'd') {
			cin >> lineNum;
			file.erase(file.begin() + (lineNum - 1));
		} else if (input[0] == 'i') {
			cin >> lineNum;
			cout << "Insert line after " << lineNum << "> ";
			cin.ignore();
			getline(cin, inBuffer);
			file.insert(file.begin() + (lineNum - 1), inBuffer);
		} else if (input[0] == 'r') {
			cin >> lineNum;
			cout << "Replace line " << lineNum << "> ";
			cin.ignore();
			getline(cin, inBuffer);
			file[lineNum] = inBuffer;
		} else if (input == "w") {
			cout << "Enter output file name: ";
			cin.ignore();
			cin >> fileName;
			outFile.open(fileName);
			for (auto l : file) {
				outFile << l << endl;
			}
			outFile.close();
		} else if (input == "sort") {
			sort(file.begin(), file.end());
		} else if (input == "stat") {
			int charCount = 0;
			for (auto l : file) {
				charCount += l.size();
			}
			cout << "[" << file.size() << "] [" << charCount << "]" << endl;
		}
                int i = 1;
		for (auto l : file) {
			if (input == "c") {
				cout << "[" << i++ << "] " << "[" << l.size() << "] ";
			} else {
				cout << "[" << i++ << "] ";
			}
			cout << l << endl;;
		}
	}
}

