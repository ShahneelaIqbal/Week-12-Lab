#include <iostream>
#include <fstream>
using namespace std;

main()
{
    int count = 0;
    char line;
    fstream file;
    file.open("task.txt", ios::in);
    while(!file.eof())
    {
        file >> line;
        count = count + 1;
    }
    file.close();
    cout << "Lines are:  " << count;
    
}