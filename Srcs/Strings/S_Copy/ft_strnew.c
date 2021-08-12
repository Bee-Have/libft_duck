/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:14:00 by amarini-          #+#    #+#             */
/*   Updated: 2021/08/12 13:58:54 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

char	*ft_strnew(char c)
{
	char	*result;

	result = (char *)malloc(2 * sizeof(char));
	if (!result)
		return (NULL);
	result[1] = '\0';
	result[0] = c;
	return (result);
}
