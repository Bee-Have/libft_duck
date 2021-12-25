/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:25:15 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 16:56:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)s;
	while (string[i] != '\0')
	{
		if (string[i] == c)
			return (&string[i]);
		i++;
	}
	if (string[i] == c)
		return (&string[i]);
	return (NULL);
}
