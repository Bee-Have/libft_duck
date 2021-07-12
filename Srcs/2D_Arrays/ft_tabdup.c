/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 20:11:32 by user42            #+#    #+#             */
/*   Updated: 2021/07/12 19:03:22 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	**ft_tabdup(char **tab)
{
	char	**copy;
	int		length;
	int		i;

	i = 0;
	length = ft_strlen_2d((const char **)tab);
	copy = (char **)malloc((length + 1) * sizeof(char *));
	if (!copy)
		return (NULL);
	copy[length] = NULL;
	while (i < length)
	{
		copy[i] = ft_strdup(tab[i]);
		i++;
	}
	// free(tab);
	return (copy);
}