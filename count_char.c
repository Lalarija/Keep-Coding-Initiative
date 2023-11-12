#include <stdio.h>

int ft_count(const char *str)
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'e' || str[i] == 'E') 
        { 
            count++;
        }
        i++;
    }
    return (count);
}

int main (int argc, char *argv[])
{   if (argc != 2)
    {
        printf("Incorrect input, please type something in\n");
        return 1;
    }
    else
    {
    int result;
    result =  ft_count(argv[1]);
    printf("%i\n", result); 
    return (0);
    }
}