/* Program name: BMI_calc.cpp
*  Author: 
*  Date last updated: 09/08/2021
* Purpose: Calculates the BMI of a person based on the weight & height.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    // defining the Variables

    float weight;      // variable for the weight input

    int feet;          // input of the height in feet goes into this variable

    char comma;        // the character that seperates feet from inches
                       // when the user types their height in

    int inches = 0;    // A person can be exact height,
                       // so inches is defaulted to 0

    float height;      // the height changed from feet to inches

    float BMI;         // The BMI variable

    // taking inputs:

    cout<<"Enter your height in feet" <<
    " followed by inches seperated by a ( ' ) ";
    cout<<"\n\nIf your height is exatly in feet, no inches needed: ";
    cin >> feet >> comma >> inches;
    cout<<"\nEnter your weight: ";
    cin >> weight;
    cout << "__________________\n";
    cout << "\nYour weight    : "<< weight << "    lbs";
    cout << "\nAnd Your height: "<< feet << " ft "<<inches<< " in " << endl;
    cout << "__________________\n";
    cout << "\nCalculating your BMI\n";
    cout << "__________________\n\n";
    // Calculations

    // feet and weight can only be greater than 0.
    // The code executes only if it is greater than 0 here.
    if (feet > 0 || weight > 0)
    {
        height = (feet*12)+inches;          // Total height is Calculated
        BMI = (weight/pow(height,2))*703;   // Accurate BMI is Calculated

        // overweight or underweight conditions.

        // If BMI is greater than 25. the following executes
        if (BMI >25){
                                          // BMI is rounded to 2 points
            cout << "your BMI : " <<fixed <<setprecision(2)<< BMI << endl;
            cout << "\nGet some fresh air and maybe go for a walk." <<
            "\nYou're overweight";

        // if the BMI is not greater than 25,
        // it checks if it lesser than 18.5,
        }else if (BMI < 18.5){

            cout << "your BMI : " <<fixed <<setprecision(2)<< BMI << endl;
            cout << "\nAdd another meal to your shopping list." <<
            "\nYou're underweight";

        // if BMI is neither lesser than 18.5 or greater than 25,
        // the following executes
        }else{

            cout << "your BMI : " <<fixed <<setprecision(2)<< BMI << endl;
            cout << "\nYou seem healthy!";
        }

    // If height or weight was = 0 or less than 0,this executes.
    }else{
        cout<<"the weight or height you entered was less than or equal to 0"<<
        endl<<"Please enter a valid weight and height";
    }
}
