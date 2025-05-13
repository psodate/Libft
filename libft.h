/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseguin <mseguin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:21:18 by mseguin           #+#    #+#             */
/*   Updated: 2025/05/13 03:33:32 by mseguin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define libft_H

#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isdigit(int c);

int ft_toupper(int c);
int ft_tolower(int c);

size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

int atoi(const char *nptr);
char    *ft_itoa(int n);

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);


#endif
