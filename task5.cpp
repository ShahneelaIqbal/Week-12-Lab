#include<iostream>
#include<fstream>
using namespace std;

void countWords(); 
main()
{
    countWords(); 
}
void countWords()
{
    string word;
    fstream file;
    file.open("count.txt", ios::in);
    while(!file.eof())
    {
        file >> word;
        if(word.length() < 4)
        {
            cout << word <<endl;
        }        
    }
    file.close();
}