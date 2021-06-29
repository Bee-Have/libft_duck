/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 17:19:17 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 18:47:51 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	**ft_make_tab(char *str)
{
	char	**result;
	int		length;

	length = 1;
	if (!str)
		length = 0;
	result = (char **)malloc((length + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[length] = NULL;
	if (str != NULL)
	{
		printf("no\n");
		result[0] = ft_strdup(str);
		free(str);
	}
	return (result);
}