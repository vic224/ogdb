/*
    Filename: ip3a_victoriaB_nicoleC_average.cpp
    Description: : A program that prompts the user to enter three integer values. The
                   program will compute and display the average of the 3 values, as a
                   floating point number, along with the original 3 values input.
    Driver: Victoria Binkley
    Navigator: Nicole Covey
    Date: 1/15/19

*/

#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int num3;
    float average;

    cout << "Input three integers, separated by a space:  ";
    cin >> num1 ;
    cin >> num2 ;
    cin >> num3;
    average = static_cast <float> (num1 + num2 + num3)/3;
    cout << "The average of " << num1 <<", " << num2 << ", and " <<num3
         << " is " << average;



    return 0;
}







