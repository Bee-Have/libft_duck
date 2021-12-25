/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 07:41:27 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 17:02:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*cp;

	i = 0;
	cp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!cp)
		return (NULL);
	cp[ft_strlen(s1)] = '\0';
	while (s1[i] != '\0')
	{
		cp[i] = s1[i];
		i++;
	}
	return (cp);
}
