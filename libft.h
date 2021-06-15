/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 12:38:44 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/15 15:01:02 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

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

//Lists
typedef struct s_list
{
	int				index;
	int				content;
	int				null;
	struct s_list	*next;
}					t_list;

void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(int *));
void			ft_lstdelone(t_list *lst, void (*del)(int *));
void			ft_lstiter(t_list *lst, void (*f)(int *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, int (*f)(int),
					void (*del)(int *));
t_list			*ft_lstnew(int content);
int				ft_lstsize(t_list *lst);

//Numbers
int				ft_atoi(const char *str);
int				convert_res(const char *str, unsigned long int nbr, int index);
int				count_digit(const char *str, int index);
char			*ft_itoa(int n);
unsigned int	check_negative(int n);
static int		ft_countnbr(int n, int nbr);

//Printing

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