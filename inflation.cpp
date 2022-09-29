/* It is
difficult to make a budget that spans several years because prices are not stable. If your company
needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils 2 years from
now. Because of inflation the cost is likely to be higher than it is today. Write a program to gauge the
expected cost of an item in a specified number of years. The program asks for the cost of the item, the
number of years from now that the item will be purchased, and the rate of inflation. The program then
outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a
percentage, like 5.6 (percent). Your program should then convert the percent to a fraction, like 0.056, and
should use a loop to estimate the price adjusted for inflation 
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using namespace std;

int main() {

    int price;
    double infl;
    int years;

    cout << "Enter the price of an item" << endl;
    cin >> price;
    
    cout << "Enter the number of years you wish to evaluate" << endl;
    cin >> years;

    cout << "Enter the anticipated inflation rate" << endl;
    cin >> infl;

    double damageDone= (price) * ((years)*(1+ (infl/100)));

    cout << "inflation has made your item go up to "<< damageDone << endl;
    return 0;
}