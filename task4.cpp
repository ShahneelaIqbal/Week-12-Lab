#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string line;
    char word;
    fstream file;
    int count = 0;
    file.open("search.txt", ios::in);
    while (!file.eof())
    {
        file >> line;
        file >> word;
        if (word == 't')
        {
            count++;
        }
    }
    file.close();
    cout << count;
}