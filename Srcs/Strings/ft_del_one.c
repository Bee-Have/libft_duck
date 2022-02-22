/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_one.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:33:30 by amarini-          #+#    #+#             */
/*   Updated: 2022/02/22 11:39:16 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_del_one(char *str, int index)
{
	int		len;
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	len = ft_strlen(str) - 1;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	res[len] = '\0';
	while (str[j] != '\0' && i < len)
	{
		if (j == index)
			j++;
		res[i] = str[j];
		++j;
		++i;
	}
	return (res);
}
