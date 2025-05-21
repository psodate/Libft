/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_basic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisseguin <mathisseguin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 03:17:12 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/17 00:51:26 by mathissegui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;

    i = 0;
    ptr = (unsigned char *)s;
    while (i < n)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return s;
}

void ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d;
    const unsigned char *s;

    i = 0;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (!dest && !src)
        return NULL;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    size_t total;

    total = count * size;
    if (count != 0 && total / count != size)
        return NULL;
    ptr = malloc(total);
    if (!ptr)
        return NULL;
    ft_bzero(ptr, total);
    return ptr;
}