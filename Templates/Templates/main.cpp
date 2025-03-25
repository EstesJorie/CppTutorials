#include <iostream>

#include "Array.h"
#include "Pair.h"

template<typename T>
T larger(T first, T second)
{
	return (first > second) ? first : second;
}

template<typename K, typename V>
void display(K key, V value)
{
	std::cout << key << "=" << value << std::endl;
}

int main()
{
	display("a", 1);
	larger<double>(1.23, 2);

	Array<int> array{ 10 };
	Array <Pair<std::string, int>> array2{ 10 };
}