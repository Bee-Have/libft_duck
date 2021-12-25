/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:46:20 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 17:02:28 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
