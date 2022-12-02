#include <stdio.h>
#include <iostream>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;


struct Movie{
        int year;
        int length;
        string title;
        string subject;
        string actor;
        string actress;
        string director;
        int popularity;
        bool awards;
        string image;
    }movie;

int main()
{
    int y;
    int len;
    string t;
    string sub;
    string act;
    string actr;
    string dir;
    int pop;
    bool award;
    string img;

    vector<Movie> movieData;

    ifstream myFile("moviefile.txt");
    ofstream writeFile("output.txt");
    string text;
    
    while (!myFile.eof())
    {
        
        getline(myFile, y, ';');
        movie.year=y;
        getline(myFile, len, ';');
        movie.length=len;
        getline(myFile, t, ';');
        movie.title=t;
        getline(myFile, sub, ';');
        movie.subject=sub;
        getline(myFile, act, ';');
        movie.actor=act;
        getline(myFile, actr, ';');
        movie.actress=actr;
        getline(myFile, dir, ';');
        movie.director=dir;
        getline(myFile, pop, ';');
        movie.popularity=pop;
        getline(myFile, award, ';');
        movie.awards=award;
        getline(myFile, img, ';');
        movie.image=img;

        movieData.push_back(movie);
    }

    writeFile << "Movie data before sorting " << endl;
    for(Movie mov: movieData){
        writeFile << mov.title << "  "<< mov.popularity << endl;
    }
    sort(movieData.begin(),movieData.end());

    writeFile << "movie data after sorting " << endl;
    for(Movie mov: movieData){
        writeFile << mov.title << "  "<< mov.popularity << endl;
    }
    
    vector<int> movieLengths;
    for(auto i:movieData){
        movieLengths.push_back(i.length);
    }
    int total= accumulate(movieLengths.begin(),movieLengths.end(),0);

    writeFile << "total length of all movies is " << total << endl;

    size_t found;

    int i=0;
    for(Movie m: movieData){
        m.image.find("NicholasCage");
        i++;
        if(found != NULL){
            break;
        }
    }
    writeFile << "first occurence of NicholasCage is in movie: " << movieData[i].title << endl;

    vector<int> actionYears;
    vector<int> comedyYears;

    for(Movie m:movieData){
        if(m.subject == "action"){
            actionYears.push_back(m.year);
        }
    }
    for(Movie m:movieData){
        if(m.subject == "comedy"){
            comedyYears.push_back(m.year);
        }
    }
    vector<int>::iterator ip;
    vector<int>::iterator ip2;


    ip = unique(actionYears.begin(), actionYears.end());
    ip2 = unique(comedyYears.begin(),comedyYears.end());
    
    writeFile << "unique action movies years are ..." << endl;
    int j=0;
    for (auto ip = actionYears.begin(); ip != actionYears.end(); ip++) {
        cout << actionYears[j] << endl;
        j++;
    }

    writeFile << "unique comedy movies are ..."<<endl;

    int i=0;
    for(auto ip2=comedyYears.begin(); ip2!=comedyYears.end(); ip2++){
        cout << comedyYears[i] << endl;
        i++;
    }


}