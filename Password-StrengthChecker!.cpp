/*

AUTHOR: Prithbiraj Mahanta
DATA: 6 MARCH, 2025
SUBJECT: Password Checker Tool
LANGUAGES USED: C++



*/



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    cout<<"\t\n\n###################### WELCOME TO PASSWORD CHECKER ######################\n"<<endl;
    string filename = "w1.txt";  // FILE NAME
    ifstream file(filename);     // OPEN FILE

    if (!file) {  // CHECK THE VALIDITY OF THE FILE
        cout << "Error: Unable to open " << filename << endl;
        return 1;
    }

    string inputPassword;
    cout << "Enter the password to check: ";
    cin >> inputPassword;

    string filePassword;
    bool found = false;
    int lineNumber = 0;

    while (getline(file, filePassword)) { // IT READS EACH LINE
        lineNumber++;
        if (filePassword == inputPassword) {
            found = true;
            cout << "Warning: Password found in dictionary at line " << lineNumber << "!" << endl;
            cout << "Change this password immediately! It is vulnerable to attacks.\n";
            break;
        }
    }

    file.close(); // BEST PRACTICE TO CLOSE THE FILE AFTER USING IT

    if (!found) {
        cout << "Great: Your password isn't in the dictionary!\n";
        cout << "This means it's tougher to crack using dictionary attacks.\n";
    }

    return 0;
}
