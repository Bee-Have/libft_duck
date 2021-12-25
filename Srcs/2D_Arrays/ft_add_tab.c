/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:51:54 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 17:13:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_add_tab(char **tab, char *str)
{
	char	**result;
	int		length;
	int		i;

	length = 1;
	if (tab)
		length = ft_tablen((const char **)tab) + 1;
	i = 0;
	result = (char **)malloc((length + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[length] = NULL;
	if (tab)
	{
		while (i < (length - 1))
		{
			result[i] = ft_strdup(tab[i]);
			i++;
		}
	}
	result[i] = ft_strdup(str);
	ft_freetab(tab);
	return (result);
}
