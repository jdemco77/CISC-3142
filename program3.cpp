/*Write a program to create a vector with ten int elements. Using an iterator, assign each element a
value that is twice its current value. Test your program by printing the vector.
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

int main(){
    vector<int> iVector;
    
    cout << "Enter a series of numbers" << endl;
    while(cin >> i){                //read in integers
        iVector.push_back(i*2);       //add ints to vector
    }

    for (int i = 0; i != iVector.size(); i++){     // loop through vector
        cout << ivector[i] << endl;
    }

    return 0
}