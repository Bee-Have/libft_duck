/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:19:17 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 17:24:45 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	**ft_make_tab(char *str)
{
	char	**result;

	result = (char **)malloc(2 * sizeof(char *));
	if (!result)
		return (NULL);
	result[1] = NULL;
	result[0] = ft_strdup(str);
	free(str);
	return (result);
}