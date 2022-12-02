#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using namespace std;

int fact(int n){
        int res=1;
        while(n>1){
            res*=n;
            n--;
        }
        return res;
    }
    
int main(){
    
    int ans= fact(5);
    cout << ans <<endl;
    return 0;
}

    
