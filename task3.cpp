#include<iostream>
#include<fstream>
using namespace std;


void storeInfo(string name, int age, int marksOfMatric, int marksOfFsc, int ecatMarks, int percentage);

main()
{
    string name;
    int age;
    int matricMarks;
    int fscMarks;
    int ecatMarks;
    int percentage;

   storeInfo(name, age, matricMarks, fscMarks, ecatMarks, percentage);
    

}
void storeInfo(string name, int age, int matricMarks, int fscMarks, int ecatMarks, int percentage)
{
    fstream file;
    fstream newfile;
    file.open("student.txt", ios::in);
    while(!file.eof())
    {
        file >> name;
        file >> age;
        file >> matricMarks;
        file >> fscMarks;
        file >> ecatMarks;
        file >> percentage;
        cout << name << endl;
        cout << age << endl;
        cout << matricMarks << endl;
        cout << fscMarks << endl;
        cout << ecatMarks << endl;
        cout << percentage << endl;
        newfile.open("allRecord.txt", ios :: out);
        newfile << "Name: ";
        newfile << name <<endl;
        newfile << "Age: ";
        newfile << age << endl;
        newfile << "Matric Marks: ";
        newfile << matricMarks <<endl;
        newfile << "FSC Marks: ";
        newfile << fscMarks <<endl;
        newfile << "Ecat Marks: ";
        newfile << ecatMarks <<endl;
        newfile << "Percentage: ";
        newfile << percentage << endl;
        
        
    }
    newfile.close();
    file.close(); 
    
}