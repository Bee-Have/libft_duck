/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:36:36 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/28 18:43:53 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	**ft_strtrim_2d(char **str, int amount)
{
	char	**result;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen_2d(str) - amount;
	result = (char **)malloc((length + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (i < length)
	{
		result[i] = ft_strdup(str[amount + i]);
		i++;
	}
	return (result);
}