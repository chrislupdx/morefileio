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
int lines = 0;

//takes userInput
takeInput(userInput);
//reads file
readFile(userInput, inData, fileOutput);

//while the filestream is being read to string
while (inData >> fileOutput)
  {
 //output as string or char see if we do do that on the chunk near ln 41

//for the length of the file output, traverse for...
for (i = 0; i <= fileOutput.length(); i++)
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
        
       // cout << getlineOutput[i] << endl;
       }

       };

    cout << getlineOutput;
    }
  }


    cout << lines << endl;
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
