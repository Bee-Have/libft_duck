/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 07:41:27 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:24:59 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*cp;

	i = 0;
	cp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!cp)
		return (NULL);
	while (s1[i] != '\0')
	{
		cp[i] = s1[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
