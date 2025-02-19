#include <iostream>

using namespace std;

struct Date {
    int year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie {
    string name;
    Date releaseDate;
    bool isPopular;
};

int main() {
    Movie movie {
        "Terminator",
        {1984, 6, 1}
    }; //{} denotes Date struct

    Movie movie2 {
        "Terminator",
        {1984, 6, 1}
    };

    if (movie.name == movie2.name &&
        movie.releaseDate.year == movie2.releaseDate.year &&
        movie.releaseDate.month == movie2.releaseDate.month &&
        movie.releaseDate.day == movie2.releaseDate.day)
    {
        cout << "Equal!" << endl;
    }

    cout << movie.releaseDate.year << "/"
    << movie.releaseDate.month << "/" << movie.releaseDate.day << endl; ;
    return 0;
}