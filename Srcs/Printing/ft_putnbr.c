/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:48:49 by amarini-          #+#    #+#             */
/*   Updated: 2021/07/29 18:29:03 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_putnbr(int nbr)
{
	char	*result;

	result = ft_itoa(nbr);
	write(1, result, ft_strlen(result));
	return ;
}
