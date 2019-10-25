//practice for 140u bypass
//prompts the user and accepts the name of an input file
//read the contents of the input file
//display the number of lines, total characters, upper-case characters, and lower-case characters in the input file

#include <iostream>
#include <iomanip>
#include <string> 
#include <fstream>

using namespace std;
int main(){
	ifstream inData;
	string fileOutput, userInput;
	string inDataInput;

//prompts the user and accepts the name for an input text file.
	cout << "input a file location" << endl;
	cin >> userInput;
	cout << "userInput is " << userInput << endl;
	inDataInput = userInput.c_str();
	cout << "inDataInput is " << inDataInput << endl;

//read the contents of the input file	
	inData.open(inDataInput);
	inData >> fileOutput;
	cout << "fileOutput is:'" << fileOutput << "'" << endl;

//Display number of lines, total character count, upper-case characters,
//lower-case characters present in the input file



	inData.close();
	return 0;
}
