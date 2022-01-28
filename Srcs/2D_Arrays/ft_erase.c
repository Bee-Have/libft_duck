/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:36:36 by amarini-          #+#    #+#             */
/*   Updated: 2022/01/28 18:34:11 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_erase(char **str, int start, int amount)
{
	char	**result;
	int		length;
	int		i;

	i = 0;
	length = ft_tablen((const char **)str) - amount;
	result = (char **)malloc((length + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[length] = NULL;
	while (i < start)
	{
		result[i] = ft_strdup(str[i]);
		++i;
	}
	while (i < length)
	{
		result[i] = ft_strdup(str[i + amount]);
		++i;
	}
	return (result);
}
