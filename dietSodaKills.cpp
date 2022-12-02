/* A government research lab has concluded that an artificial sweetener commonly used in diet soda pop
will cause death in laboratory mice. A friend of yours is desperate to lose weight but cannot give up soda
pop. Your friend wants to know how much diet soda pop it is possible to drink without dying as a result.
Write a program to supply the answer. The input to the program is the amount of artificial sweetener
needed to kill a mouse (use 5 grams), the mass
of the mouse (use 35 grams), and the weight of the dieter
(use 45400 grams for a 100 pound person).
Assume that the lethal dose for a mouse is proportional to the lethal dose for the human.
A single can of soda pop has a mass of 350 grams. To ensure the
safety of your friend, be sure the
program requests the weight at which the dieter will stop dieting, rather than the dieter’s current weight.
Assume that diet soda contains 1/10th of 1% artificial sweetener.
Use a variable declaration with the modifier
const to give a name to this fraction. You may want to
express the percent as the double value 0.001. Your program should allow the calculation to be repeated
as often as the user wishes
*/
#include <iostream>
#include <ctype.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;


int main()
{
    const double PERCENT = 0.001;
    double sweetener, mouse, dieter;
    double maxSoda;
    
        cout << "Amount of artifical sweetener to kill a mouse: ";
        cin >> sweetener;
        cout << "What is the weight of the mouse: ";
        cin >> mouse;
        cout << "What is the weight of the dieter: ";
        cin >> dieter;
        
        numSoda = (dieter*(sweetener/ mouse)) / (sweetener * PERCENT);

        cout << "\n You can drink "<< (ceil(numSoda) - 1) << " diet sodas before dying.\n\n";
}

// function definition
int computeLab(double d, double s, double m)
{
    return (d * (s / m));
}