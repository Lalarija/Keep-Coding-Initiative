#include <stdio.h>

void ft_count_arg(int argc, char *argv[])
{ 
    int i;
    i = 1;
    while (i < argc)
    {
        printf("%s\n",argv[i]);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("not enough arguments");
    }
    else
    {   
        printf("count of arguments in total %i\n", argc);/* count of arguments*/
        ft_count_arg(argc, argv);
        return(0);
    }
}