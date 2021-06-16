/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:55:46 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:24:50 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	char				*strdest;
	char				*strsrc;

	i = 0;
	strdest = (char *)dst;
	strsrc = (char *)src;
	if (strdest == strsrc)
		return (NULL);
	while (i < n)
	{
		strdest[i] = strsrc[i];
		i++;
	}
	return (strdest);
}
