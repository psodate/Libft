/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisseguin <mathisseguin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 00:05:17 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/17 00:51:21 by mathissegui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

int atoi(const char *nptr)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return result * sign;
}

static int ft_intlen(int n)
{
    int len;

    len = 1;
    if (n < 0)
        len++;
    while (n / 10 != 0)
    {
        len++;
        n = n / 10;
    }
    return len;
}

char *ft_itoa(int n)
{
    char *str;
    int len;
    long nb;

    nb = n;
    len = ft_intlen(n);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return NULL;
    str[len] = '\0';
    if (nb < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    while (len-- > 0 && str[len] != '-')
    {
        str[len] = (nb % 10) + '0';
        nb = nb / 10;
    }
    return str;
}