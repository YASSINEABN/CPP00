#include <iostream>

int main(int argc , char **argv)
{
    int i = -1;
    int j = 0;

    char c ;

    if(argc > 1)
        while (argv[++j])
        {
            i = -1;
            while ((c =(argv[j][++i])))
                std::cout << (char)toupper(c) ;
        }
    else 
         std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;

    std::cout << std::endl;
}