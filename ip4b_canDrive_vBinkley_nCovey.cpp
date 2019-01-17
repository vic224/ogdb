/*
    Filename: ip4b_canDrive_victoriaB_nicoleC.cpp
    Description: : A program to let the user know if she or he can legally drive
    Driver: Victoria Binkley
    Navigator: Nicole Covey
    Date: 1/17/19

*/

#include <iostream> //cout, cin, endl
#include <string>
using namespace std;

int main()
{

    int age;
    char license;
    string insurance;


    cout << "How old are you?  ";
    cin >> age;
    cout << "Do you have a license(y/n)?  17";
    cin >> license;
    cout << "What is the name of your insurance company "
         << "(type none if you don't have any) ";
    cin >> insurance;
    cout << endl;

    if (age >= 16 && license == 'y' && insurance != "none")
        cout << "You can drive!!!!!!";

    else
        cout << "You are grounded from cars!!!!!!";


    return 0;
}







