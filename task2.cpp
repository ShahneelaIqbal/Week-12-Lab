#include<iostream>
#include<fstream>
using namespace std;
main()
{
    char word;
    fstream file;
    int count = 0;
    file.open("word.txt", ios::in);
    while(!file.eof())
    {
        file >> word;
        if(word == 's')
        {
            count++;
        }   
    }
    file.close();
    cout << "The word comes " << count << " times";
}