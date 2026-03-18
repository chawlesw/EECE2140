/*
Learning object oriented programming
Classes,

By: Charles Wan
EECE2140
Professor Nafa
13 Febuary, 2026
*/

#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int pages;

public:
    // Constructor
    Book(string t, string a, int p)
        : title(t), author(a), pages(p) {}
    
    // Display function
    void display() const {
        cout << title << " by " << author << " (" << pages << " pages)" << endl;
    }
};

int main(){
    Book b1("C++ Primer", "Lippman", 900);
    b1.display();

    Book b2("Dune", "Herbert", 900);
    b2.display();
    

    return 0;
}

