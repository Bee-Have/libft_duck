/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 10:22:02 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:24:55 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int		i;
	char				*array;
	unsigned char		character;

	i = 0;
	character = (unsigned char)c;
	array = (char *)b;
	while (i < len)
	{
		array[i] = character;
		i++;
	}
	return (array);
}
