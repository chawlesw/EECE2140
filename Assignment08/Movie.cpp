/*
Movie.cpp
Defines a Movie class with title, year, and director.
Creates a Movie object, sets its data, and displays it.

By: Charles Wan
EECE 2140 - Professor Nafa
14 March, 2026
*/

#include <iostream>
#include <string>
using namespace std;

class Movie{
private:
    string title;
    int year;
    string director;
public:
    void setTitle(string title){
        this->title = title;
    }
    void setYear(int year){
        this->year = year;
    }
    void setDirector(string director){
        this->director = director;
    }
    void displayInfo()const{
        cout << "Title: " << title << endl;
        cout << "Year: " << year << endl;
        cout << "Director: " << director << endl;
    }
};

int main(){
    Movie myFavoriteMovie;
    myFavoriteMovie.setTitle("Wicked");
    myFavoriteMovie.setYear(2024);
    myFavoriteMovie.setDirector("Jon M. Chu");
    myFavoriteMovie.displayInfo();
    return 0;
}