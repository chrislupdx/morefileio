//once more, with feeling.
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

void takeInput(string& userInput);
void readFile(string userInput, ifstream& inData, string& fileOutput);
void showContent( );

int main()
{
int i;
char c;
string stringChar, userInput, fileOutput;
string getlineOutput, remade;
ifstream inData;

//takes userInput
takeInput(userInput);
//reads file
readFile(userInput, inData, fileOutput);

//while the filestream is being read to string
while (inData >> fileOutput)
{
//for the length of the file output, traverse for...
for (i = 0; i <= fileOutput.length(); i++)
  {
//ok but how do you use getline to ping stuff
//getline(inData, fileOutput);  
  
//output as string or char
 stringChar = fileOutput[i];
 cout << stringChar; 
  
  }
}

  return 0;
}

void takeInput(string& userInput)
{
//prompts the user anad accepts the name for an input text file
cout << "Input a file lcoation" << endl; 
cin >> userInput;

//stringify
userInput = userInput.c_str();
}

void readFile(string userInput, ifstream& inData, string& fileOutput)
{
//opens filestream at userInput location
  inData.open(userInput);
  inData >> fileOutput;
}
