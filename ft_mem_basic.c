/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem_basic.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseguin <mseguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 03:17:12 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/13 03:33:30 by mseguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include "libft.h"

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
