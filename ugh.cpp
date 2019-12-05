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
int i, upperCase;
char c, currentChar;
string stringChar, userInput, fileOutput;
string getlineOutput, remade;
ifstream inData;
int lines = 0;
int upper = 0;
int chars = 0;
int lower = 0;
int length;
int charCounter = 0;
char charParse[length];
//takes userInput
takeInput(userInput);
//reads file
readFile(userInput, inData, fileOutput);

while (inData >> fileOutput)
  {
while (getline(inData, getlineOutput))//while getline can still run, increment line
    {
     ++lines; //increment the lines int each time newLine evals true
    }
  }  
inData.close();
inData.open(userInput);

  while (inData >> fileOutput) //trying to read char nums in string
  {
    chars = chars + fileOutput.length();
  }
  length = chars; //character count should get the ln of the whole thing
inData.close();
inData.open(userInput);

 
  while (inData >> fileOutput) //second traversal
  {
   // cout << fileOutput.c_str() << endl;
    for (int i = 0; i < fileOutput.length(); i++)
    {
      if(isupper(fileOutput.c_str()[i]))
      {
        ++upper;
      }
      if(islower(fileOutput.c_str()[i]))
      {
       ++lower;
      } 
    }
  } 

  cout << endl; 
  cout << "character count: " << chars << endl;
  cout << "upperCase is: " << upper << endl;
  cout << "lowerCase is: " << lower << endl;
  cout << "number of newlines: " << lines << endl;
return 0;  
}

void takeInput(string& userInput)
{
//prompts the user anad accepts the name for an input text file
cout << "Input a file lcoation" << endl; 
cin >> userInput;

//stringify
userInput = userInput.c_str(); //holy fuck can we put it in an array instead
}

void readFile(string userInput, ifstream& inData, string& fileOutput)
{
  inData.open(userInput);
}
