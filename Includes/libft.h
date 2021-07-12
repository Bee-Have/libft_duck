/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:38:44 by amarini-          #+#    #+#             */
/*   Updated: 2021/07/12 15:27:58 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

//Arrays
int				ft_strlen_2d(const char **s);
char			**ft_strjoin_2d(char **s1, char **s2);
char			**ft_erase(char **str, int start, int amount);
char			**ft_add_tab(char **tab, char *str);
char			**ft_make_tab(char *str);
char			**ft_tabdup(char **tab);

//Checks
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				compare(unsigned char chr1, unsigned char chr2);
char			*ft_strchr(const char *s, int c);
int				ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
char			*ft_strrchr(const char *s, int c);

//Digits
int				count_digit(const char *str, int index);
long long int	convert_res(const char *str, long long int nbr, int index);
long long int	ft_atoi(const char *str);
int				ft_countnbr(int n, int nbr);
unsigned int	check_negative(int n);
char			*ft_itoa(int n);

//Lists
typedef struct s_list
{
	int				id;
	long long int	value;
	int				sorted;
	struct s_list	*next;
}					t_list;

void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(long long int *));
void			ft_lstdelone(t_list *lst, void (*del)(long long int *));
void			ft_lstiter(t_list *lst, void (*f)(long long int *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, long long int (*f)(long long int),
					void (*del)(long long int *));
t_list			*ft_lstnew(long long int content);
int				ft_lstsize(t_list *lst);

//Printing
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_print_tab(char **tab);

//Strings
//S_Copy
void			*ft_calloc(size_t count, size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strdup(const char *s1);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*return_empty(void);
//
void			ft_bzero(void *s, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);

char			**ft_split(char const *s, char c);
char			**free_everything(char **result);
char			*fill_array(char *result, char const *s, int i, char sep);

int				calc_word(char const *s, char sep, int strpos);
int				calc_row(char const *s, char sep);

char			*ft_strjoin(char const *s1, char const *s2);
char			*fill_str(char const *src, char *dst, int index);

char			*ft_strtrim(char const *s1m, char const *set);
int				calc_len(char const *str, char const *set);
int				calc_sufix(char const *str, char const *set, int maxlen);
int				calc_prefix(char const *str, char const *set, int istr);
int				set_occurence(char const *set, char current, int i);

int				ft_tolower(int c);
int				ft_toupper(int c);

#endif