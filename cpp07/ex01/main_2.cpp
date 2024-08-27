#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(T& value)
{
	std::cout << value << " ";
}

template<typename T>
void	increateNum(T& value)
{
	value += 1;
}

int	main()
{
	char	arrChar[] = {'a', 'b', 'c', 'd'};
	int		arrInt[] = {10, 20, 30, 40};
	float	arrFloat[] = {1.11f, 2.22f, 3.33f, 4.44f};

	std::cout << "Before: " << std::endl;
	iter(arrChar, 4, print);
	std::cout << std::endl;
	iter(arrInt, 4, print);
	std::cout << std::endl;
	iter(arrFloat, 4, print);
	std::cout << std::endl;

	std::cout << "After: " << std::endl;
	iter<char>(arrChar, 4, increateNum);
	iter<char>(arrChar, 4, print);
	std::cout << std::endl;
	iter<int>(arrInt, 4, increateNum);
	iter<int>(arrInt, 4, print);
	std::cout << std::endl;
	iter<float>(arrFloat, 4, increateNum);
	iter<float>(arrFloat, 4, print);
	std::cout << std::endl;
	return 0;
}
