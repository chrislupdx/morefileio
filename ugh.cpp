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

//takes userInput
takeInput(userInput);
//reads file
readFile(userInput, inData, fileOutput);

//while the filestream is being read to string
while (inData >> fileOutput)
 {
//while getline can still run, increment line
while (getline(inData, getlineOutput))
    {
     //increment the lines int each time newLine evals true
     ++lines;
    //here, getlineOutput prints the filestream line by line.
    // cout << getlineOutput<< endl; 
      
  //loop through getlineOutput and analyze the contents
  for (int i = 0; i < getlineOutput.length(); i++)
     {
 //We are missing the first few words?
 //    cout << getlineOutput[i];
 //    currentChar = getlineOutput[i];
     //if current character is uppercase, increment
   // if (isupper(currentChar))
   //    {
   //     ++upperCase; 
   //   }
     }
//    cout << getlineOutput;
    }
 }
    cout << "upperCase is" << upperCase << endl;
    cout << "number of newlines:" << lines << endl;
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
