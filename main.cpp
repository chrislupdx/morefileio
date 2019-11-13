//practice for 140u bypass
//prompts the user and accepts the name of an input file
//read the contents of the input file
//display the number of lines, total characters, upper-case characters, and lower-case characters in the input file

#include <iostream>
#include <iomanip>
#include <string> 
#include <fstream>
		
using namespace std;
char upperCase();
char lowerCase();

int main()
{
	ifstream inData;
	string fileOutput, userInput;
	string inDataInput;
	int spaces, i;
	int totalLines, totalCharacterCount, upperCaseCharacters, lowerCaseCharacters;
	int newLines;
	string inDataStorage;
	char c;

//prompts the user and accepts the name for an input text file.
	cout << "input a file location" << endl;
	cin >> userInput;
//	cout << "userInput is " << userInput << endl;
	inDataInput = userInput.c_str();
//	cout << "inDataInput is " << inDataInput << endl;

//read the contents of the input file	
	inData.open(inDataInput);
	inData >> fileOutput;

//this loop searches for newline characters (off by 1 rn)
//while (!inData.eof())
//{	
//	getline(inData, inDataStorage, '\n');
//	if(c != ' '){
	//increment for the # of times that getline can run
//	newLines++;
//	}
//}

//the do/while is supposed to parse the filestream
do
{

//loop below parses fileOutput on parse for newline characters
	for(i = 0; i <= fileOutput.length(); i++)
{  	
	c = fileOutput[i];

//counts uppercase characters.	
	if (isupper(c))
		{
		upperCaseCharacters++;
		}

//countds lowercase characters.
	if (islower(c))
	{
	lowerCaseCharacters++;
	}

//counts characters
	if (isalpha(c) || isdigit(c))
	{
	totalCharacterCount++;
		}
	}
}
while(inData >> fileOutput);
//this while statement is supposed to go off while things are parsing

cout << "number of newLine characters: " << newLines << endl;
cout << "number of lower case characters: " << lowerCaseCharacters << endl;
cout << "number of upper case characters: " << upperCaseCharacters << endl;
cout << "number iof characters: " << totalCharacterCount << endl;

//Display number of lines, total character count, upper-case characters,
//lower-case characters present in the input file

	inData.close();
	return 0;
}
