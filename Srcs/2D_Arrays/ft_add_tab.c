/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:51:54 by amarini-          #+#    #+#             */
/*   Updated: 2022/02/26 02:48:01 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_add_tab(char **arr, char *str)
{
	char	**result;
	int		length;
	int		i;

	length = 1;
	if (arr)
		length = ft_tablen((const char **)arr) + 1;
	i = 0;
	result = (char **)malloc((length + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[length] = NULL;
	if (arr)
	{
		while (i < (length - 1))
		{
			result[i] = ft_strdup(arr[i]);
			i++;
		}
	}
	result[i] = ft_strdup(str);
	ft_freetab(arr);
	arr = NULL;
	return (result);
}
