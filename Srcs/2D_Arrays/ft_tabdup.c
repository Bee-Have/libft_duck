/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 20:11:32 by user42            #+#    #+#             */
/*   Updated: 2022/02/23 00:12:43 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabdup(char **arr)
{
	char	**copy;
	int		length;
	int		i;

	i = 0;
	if (!arr)
		return (NULL);
	length = ft_tablen((const char **)arr);
	copy = (char **)malloc((length + 1) * sizeof(char *));
	if (!copy)
		return (NULL);
	copy[length] = NULL;
	while (i < length)
	{
		copy[i] = ft_strdup(arr[i]);
		i++;
	}
	return (copy);
}
