/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:28:36 by amarini-          #+#    #+#             */
/*   Updated: 2022/03/03 22:58:02 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**cpy_tab(char **src, char **dst, char *str, int index);

char	**ft_insert_tab(char **arr, char *str, int index)
{
	char	**res;
	int		len;

	if (!str)
	{
		res = ft_tabdup(arr);
		ft_freetab(arr);
		return (res);
	}
	if (!arr)
		len = 1;
	else
		len = ft_tablen((const char **)arr) + 1;
	res = (char **)malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[len] = NULL;
	res = cpy_tab(arr, res, str, index);
	ft_freetab(arr);
	return (res);
}

static char	**cpy_tab(char **src, char **dst, char *str, int index)
{
	int	i;
	int	i_src;

	i = 0;
	i_src = 0;
	while (i < ft_tablen((const char **)src) + 1)
	{
		if (i == index)
			dst[i] = ft_strdup(str);
		else
		{
			dst[i] = ft_strdup(src[i_src]);
			++i_src;
		}
		++i;
	}
	return (dst);
}
