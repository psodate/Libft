/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_extra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisseguin <mathisseguin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 03:17:45 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/17 00:51:05 by mathissegui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (!dest && !src)
        return NULL;
    if (d > s)
    {
        i = n;
        while (i > 0)
        {
            d[i] = s[i];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return dest;
}

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    const unsigned char *ptr;

    ptr = (const unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return (void *)&ptr[i];
        i++;
    }
    return NULL;
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *a;
    const unsigned char *b;

    a = (const unsigned char *)s1;
    b = (const unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (a[i] != b[i])
            return a[i] - b[i];
        i++;
    }
    return 0;
}

