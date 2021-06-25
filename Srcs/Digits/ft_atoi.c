/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 08:57:15 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/25 15:05:21 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"
#include "../../../push_swap.h"

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

int	convert_res(const char *str, long long int nbr, int index)
{
	long long int	max;

	max = 2147483647;
	if (str[index] == '-' && (nbr > (max + 1) || count_digit(str, index) > 11))
		return (error_message());
	else if (nbr > max || count_digit(str, index) > 10)
		return (error_message());
	if (str[index] == '-')
		nbr *= -1;
	if (nbr == 1 && count_digit(str, index) >= 3)
		return (error_message());
	return (nbr);
}

long long int	ft_atoi(const char *str)
{
	int					i;
	int					index;
	long long int	res;

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
