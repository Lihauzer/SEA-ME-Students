#include <iostream>
#include <string>

void ft_str_convert(char **str, int argc)
{
    std::string tmp;
    std::string tmp_comp = str[1];
    
    for(int i = 2; i < argc; i++)
    {
        tmp = str[i];
        for(int j = 0; j < (int)tmp.length(); j++)
        {
            if (tmp_comp.compare("down"))
                tmp[j] = toupper(tmp[j]);
            if (tmp_comp.compare("up"))
                tmp[j] = tolower(tmp[j]);
        }
        std::cout << tmp;
        if(argc > 3)
            std::cout << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc > 2)
            ft_str_convert(argv, argc);
    else
        std::cout << "ERROR ENTER!!!" << std::endl;
    return 0;
}

