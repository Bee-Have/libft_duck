/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:46:20 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/02 14:21:33 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int		i;
	char				*copy;

	i = 0;
	copy = (char *)s;
	while (i < n)
	{
		if (copy[i] == (char)c)
			return (&copy[i]);
		i++;
	}
	return (NULL);
}
