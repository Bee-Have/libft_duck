/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 07:39:51 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:25:03 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		idst;
	int		isrc;
	int		maxlen;

	if ((int)dstsize < ft_strlen(dst))
	{
		return (ft_strlen(src) + dstsize);
	}
	maxlen = ft_strlen(dst) + ft_strlen(src);
	isrc = 0;
	idst = ft_strlen(dst);
	while (src[isrc] != '\0' && idst < ((int)dstsize - 1))
	{
		dst[idst] = src[isrc];
		idst++;
		isrc++;
	}
	dst[idst] = '\0';
	if (idst > maxlen)
		return (idst);
	return (maxlen);
}
