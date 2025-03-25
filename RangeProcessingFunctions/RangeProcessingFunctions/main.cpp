#include <iostream>
#include <algorithm> //for_each, count_if, all_of
#include <vector>


//start iterator, end iterator, function
void triple_it(int& n)
{
	n *=  3;
}

bool isEven(int n)
{
	if (n & 2 == 0)
		return true;
	else
		return false;
}

void printVector(const std::vector<int> v)
{
	for (auto n : v)
	{
		std::cout << n << " ";
	}
	std::cout << "\n";
}

int main()
{
	std::vector<int> v{ 8, 6, 7, 5, 3, 0, 9 };
	std::vector<int>::iterator it_front = v.begin(), it_back = v.end();
	it_front += 2; //updates middle vals
	it_back -= 2;

	std::for_each(it_front, it_back, triple_it);
	printVector(v);

	int count = std::count_if(v.cbegin(), v.cend(), isEven);
	std::cout << "The total count of even numbers: " << count << "\n";

	if (all_of(v.cbegin(), v.cend(), isEven))
	{
		std::cout << "All are even!\n";
	}
	else
	{
		std::cout << "Not all are even!\n";
	}
}