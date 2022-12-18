/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mang <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:48:22 by mang              #+#    #+#             */
/*   Updated: 2022/12/14 18:48:43 by mang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : rev_print
// Expected files   : rev_print.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string, and displays the string in reverse
// followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./rev_print "zaz" | cat -e
// zaz$
// $> ./rev_print "dub0 a POIL" | cat -e
// LIOP a 0bud$
// $> ./rev_print | cat -e
// $

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    i++;
    return (i);
}

char    *rev_print(char *str)
{
    char    tmp;
    int     size;
    int     n;
    int     i;

    size = ft_strlen(str);
    n = size - 1;
    i = 0;
    while (i < size / 2)
    {
        tmp = str[i];
        str[i] = str[n];
        str[n] = tmp;
        i++;
        n--;
    }
    return (str);
}

int main(int argc, char **argv)
//int main(void)
{
    int     len;
    //char    str[] = "1234567";
    char    *ptr;

    if (argc != 2)
    {
        printf("\n");
    }
    //str = argv[1];
    len = ft_strlen(ptr);
    ptr = rev_print(argv[1]);
    printf("strlen: %d\n", len);
    //printf("argv[1]: %s\n", str);
    printf("argv[1]: %s\n", ptr);
    return (0);
}