#include "/public/read.h"
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

void die() {
	cout << "You dun goofed.\n";
	exit(0);
}
vector <int> createBriefCases(int caseChoice) {
	vector <int> briefCase;
	string tempstr;
	int size = 0;
	int temp = 0;
	ifstream caseFile;
	if (caseChoice == 0) {
		caseFile.open("cases");
	} else if (caseChoice == 1) {
		caseFile.open("cases1");
	} else if (caseChoice == 2) {
		caseFile.open("cases2");
	} else if (caseChoice == 3) {
		caseFile.open("cases3");
	} else if (caseChoice == 4) {
		caseFile.open("/public/dealornodeal/cases4");
	}
	if (!caseFile) {
		die();
	}
	getline(caseFile, tempstr);
	size = stoi(tempstr);
	for (int i = 0; i < size; i++) {
		getline(caseFile, tempstr);
		temp = stoi(tempstr);
		briefCase.push_back(temp);
	}
	return briefCase;
}
int dealCalc(vector <int> BriefCases) {
	int sum = 0;
	int temp = 0;
	int count = 0;
	for (int i = 0; i < BriefCases.size(); i++) {
		temp = BriefCases.at(i);
		sum = temp + sum;
		if (BriefCases.at(i) != 0) {
			count = count + 1;
		}
	}
	sum = sum / count;
	return sum;
}


int main() {
	//This is equivalent to string filename; cout << "Please enter a filename\n"; cin >> filename;
	//But on one line instead of three, because I'm cool like that
	string filename = read("Please enter a filename:\n");
	int userInput = 0;
	int deal = 0;
	int casesLeft = 0;
	int caseChoice = 0;

	if (filename == "/public/dealornodeal/cases") {
		caseChoice = 0;
	} else if (filename == "/public/dealornodeal/cases1") {
		caseChoice = 1;
	} else if (filename == "/public/dealornodeal/cases2") {
		caseChoice = 2;
	} else if (filename == "/public/dealornodeal/cases3") {
		caseChoice = 3;
	} else if (filename == "/public/dealornodeal/cases4") {
		caseChoice = 4;
	} else {
		die();
	}
	vector <int> briefCases = createBriefCases(caseChoice);
	casesLeft = briefCases.size();
	bool first = true;
	while (true) {
		if (casesLeft == 1) {
			for (int i = 0; i < briefCases.size(); i++) {
				if (briefCases.at(i) != 0) {
					cout << "You won " << briefCases.at(i) << " dollars!\n";
					return 0;
				}
			}
		}
		if (first) {
			first = false;
		} else {
			cout << "I will offer you " << deal << " dollars to walk away.\n";
		}
		cout << "Please enter a briefcase to open:\n";
		cin >> userInput;
		if (userInput == -1 && deal == 0) {
			cout << "You won " << dealCalc(briefCases) << " dollars!\n";
			return 0;
		}
		if (!cin) {
			die();
		}
		if (userInput == -1) {
			cout << "You won " << deal << " dollars!\n";
			return 0;
		}
		if (userInput <= -2 || userInput >= briefCases.size() || briefCases.at(userInput) == 0) {
			die();
		}
		cout << "That briefcase held " << briefCases.at(userInput) << " dollars\n";
		briefCases.at(userInput) = 0;
		deal = dealCalc(briefCases);
		casesLeft = casesLeft - 1;
	}// loop  curly bracket

	//Next...
	//Do you remember how to open a file?
	//How to check to see if the file opened successfully?
	//How do you store data in a vector?
	//How do you average values across a vector?
}
