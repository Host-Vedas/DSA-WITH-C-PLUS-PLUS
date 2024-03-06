#include <iostream>
using namespace std;
int main()
{
    // defining a char array
    char name[10];
    char full_Name[30];
    cout << " Enter your name" << endl;
    cin >> name;          //     i/p -> babbar vaiya
    cout << name << endl; //    o/p -> babbar
    // when a null character i.e (\0,space,tab) is encountered the process is terminated

    cout << " We are going to read all the character including null character " << endl;
    cin.getline(full_Name, 50);
    cout << full_Name << endl;
    return 0;
}