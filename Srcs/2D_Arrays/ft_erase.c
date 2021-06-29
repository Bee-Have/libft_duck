/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_erase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 18:36:36 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 15:50:42 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	**ft_erase(char **str, int start, int amount)
{
	char	**result;
	int		length;
	int		i;

	i = start;
	length = ft_strlen_2d((const char **)str) - amount;
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