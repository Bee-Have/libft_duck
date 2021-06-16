/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:30:02 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:25:07 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int		i;
	int					len;

	i = 0;
	len = 0;
	if (!dst && !src)
		return (len);
	while (src[len] != '\0')
		len++;
	if (dstsize <= 0)
		return (len);
	while (src[i] != '\0' && dstsize > 1)
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (len);
}
