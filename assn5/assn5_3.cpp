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

int sumOfDigits(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }
    
int main(){
    //Sum of Digits
    int ret= sumOfDigits(1234);
    cout << ret; //10

    
    return 0;
}