#include <stdio.h>

int ft_strlen(char *str);
 int    main(void)
{
    char    *str;
    int total;
    
    str = "Mohammad Fahim Nazari";
    total = ft_strlen(str);
    printf("%d\n", total);
    return (0);
} 