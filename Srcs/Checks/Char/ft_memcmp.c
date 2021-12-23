/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:49:56 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:20:41 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	compare(unsigned char chr1, unsigned char chr2)
{
	if (chr1 != chr2)
		return (1);
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int				i;
	unsigned char				*copy1;
	unsigned char				*copy2;

	i = 0;
	copy1 = (unsigned char *)s1;
	copy2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while (i < n)
	{
		if (compare(copy1[i], copy2[i]) == 1)
			return ((unsigned char)copy1[i] - (unsigned char)copy2[i]);
		else
			i++;
	}
	if (i < n && (copy1[i] == '\0' || copy2[i] == '\0')
		&& compare(copy1[i], copy2[i]) == 1)
		return ((unsigned char)copy1[i] - (unsigned char)copy2[i]);
	return (0);
}
