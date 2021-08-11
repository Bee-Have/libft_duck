/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:11:14 by amarini-          #+#    #+#             */
/*   Updated: 2021/08/11 18:36:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int		i;
	char				*tab;

	i = 0;
	tab = (char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		tab[i] = '\0';
		i++;
	}
}
