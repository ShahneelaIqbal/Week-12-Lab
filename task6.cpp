#include <iostream>
#include <fstream>
using namespace std;

main()
{
    string name;
    int rollNo;
    int percentage;

    fstream file;
    fstream newfile;
    file.open("marks.txt", ios ::in);
    while (!file.eof())
    {
        file >> name;
        file >> rollNo;
        file >> percentage;
        newfile.open("percentage.txt", ios ::out);

        if (percentage >= 60)
        {
            newfile << "Name: ";
            newfile << name << endl;
            newfile << "Roll number: ";
            newfile << rollNo << endl;
            newfile << "Percentage: ";
            newfile << percentage << endl;
        }
    }
    newfile.close();
    file.close();
}
