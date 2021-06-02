/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 09:11:40 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/02 12:44:12 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		occurence;
	char	*string;

	i = 0;
	occurence = 0;
	string = (char *)s;
	while (string[i] != '\0')
	{
		if (string[i] == c)
			occurence = i;
		i++;
	}
	if (string[i] == c)
		occurence = i;
	if (occurence == 0 && string[occurence] != c)
		return (NULL);
	return (&string[occurence]);
}
