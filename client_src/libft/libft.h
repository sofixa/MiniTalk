/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    libft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:32:39 by atodorov          #+#    #+#             */
/*   Updated: 2014/01/14 16:07:09 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 32

# include <string.h>

int		get_next_line(int const fd, char **line);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstrn(char *str);
void	ft_putstr_space(char *str);
void	ft_putnbr(int n);

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strcat(char *s1, const char *s2);

int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
char	*ft_strnew(size_t size);

int		ft_strlen(char const *str);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const void *s1, const void *s2, size_t n);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
void	ft_strclr(char *s);
char	*ft_strdup(const char *s1);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strtrm(char const *s);
char	*ft_strtrim(char const *s);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	**ft_strsplit(const char *s, char c);

void	*ft_realloc(void *ptr, size_t new);
void	*ft_realloc2(void *ptr, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *s, int c);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);

void	ft_putendl(char const *s);

void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strstr(const char *s1, const char *s2);
void	*ft_memcpy(void *s1, const void *s2, size_t n);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

void	ft_putendl_fd(char const *s, int fd);

#endif /* LIBFT_H */
