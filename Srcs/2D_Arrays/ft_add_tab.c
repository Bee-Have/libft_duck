/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:51:54 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 16:37:26 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	**ft_add_tab(char **tab, char *str)
{
	char	**result;
	int		length;
	int		i;

	length = 1;
	if (tab)
		length = ft_strlen_2d((const char **)tab) + 1;
	i = 0;
	result = (char **)malloc((length + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[length] = NULL;
	if (tab)
		while (i < (length - 1))
		{
			result[i] = ft_strdup(tab[i]);
			i++;
		}
	result[i] = ft_strdup(str);
	free(tab);
	return (result);
}