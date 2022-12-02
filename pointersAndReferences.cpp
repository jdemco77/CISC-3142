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

int main(){
    int i=0;
    int k=10;
    int *pi=&i; // pointer links to address so we dereference i to assign a pointer an addr

    cout << " pi " << pi <<endl; //address
    cout << " *pi " << *pi << endl; // value
    cout << " &pi " << &pi << endl; //memory address of pi

    cout << "-----------------" <<endl;
    //change pointer to k address =10
    pi= &k; // here we can change the value of pi to point to the address of k
    cout << " *pi " << *pi <<endl; //value 10
    cout << " &pi or pi " << &pi << endl; //memory address of pi
    cout << "-----------------" <<endl;


    int &i2=i; // here i2 is a reference to i so its linked to the value of i 0;

    cout << " i2 " << i2 <<endl; //value
    cout << " &i2 " << &i2 << endl; //memory address of i2
    cout << "-----------------" <<endl;

    //if pointing to a const value then the value cannot be changed. the pointer can change addresses
    //if a constant pointer the address cannot be changed but the value can change since its a variable
    const int y=5;
    const int z=6;
    int g=2;
    int *y2= &g;

    cout << " const pointer y2 " << *y2 <<endl; //value
    cout << " &y2 " << &y2 << endl; //memory address of i2
    cout << "-------------------------" <<endl;

    *y2= z; //change address const pointer points too

    cout << " const pointer y2 " << *y2 <<endl; 
    cout << " &y2 " << &y2 << endl; 
    cout << "-------------------" <<endl;

    const int *z1= &z; 

    cout << " const pointer to const " << z1 <<endl; 
    cout << " &y2 " << &z1 << endl; 

    


    return 0;
}