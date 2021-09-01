/* Program name: triangles.cpp
*  Author: Pratham Vadhulas
*  Date last updated: 09/01/2021
* Purpose: Calculates whether or not the sides form a triagle, and if so
           it outputs whether or not the triangle is a right triangle.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float s1,s2,s3;
    float longest = 0.0;
    float small_1, small_2;

    cout<< "type the length of the 1st side: ";
    cin >>s1;
    cout<<"side 1 = " << s1 << endl;
    cout<<   endl << "type the length of the 2nd side: ";
    cin >> s2;
    cout<<"side 2 = " << s2 << endl;
    cout<<  endl <<  "type the length of the 3rd side: ";
    cin >> s3;
    cout<<"side 3 = " << s3 << endl<< endl;

    if (s1 == 0 || s2 == 0 || s3 == 0){
        cout << "triangle = False" << endl <<
        "your lengths don't form a triangle" << endl;
    }
    else if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2){
        cout<< "your inputs forms a triangle" << endl;
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
        if (longest != 0 && pow(small_1,2)+pow(small_2,2)==pow(longest,2)){
            cout << endl<< "triangle = True" << endl <<
            "and your lengths form a RIGHT triangle" << endl;

        } else{
            cout << endl<< "triangle = True" << endl <<
            "but your lengths don't form a RIGHT triangle" << endl;
        }

    }
    else {
        cout << endl<< "triangle = False" << endl <<
        "your lengths don't form a triangle" << endl;
    }
}
