/* 3.17:
Read a sequence of words from cin and store the values a vector. After you’ve read all the words,
process the vector and change each word to uppercase. Print the transformed elements, eight words to a
line.
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
    vector<string> sVector;
    string s;

    cout << "Enter a series of words" << endl;
    while(cin >> s){                //read in strings
        sVector.push_back(s);       //add strings to vector
    }

    for(string &s : sVector){  //uppercase strings
        std::transform(s.begin(), s.end(), s.begin(), [](char c){ //adds arrays in a single line
            return std::toupper(c); 
        });
    }

    for (int i = 0; i != sVector.size(); i++){     // loop through vector
        if (i != 0 && i % 8 == 0){                 //if word count equally divided by 8, 8%0=0 so we add first case
            cout << sVector[i] << "/n ";
        }
        cout << sVector[i];
    }
    cout << endl;

    return 0;
}