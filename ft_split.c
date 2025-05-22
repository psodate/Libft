/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseguin <mseguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 05:34:07 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/22 03:58:25 by mseguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	*malloc_word(const char *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **tab, int last)
{
	int	i;

	i = 0;
	while (i < last)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char	**fill_words(char const *s, char c, char **tab)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		tab[j] = malloc_word(s, start, i);
		if (!tab[j])
			return (free_all(tab, j), NULL);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	if (!fill_words(s, c, tab))
		return (NULL);
	return (tab);
}
/*
void print_split(char **tab)
{
    int i;

    i = 0;
    if (!tab)
    {
        printf("split returned NULL\n");
        return;
    }
    while (tab[i])
    {
        printf("tab[%d] = \"%s\"\n", i, tab[i]);
        i++;
    }
    printf("tab[%d] = NULL\n", i);
}

int main(void)
{
    char **res;

    printf("Test 1 : \"bonjour les copains\", sep = ' '\n");
    res = ft_split("bonjour les copains", ' ');
    print_split(res);
    free(res);

    printf("\nTest 2 : \"--hello---world--\", sep = '-'\n");
    res = ft_split("--hello---world--", '-');
    print_split(res);
    free(res);

    printf("\nTest 3 : \"salut\", sep = 'x'\n");
    res = ft_split("salut", 'x');
    print_split(res);
    free(res);

    printf("\nTest 4 : \"\", sep = ','\n");
    res = ft_split("", ',');
    print_split(res);
    free(res);

    return 0;
}
*/