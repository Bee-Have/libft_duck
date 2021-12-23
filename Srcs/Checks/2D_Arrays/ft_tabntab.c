/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabntab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:12:03 by user42            #+#    #+#             */
/*   Updated: 2021/12/16 18:21:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tabntab(char **haystack, const char *needle, int max)
{
	size_t	i;
	size_t	row;
	size_t	col;

	if (!haystack || !needle || ft_strlen(needle) == 0)
		return (NULL);
	row = 0;
	while (haystack[row] != NULL)
	{
		col = 0;
		while (haystack[row][col] != '\0')
		{
			i = 0;
			while (col < max && needle[i] != '\0'
				&& haystack[row][col + i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (ft_strdup(haystack[row]));
					++i;
			}
			++col;
		}
		++row;
	}
	return (NULL);
}