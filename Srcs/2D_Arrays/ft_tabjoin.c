/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabjoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:26:45 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 15:09:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	**ft_tabjoin(char **s1, char **s2)
{
	int		i;
	int		j;
	char	**str;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len_s1 = ft_tablen((const char **)s1);
	len_s2 = ft_tablen((const char **)s2);
	str = (char **)malloc((len_s1 + len_s2 + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str[len_s1 + len_s2] = NULL;
	fill_tab(&str, s1, len_s1, &i);
	fill_tab(&str, s2, len_s1 + len_s2, &i);
	return (str);
}

void	fill_tab(char ***dst, char **src, int length, int *index)
{
	int	i;

	i = 0;
	while ((*index) < length)
	{
		(*dst)[(*index)] = ft_strdup(src[i]);
		i++;
		(*index)++;
	}
	return ;
}
