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
            if (tmp[j] >= 97 && tmp[j] <= 122 && tmp_comp.compare("down"))
                tmp[j] = tmp[j]-32;
            if (tmp[j] >= 65 && tmp[j] <= 90 && tmp_comp.compare("up"))
                tmp[j] = tmp[j]+32;
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

