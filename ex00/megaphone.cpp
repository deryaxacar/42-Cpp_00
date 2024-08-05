
#include <iostream>
#include <string>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;

    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                std::cout << (char)toupper(av[i][j]);
                j++;
            }
            i++;
        }
        std::cout << "\n";
    }
}
