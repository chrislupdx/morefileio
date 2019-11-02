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
	int spaces, i, totalLines, totalCharacterCount, upperCaseCharacters, lowerCaseCharacters;
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
do
{
//	cout << fileOutput << ' ';

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
	if (islower(c) && !isspace(c))
	{
	lowerCaseCharacters++;
	}

//counts characters
	if (isalpha(c) || isdigit(c))
	{
	totalCharacterCount++;
	}
//counts newline charactesr
//	if(fileOutput)
}
}
while(inData >> fileOutput);
cout << "number of lower case characters: " << lowerCaseCharacters << endl;
cout << "number of upper case characters: " << upperCaseCharacters << endl;
cout << "number of characters: " << totalCharacterCount << endl;
cout << "fileoutput: " <<  fileOutput << endl;


//still needs to be able to read the whle output

//Display number of lines, total character count, upper-case characters,
//lower-case characters present in the input file

	inData.close();
	return 0;
}
