#include "iter.hpp"
#include <iostream>

template<typename T>
void ft_print(T &arr)
{
    std::cout << "value : " << arr << std::endl;
}

template<typename T>
void ft_del(T &arr)
{
    arr = arr - 1;
}

template<typename T>
void	ft_tolower(T& value)
{
	if (value >= 'A' && value <= 'Z')
        value += 32;
}

int	main()
{
	char	arr_char[] = {'A', '1', 'C', 'd', '_'};
	int		arr_int[] = {10, 20, 30, 40};

    int len_char = sizeof(arr_char) / sizeof(arr_char[0]);
    int len_int = sizeof(arr_int) / sizeof(arr_int[0]);

    std::cout << "Before" << std::endl;
    iter(arr_char, len_char, ft_print);
    std::cout << "After" << std::endl;
    iter<char>(arr_char, len_char, ft_tolower);
    iter(arr_char, len_char, ft_print);
    std::cout << std::endl;
        
    std::cout << std::endl;    
    std::cout << "Before" << std::endl;
    iter(arr_int, len_int, ft_print);
    std::cout << "After" << std::endl;
    iter(arr_int, len_int, ft_del);
    iter(arr_int, len_int, ft_print);
	return 0;
}
