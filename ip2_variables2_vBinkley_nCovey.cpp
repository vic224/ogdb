/*****************************************************************************
    Filename:	ip2_variables2_vBinkley_nCovey.cpp
    Description:	Program to output some values of different data types.
    Driver: Victoria Binkley
    Navigator: Nicole Covey
    Date:1/10/19

******************************************************************************/

#include <iostream>  //cout
#include <iomanip> //fixed,showpoint, setw,setprecision,setfill
#include <string> // string data type
using namespace std;

// main function
int main()
{
    string myName;
    char lastInitial;
    int studentIDNo;
    bool isFreshman;

    myName = "Victoria";
    lastInitial = 'B';
    studentIDNo = 718791;
    isFreshman = 0;


    cout << "My Name: " << setw(16) << myName << " " << lastInitial << endl;
    cout << "Student ID#: " << setw(10) << studentIDNo << endl;
    cout << "Freshman? " << setw(8) << isFreshman;


    return 0;


}
