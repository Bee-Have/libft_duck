/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabntab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 15:12:03 by user42            #+#    #+#             */
/*   Updated: 2022/01/24 15:26:51 by amarini-         ###   ########.fr       */
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
			while ((int)col < max && needle[i] != '\0'
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
