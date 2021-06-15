/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:40:09 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/02 14:21:27 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int		i;
	char				*destcopy;
	char				*srccopy;

	i = 0;
	destcopy = (char *)dst;
	srccopy = (char *)src;
	while (i < n)
	{
		destcopy[i] = srccopy[i];
		if (srccopy[i] == (char)c)
			return (&destcopy[i + 1]);
		i++;
	}
	return (NULL);
}