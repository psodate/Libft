/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathisseguin <mathisseguin@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:11:16 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/17 01:12:56 by mathissegui      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    int result;

    result = 0;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        result = 1;
    return (result);
}

int ft_isdigit(int c)
{
    int result;

    result = 0;
    if (c >= '0' && c <= '9')
        result = 1;
    return (result);
}

int ft_isalnum(int c)
{
    int result;

    result = 0;
    if (ft_isalpha(c) || ft_isalpha(c))
        result = 1;
    return (result);
}

int ft_isascii(int c)
{
    int result;

    result = 0;
    if (c >= 0 && c <= 127)
        result = 1;
    return (result);
}

int ft_isprint(int c)
{
    int result;

    result = 0;
    if (c >= 32 && c <= 126)
        result = 1;
    return (result);
}
