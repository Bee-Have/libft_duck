/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/01 09:24:18 by amarini-          #+#    #+#             */
/*   Updated: 2021/08/12 13:59:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

char	*ft_itoa(int n)
{
	int				ncount;
	unsigned int	nbr;
	char			*str;

	ncount = 0;
	nbr = check_negative(n);
	ncount = ft_countnbr(n, nbr);
	str = (char *)malloc((ncount + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[ncount] = '\0';
	ncount--;
	while (ncount > 0 && ncount >= 1 && nbr >= 10)
	{
		nbr = check_negative(n) % 10;
		str[ncount] = nbr + '0';
		ncount--;
		n = n / 10;
		nbr = check_negative(n);
	}
	if (ncount <= 1)
		str[ncount] = nbr + '0';
	if (n < 0)
		str[ncount - 1] = '-';
	return (str);
}

int	ft_countnbr(int n, int nbr)
{
	int		count;

	count = 0;
	while (nbr > 0 || nbr < 0)
	{
		nbr = nbr / 10;
		count++;
	}
	if (n < 0)
		count++;
	if (n == 0)
		return (1);
	return (count);
}

unsigned int	check_negative(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
