/* Program name: BMI_calc.cpp
*  Author: ...
*  Date last updated: 09/02/2000
* Purpose: Calculates the BMI of a person based on the weight & height.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float weight,height;
    int feet;
    char comma;
    int inches = 0;
    float BMI,BMI_rnd;

    cout<<"Enter your height in feet" <<
    " followed by inches seperated by a ( ' ) ";
    cout<<"\n\nIf your height is exatly in feet, no input needed: ";
    cin >> feet >> comma >> inches;
    cout<<"\nEnter your weight: ";
    cin >> weight;
    cout << "\nYour weight: "<< weight << endl;
    cout << "\nAnd Your height: "<< feet << " ' "<<inches<<endl;
    cout << "Calculating your BMI\n.\n";

    if (feet > 0 || weight > 0){
        height = (feet*12)+inches;
        BMI = (weight/pow(height,2))*703;
        if (BMI >25){
            cout << "your BMI is " <<fixed <<setprecision(2)<< BMI << endl;
            cout << "\nGet some fresh air and maybe go for a walk." <<
            "\nYou're overweight";
        }else if (BMI < 18.5){
            cout << "your BMI is " <<fixed <<setprecision(2)<< BMI << endl;
            cout << "\nAdd another meal to your shopping list." <<
            "\nYou're underweight";
        }else{
            cout << "your BMI is " <<fixed <<setprecision(2)<< BMI << endl;
            cout << "\nYou seem healthy";
        }
    }else{
        cout<<"the weight or height you entered was less than or equal to 0"<<
        endl<<"Please enter a valid weight and height";
    }
}
