/* Program name: triangles.cpp
*  Author: ...
*  Date last updated: 09/01/2021
* Purpose: Calculates whether or not the sides form a triagle, and if so
           it outputs whether or not the triangle is a right triangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float s1,s2,s3; //3 sides
    float longest = 0.0; //hypotenuse
    float small_1, small_2; //other 2 smaller sides


    //input format
    cout<< "type the length of the 1st side: ";
    cin >>s1; //input goes into s1

    cout<<"side 1 = " << s1 << endl; //returns the entered number.

    cout<<   endl << "type the length of the 2nd side: ";
    cin >> s2; //input goes into s2

    cout<<"side 2 = " << s2 << endl; //returns the entered number.

    cout<<  endl <<  "type the length of the 3rd side: ";
    cin >> s3;//input goes into s2

    cout<<"side 3 = " << s3 << endl<< endl; //returns the entered number.

    // if any on of the sides equals 0 nothing else will execute
    // if not, the else statement below will execute.
    //          || stands for 'or'
    if (s1 == 0 || s2 == 0 || s3 == 0){
        cout << "triangle = False" << endl <<
        "your lengths don't form a triangle" << endl; // not a triangle
    }
    // when the else statement executes it checks if it forms a triangle
    // the test for that is the sum of 2 sides must be greater than the 3rd
    // this expression checks for all sides.
    // if it passes the following executes
    // if it doesn't, the else statement on the very bottom will execute
    else if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2){
        cout<< "your inputs forms a triangle" << endl;

        // everything here is within the above 'else if' statement

        // the next 3 if statements are seeing which one is longest side
        // if one of the sides is longer than the other 2 sides, we have then
        // longest side(hypotenuse). if then the side gets assigned to then
        // variable "longest".
        if (s1>s2 && s1>s3){
            longest = s1;
            small_1 = s2;
            small_2 = s3;
        }
        else if (s2>s1 && s2>s3){
            longest = s2;
            small_1 = s1;
            small_2 = s3;
        }
        else if (s3>s1 && s3>s2){
            longest = s3;
            small_1 = s1;
            small_2 = s2;
        }

        // if there wasn't a longest side, the "longest" wouldn't have changed
        // it would still be 0

        // this if statement executes only if longest is not equal to 0
        // and(&&), pythagoreon theorem is true.
        // if this passes we have a RIGHT triangle
        if (longest != 0 && pow(small_1,2)+pow(small_2,2)==pow(longest,2)){
            cout << endl<< "triangle = True" << endl <<
            "and your lengths form a RIGHT triangle" << endl; //output

        // if the above statement doesn't pass then this will execute.
        } else{
            cout << endl<< "triangle = True" << endl <<
            "but your lengths don't form a RIGHT triangle" << endl; //output
        }
    }

    // this executes only if it doesn't pass the initial triangle test.
    else {
        cout << endl<< "triangle = False" << endl <<
        "your lengths don't form a triangle" << endl; //output
    }
}
