/* *************************************************************************** */
/*                                                                             */
/*                                                         :::      ::::::::   */
/*   ft_string_tools.c                                   :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*   By: mathisseguin <mathisseguin@student.42.fr    +#+  +:+       +#+        */
/*                                                 +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 23:32:03 by mathisseguin       #+#    #+#             */
/*   Updated: 2025/05/16 23:32:03 by mathisseguin      ###   ########.fr       */
/*                                                                             */
/* *************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;
    size_t s_len;

    if (!s)
        return NULL;
    s_len = ft_strlen(s);
    if (start >= s_len)
        return ft_strdup("");
    if (len > s_len - start)
        len = s_len - start;
    sub = (char *)malloc(sizeof(char) * (len + 1));
    if (!sub)
        return NULL;
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return sub;
}

static int is_in_set(char c, const char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (set[i] == c)
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;

    if (!s1 || !set)
        return NULL;
    start = 0;
    while (s1[start] && is_in_set(s1[start], set))
        start++;
    end = ft_strlen(s1);
    if (start == end)
        return ft_strdup("");
    end--;
    while (end > start && is_in_set(s1[end], set))
        end--;
    return ft_substr(s1, start, end - start + 1);
}

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    size_t i;

    if (!s || !f)
        return;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i;
    char *res;

    if (!s || !f)
        return NULL;
    res = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!res)
        return NULL;
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return res;
}
