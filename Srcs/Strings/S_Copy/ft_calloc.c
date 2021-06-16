/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 07:41:07 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:24:15 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	i;
	void			*result;
	char			*tmp;

	i = 0;
	result = (void *)malloc(count * size);
	if (!result)
		return (NULL);
	tmp = (char *)result;
	while (i < (count * size))
	{
		tmp[i] = 0;
		i++;
	}
	return (result);
}
