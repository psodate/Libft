/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseguin <mseguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 04:12:19 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/12 22:45:30 by mseguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return (i);
}

char *ft_strdup(const char *s1)
{
    char *copy;
    size_t i;
    size_t len;

    len = ft_strlen(s1);
    copy = malloc(sizeof(char) * (len + 1));
    if (copy == NULL)
        return NULL;
    i = 0;
    while (i < len)
    {
        copy[i] = s1[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

char *ft_strchr(const char *s, int c)
{
    size_t i;
    char *str;
    char ch;

    i = 0;
    str = (char *)s;
    ch = (char)c;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            return &str[i];
        i++;
    }
    if (ch == '\0')
        return &str[i];
    return NULL;
}

char *ft_strrchr(const char *str, int c)
{
    char *last;
    size_t i;

    last = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == (char)c)
            last = (char *)&str[i];
        i++;
    }
    if ((char)c == '\0')
        return (char *)&str[i];
    return last;
}
/*
int main(void)
{
    const char *s = "asjhfjhsfdhjasfgag jhsdagfhj gashdgfhgsafjhsgjhfasg";
    char *res = ft_strrchr(s, 'o');
    if (res)
        printf(%s\n", res);
    else
        printf("char non trouvé\n");
    return 0;
}
*/