/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 09:19:40 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:25:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_toupper(int c)
{
	if (!c)
		return (0);
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
