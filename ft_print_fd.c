/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseguin <mseguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 22:50:36 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/13 00:05:49 by mseguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putstr_fd(char *s, int fd)
{
    size_t i;

    i = 0;
    if (s == NULL)
        return;
    while (s[i] != '\0')
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}

void ft_putendl_fd(char *s, int fd)
{
    if (s == NULL)
        return;
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
    {
        ft_putstr_fd("-2147483648", fd);
        return;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr_fd(n / 10, fd);
    ft_putchar_fd((n % 10) + '0', fd);
}