/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:08:38 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 15:09:02 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tablen(const char **s)
{
	int		len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != NULL)
		len++;
	return (len);
}
