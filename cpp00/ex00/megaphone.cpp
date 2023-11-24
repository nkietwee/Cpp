#include <iostream>
#include <cstring>
#include <cctype>

// using namespace std;

int main(int ac, char**av)
{
    char c;

    if (ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
        {
            for (int j = 0; j < strlen(av[i]); j++)
            {
                if (isalpha(av[i][j]))
                {
                    c = toupper(av[i][j]);
                    std::cout<< c ;
                }
                else
                    std::cout << av[i][j];
            }
            // std::cout << std::endl;
            // putchar(toupper(av[1][0]));
        }
    }

}