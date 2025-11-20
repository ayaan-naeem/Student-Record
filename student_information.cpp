#include <iostream>
using namespace std;

int main(){

// Variable Declaration
string name;
string department;
int rollno;
float aggregate;
string section;

// Input from User
cout << " Enter Your Name : ";
getline (cin, name);

cout << " Enter Your Department : ";
getline (cin, department);

cout << " Enter Your Roll Number : ";
cin >> rollno;

cout << " Enter Your Aggregate : ";
cin >> aggregate;

cout << " Enter Your Section : ";
cin >> section;


// Output the Details
cout << " \n\n Student Details : \n\n ";
cout << " Name : " << name << endl;
cout << " Department : " << department << endl;
cout << " Roll Number : " << rollno << endl;
cout << " Aggregate : " << aggregate << endl;
cout << " Section : " << section << endl;

    return 0;
}