/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 12:36:00 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 13:59:05 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_putstr(char *str)
{
	int		length;

	if (!str)
		return ;
	length = ft_strlen(str);
	write(1, str, length);
	return ;
}