#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main()
{
    ofstream MyFile;
    ifstream MyFile2("myfile.txt");
    MyFile.open("myfile.txt", ios::app);

    string username;
    string line;
    bool isUsernameAlreadyExist = false;
    string password;
    do
    {
        cout << "Enter username: ";
        cin >> username;
        cin.ignore();
        isUsernameAlreadyExist = false;
        while (getline(MyFile2, line))
        {
            if (username.compare(line) == 0)
            {
                isUsernameAlreadyExist = true;
                cout << "Username is already exist" << endl;
            }
            else if (!isUsernameAlreadyExist)
            {
                isUsernameAlreadyExist = false;
            }
        }

    } while (isUsernameAlreadyExist);
    cout << "Enter password: ";
    cin >> password;

    MyFile << username << endl;
    MyFile << password << endl;

    MyFile.close();
    MyFile2.close();
}
