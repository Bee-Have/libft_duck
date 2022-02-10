/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:39:22 by amarini-          #+#    #+#             */
/*   Updated: 2022/02/10 19:13:01 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tab(char **arr)
{
	int		row;

	row = 0;
	if (arr == NULL)
		return ;
	while (arr[row])
	{
		write(1, "[", 1);
		write(1, arr[row], ft_strlen(arr[row]));
		write(1, "]", 1);
		write(1, "\n", 1);
		row++;
	}
	if (arr[row] == NULL)
		ft_putstr("(null)");
	write(1, "\n", 1);
	return ;
}
