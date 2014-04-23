/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaurer <amaurer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:16:15 by amaurer           #+#    #+#             */
/*   Updated: 2014/02/07 19:09:01 by amaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <dirent.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

char	*ft_strreassign(char **s1, char *s2);
size_t	ft_splits_count(char **splits);
size_t	ft_arraylen(void *array);
void	ft_putendl_color(char *str, char *color, char *default_color);
char	*ft_fct_free(char *str, char *(*f)(const char*));
char	*ft_strreplace(const char *str, const char *ptrn, const char *rplce);
char	*ft_strrmstr(const char *str, char *rm);
char	*ft_remove_duplicates(const char *str, char c);
int		ft_abs(int nbr);
void	ft_putnstr(char *str, size_t len);
void	ft_putnbr_left(int n, size_t len, char c);
void	ft_putstr_left(char *str, size_t len, char c);
void	ft_putstr_right(char *str, size_t len, char c);
size_t	ft_nbrlen(int n);
void	ft_arrayadd(void *array, void *value);
void	*ft_arraydup(void *array, size_t size);
void	ft_putnbrln(int n);
void	ft_putnbr_right(int n, size_t len, char c);
t_list	*ft_strsplitlst(char const *s, char c);
char	*ft_strtoupper(char const *s);
char	*ft_strtolower(char const *s);
void	ft_strdel(char **as);
void	*ft_memmove(void *s1, void const *s2, size_t n);
void	ft_lstusort(t_list **lst, int (*f)(t_list *lst1, t_list *lst2));
t_list	*ft_lsti(t_list *lst, unsigned int i);
size_t	ft_lstlen(t_list *lst);
t_list	*ft_lstrev(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstpush(t_list **lst, t_list *new);
void	ft_lstaddi(t_list **lst, t_list *new, unsigned int i);
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int n);
void	ft_putendl(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_strtrim(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlcat(char *dst, char const *src, size_t size);
char	*ft_strmap(char const *s, char (*f)(char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_striter(char *s, void (*f)(char *));
void	ft_strclr(char *s);
size_t	ft_strlen(char const *str);
void	ft_putchar(char c);
void	ft_putstr(char const *str);
char	*ft_strdup(char const *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_putnbr(int nbr);
void	ft_bzero(void *s, size_t n);
char	*ft_strcpy(char *s1, char const *s2);
char	*ft_strncpy(char *s1, char const *s2, size_t n);
char	*ft_strcat(char *s1, char const *s2);
char	*ft_strncat(char *s1, char const *s2, size_t n);
char	*ft_strchr(char const *s, int c);
char	*ft_strrev(char *s);
char	*ft_strrchr(char const *s, char c);
char	*ft_strstr(char const *s1, char const *s2);
char	*ft_strnstr(char const *s1, char const *s2, size_t n);
int		ft_strcmp(char const *s1, char const *s2);
int		ft_strncmp(char const *s1, char const *s2, size_t n);
int		ft_atoi(char const *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *s1, void const *s2, size_t n);
void	*ft_memccpy(void *s1, void const *s2, int c, size_t n);
void	*ft_memchr(void const *s, int c, size_t n);
int		ft_memcmp(void const *s1, void const *s2, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);

#endif
