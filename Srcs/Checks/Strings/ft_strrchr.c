/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 09:11:40 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 16:59:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
