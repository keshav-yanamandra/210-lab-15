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
};

int main() {

    return 0;
}