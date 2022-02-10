/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:28:36 by amarini-          #+#    #+#             */
/*   Updated: 2022/02/10 19:54:12 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_insert_tab(char **arr, char *str, int index)
{
	char	**res;
	int		len;
	int		i;
	int		i_src;

	i = 0;
	i_src = 0;
	len = ft_tablen((const char **)arr) + 1;
	if (arr[index] == NULL)
		--len;
	res = (char **)malloc((len + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res[len] = NULL;
	while (i < len)
	{
		if (i == index)
			res[i] = ft_strdup(str);
		else
		{
			res[i] = ft_strdup(arr[i_src]);
			++i_src;
		}
		++i;
	}
	if (arr[index] == NULL)
		res[i] = ft_strdup(str);
	ft_freetab(arr);
	return (res);
}
