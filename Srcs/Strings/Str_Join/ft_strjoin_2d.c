/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_2d.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:26:45 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 12:13:30 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../Includes/libft.h"

char	**ft_strjoin_2d(char const **s1, char const **s2)
{
	int		i;
	int		j;
	char	**str;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	len_s1 = ft_strlen_2d(s1);
	len_s2 = ft_strlen_2d(s2);
	str = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len_s1)
	{
		str[i] = ft_strdup(s1[j]);
		i++;
		j++;
	}
	j = 0;
	while (i < (len_s1 + len_s2))
	{
		str[i] = ft_strdup(s2[j]);
		i++;
		j++;
	}
	return (str);
}


