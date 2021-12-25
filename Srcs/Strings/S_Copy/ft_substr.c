/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 07:41:45 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 17:03:16 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*return_empty(void)
{
	char	*result;

	result = (char *)malloc(1 * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*result;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0 || (int)start >= ft_strlen(s))
		return (return_empty());
	if (ft_strlen(s) < (int)len)
		result = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	else
		result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (s[start] != '\0' && i < (int)len)
	{
		result[i] = s[start];
		i++;
		start++;
	}
	result[len] = '\0';
	return (result);
}
