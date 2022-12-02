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


void primeNumbers(){
    for (int i=2; i<100; i++){ 
        for (int j=2; j*j<=i; j++){
            if (i % j == 0) 
                break;
            else if (j+1 > sqrt(i)) {
                cout << i << " ";
            }
        } 
    }
}

int main(){

    //PrimeNUmbers
    primeNumbers(); //will print out primes
    return 0;
}