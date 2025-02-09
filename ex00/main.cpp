#include <iostream>
#include <exception>
#include <cstring>

void check_for_errors()
{
    if (!std::cout.good())
        std::terminate();
}

void  write_str(const char* str)
{
    size_t str_len;

    str_len = strlen(str);
    for(size_t i = 0 ; i < str_len ; i++)
    {
        std::cout << char(std::toupper(str[i]));
        check_for_errors();
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    while (i < argc)
    {
        write_str(argv[i]);
        i++;
    }
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        check_for_errors(); 
    }
    std::cout << std::endl; 
    check_for_errors(); 

}