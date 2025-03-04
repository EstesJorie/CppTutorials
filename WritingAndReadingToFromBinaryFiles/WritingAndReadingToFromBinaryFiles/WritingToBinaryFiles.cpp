#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	/*int numbers[] = { 1'000'000, 2'000'000, 3'000'000 };
	ofstream file("numbers.dat", ios::binary);
	if (file.is_open())
	{
		file.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));
		file.close();
	}*/

	int numbers[3];
	ifstream file("numbers.dat", ios::binary);
	if (file.is_open())
	{
		int number;
		while (file.read(reinterpret_cast<char*>(&number), sizeof(number)))
			cout << number;
		file.close();
	}
}

