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
	int spaces, i, totalLines, totalCharacterCount, upperCaseCharacters, lowerCaseCharacters;
//prompts the user and accepts the name for an input text file.
	cout << "input a file location" << endl;
	cin >> userInput;
//	cout << "userInput is " << userInput << endl;
	inDataInput = userInput.c_str();
//	cout << "inDataInput is " << inDataInput << endl;

//read the contents of the input file	
	inData.open(inDataInput);
	inData >> fileOutput;
do
{
//	cout << fileOutput << ' ';
	//loop below attempts to parse fileOutput on parse for newline characters
	for(i = 1; i <= fileOutput.length(); i++)
	{
	if(fileOutput[i] == '\n')
		totalLines ++;
	
	if(fileOutput[i] == 'O')
		spaces ++;
	};	

}
while(inData >> fileOutput);

cout << "number of newlines: " << totalLines << endl;
cout << "number of spaces: " << spaces << endl;
cout << fileOutput;


//still needs to be able to read the whle output

//Display number of lines, total character count, upper-case characters,
//lower-case characters present in the input file

	inData.close();
	return 0;
}
