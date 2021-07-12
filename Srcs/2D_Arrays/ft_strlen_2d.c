/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:08:38 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 15:09:02 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

int	ft_strlen_2d(const char **s)
{
	int		len;

	len = 0;
	if (!s)
		return (-1);
	while (s[len] != NULL)
		len++;
	return (len);
}