// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 15

#include <iostream>
#include <fstream>

using namespace std;

class Movie {
    private:
        string title;
        int year;
        string writer;


    public:
        // setters
        void setTitle(string t) {
            title = t;
        }

        void setYear(int y) {
            year = y;
        }

        void setWriter(string w) {
            writer = w;
        }

        // adding getters
        string getTitle() {
            return title;
        }

        int getYear() {
            return year;
        }

        string getWriter() {
            return writer;
        }

        // pring function
        void print() {
            cout << "Movie: " << title << endl;
            cout << "Year released: " << year << endl;
            cout << "Screenwriter: " << writer << endl;
            cout << endl;
        }
};

int main() {

    //testing
    Movie m1;

    m1.setTitle("test movie");
    m1.setYear(2026);
    m1.setWriter("test writer");

    m1.print();

    return 0;
}