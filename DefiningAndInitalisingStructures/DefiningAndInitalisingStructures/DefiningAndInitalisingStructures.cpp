
#include <iostream>
using namespace std;

struct Movie
{
	string title;
	int releaseYear;
};

struct Customer
{
	int ID;
	string name;
	string email;
};

int main()
{
	Movie movie;
	movie.title = "Terminator";
	movie.releaseYear = 1984;
	cout << movie.title << ' ' << movie.releaseYear << endl;

	Movie movie2{ "Terminator 2", 1991 }; //initalised 

	// EXERCISE // 

	Customer customer;
	cout << "Enter ID: ";
	cin >> customer.ID;
	cout << "Enter name: ";
	cin >> customer.name;
	cout << "Enter email: ";
	cin >> customer.email;

	cout << customer.ID << customer.name << customer.email << endl;

}

