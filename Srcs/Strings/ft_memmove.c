/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:59:52 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/02 14:46:46 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dstcopy;
	char	*srccopy;

	dstcopy = (char *)dst;
	srccopy = (char *)src;
	if ((!dst && !src) || src == dst)
		return (srccopy);
	if (dst < src)
		i = 0;
	else
		i = len;
	while ((dst < src && i < len) || (dst > src && i > 0))
	{
		dstcopy[i] = srccopy[i];
		if (dst < src)
			i++;
		else
			i--;
	}
	return (dstcopy);
}
