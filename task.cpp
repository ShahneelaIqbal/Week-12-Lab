#include<iostream>
#include<fstream>
using namespace std;

void addUser(string userName, string password);
void storeUser(string userName, string password);
bool loginUser(string userName, string password);
bool isValid(string userName);
void viewStudent();
void loadData();

string userNames[100];
string passwords[100];
int userCount = 0;
bool flag = false;
main()
{
    loadData();
    string userName;
    string password;
    int choice = 3;
    while(choice != 0)
    {
        cout << "1. Press 1 to sign up."<<endl;
        cout << "2. Press 2 to view all users." <<endl;
        cout << "3. Press 3 to sign in." <<endl;
        cout << "2. Press 0 to exit." <<endl;
        cout <<endl; 
        cout << "Enter Choice: ";
        cin >> choice;
        if(choice == 1)
        {
            bool decision;
            cout << "Enter Username: ";
            cin>> userName;
            cout << "Enter Password: ";
            cin >> password;
            decision = isValid(userName);
            if(decision == true)
            {
                addUser(userName, password);
                storeUser(userName, password);    
            }
            else
            {
                cout << "Already exist! " <<endl;
            }
                    
        }
        else if(choice == 2)
        {
            viewStudent();
        }
        else if(choice == 3)
        {
            cout << "Enter Username: ";
            cin>> userName;
            cout << "Enter Password: ";
            cin >> password;
            flag = loginUser(userName, password);
            if (flag == true)
            {
                cout << "Valid user.";
            }
            else
            {
                cout << "Invalid user.";
            }
        }

    }



} 
void addUser(string userName, string password)
{
    system("cls");
    userNames[userCount] = userName;
    passwords[userCount] = password;
    userCount++;
}  
void storeUser(string userName, string password)
{
    system("cls");
    fstream file;
    file.open("example1.txt", ios::app);
    file << userName << endl;
    file << password << endl;
    file.close();

}
bool loginUser(string userName, string password)
{
    system("cls");    
    for(int idx=0; idx<userCount; idx++)
    {
        if (userNames[idx] == userName && passwords[idx] == password)
        {
            flag = true;
            break;
        }
    }
    return flag;

}
void viewStudent()
{
    system("cls");
    cout << "User Names " <<   "\t\t\t" << "Passwords" << endl;
    cout << endl; 
    for(int idx=0; idx<userCount; idx++)
    {
        cout << userNames[idx] << "\t\t" << passwords[idx] <<endl;
    }
}
void loadData()
{
    system("cls");
    string username;
    string password;
    fstream file;
    file.open("example1.txt", ios::in);
    
    while(getline(file, username) && getline(file, password))
    {
        userNames[userCount] = username;
        passwords[userCount] = password;
        userCount++;
    }
    file.close();
}
bool isValid(string userName)
{
    system("cls");
    bool flag = true;
    for(int idx=0; idx<userCount; idx++)
    {
        if (userNames[idx] == userName)
        {
            flag = false;
            break;
        }
    }
    return flag;
}