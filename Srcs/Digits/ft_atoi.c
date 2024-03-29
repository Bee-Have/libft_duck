/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 08:57:15 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 17:00:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digit(const char *str, int index)
{
	int		i;

	i = 0;
	index += 1;
	while (str[index] != '\0' && (str[index] >= '0' && str[index] <= '9'))
	{
		i++;
		index++;
	}
	return (i);
}

long long int	convert_res(const char *str, long long int nbr, int index)
{
	long long int	max;

	max = 9223372036854775807;
	if (str[index] == '-' && (nbr > max || count_digit(str, index) > 19))
		return (nbr);
	else if (nbr > max || count_digit(str, index) > 19)
		return (nbr);
	if (str[index] == '-')
		nbr *= -1;
	if (nbr == 1 && count_digit(str, index) >= 3)
		return (0);
	return (nbr);
}

long long	ft_atoi(const char *str)
{
	int					i;
	int					index;
	long long int		res;

	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	index = i;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (convert_res(str, res, index));
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (convert_res(str, res, index));
}
