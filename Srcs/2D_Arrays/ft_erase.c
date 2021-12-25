/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:36:36 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 16:59:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_erase(char **str, int start, int amount)
{
	char	**result;
	int		length;
	int		i;

	i = start;
	length = ft_tablen((const char **)str) - amount;
	result = (char **)malloc((length + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[length] = NULL;
	while (i < length)
	{
		result[i] = ft_strdup(str[amount + i]);
		i++;
	}
	return (result);
}
