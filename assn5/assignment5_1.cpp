#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using namespace std;


void createDataFile(){

    int x=0, y=0;
    ofstream target;
    target.open ("linearData.txt");

    for (int j=0; j < 6; j++)
    {
        target  << " " << x;
        target  << " " << y << endl;
        x = (x+2);
        y = (x + 1);
    }
    target.close();
}

int summationX(){
    int x[9] = {5,6,4,7,8,5,6,3,8};
    int summation=0;
    for(int i: x){
        summation+=i;
    }
    summation= summation/9;
    return summation;
}
int summationY(){
    int y[9] = {6,5,5,7,7,6,5,5,6};
    int summation=0;
    for(int i: y){
        summation+=i;
    }
    summation= summation/9;
    return summation;
}

void linearRegression(){
    int x[9] = {5,6,4,7,8,5,6,3,8};
    int y[9] = {6,5,5,7,7,6,5,5,6};
    int sumY=summationY();
    int sumX=summationX();
    int slopeTop=0;
    int slopeBot=0;

    for(int i=0;i<9;i++){
        slopeTop= slopeTop+ (x[i]-sumX)*( y[i]-sumY);
    }
    for(int i=0;i<9;i++){
        slopeBot= slopeBot+ (x[i]-sumX)*(x[i]- sumX);
    }
    int b1= slopeTop/slopeBot;
    int b0 = (sumY - b1*sumX);
    cout << "slope formula for data" <<endl;
    cout << b0 << " + " << b1 <<"X" << endl;
}



int main(){
//4.5
    cout << -30 * 3 + 21 / 5 << endl;   // -86
    cout << -30 + 3 * 21 / 5 << endl;   // -18
    cout <<  30 / 3 * 21 % 5 << endl;   // 0
    cout << -30 / 3 * 21 % 4 << endl;   // -2
//4.17
    // Prefix increment
    // prefix will increment then print the value
    int prefix = 1;
    cout << ++prefix; // 2
    cout << prefix; // 2

    // Postfix increment
    //postfix will print the value then increment 
    int postfix = 1;
    cout << postfix++; // 1
    cout << postfix; // 2
    cout << endl;
//4.34
    //(a) This if will check if fval is 0 or another number and return true false accordingly
    //(b) ival becomes a  float, then it is added to fval, result becomes a double type.
    //(c) cval becomes a int, then it is multiplied by ival, this result becomes a double, then it is added to dval.


//Linear Regression
    linearRegression();

    return 0;
}
