#include <stdio.h>
#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    vector<string> lines;
    vector<int> temps;
    ifstream myFile("data.txt");
    string text;
    while(getline(myFile, text) ){
        lines.push_back(text);
    }
    //now we have vector of month,temp skip first vector input

//find simple average across 9 months to forcast october
    int simpleAvg=0;
    int temp;
    
    int x=0;
    for(int i=1;i<10;i++){          //get int temp into temps vector by substring of line and conversion
        string line= lines[i];
        stringstream conv(line.substr(4,2));
        conv >> x;
        temps.push_back(x);
    }

    for(int i=0;i<9;i++){
        simpleAvg= simpleAvg + temps[i];
    }

    cout<< "the simple avg for all nine months is " << (simpleAvg/9) << endl;

    int movingAvg=0;
    for(int i=6;i<9;i++){
        movingAvg=movingAvg + temps[i];
    }
    movingAvg=movingAvg/3;

    cout << "The simple moving avg across 3 months is " << movingAvg << endl;

    int wMovingAvg=0;
    int weight=0;

    for(int i=6;i<9;i++){
        weight++;
        wMovingAvg= wMovingAvg+ (temps[i]*weight);
    }
    int wAvg=wMovingAvg/6;

    cout<< "the weighted moving average for october is "<< wAvg << endl;
    
    ofstream outFile("output.txt");

    vector<string> months={"march: ","apr: ","May: ","jun: ","jul: ","aug: ","sep: ","oct: "};
    
    int movingAvgs=0;
    int iter=0;
    int w=1;
    for(int i=0;i<7;i++){
        movingAvgs=0;
        w=1;
        for(int j=i;j<i+3;j++){
            movingAvgs+=(temps[j]*w);
            w++;
        }
        movingAvgs=(movingAvgs/6);
        outFile << months[iter] << movingAvgs <<endl;
        iter++;
    }
    outFile.close();
    myFile.close();
}