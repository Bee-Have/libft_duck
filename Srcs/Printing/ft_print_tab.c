/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:39:22 by amarini-          #+#    #+#             */
/*   Updated: 2022/01/27 15:35:20 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tab(char **tab)
{
	int		row;

	row = 0;
	while (tab[row])
	{
		write(1, tab[row], ft_strlen(tab[row]));
		write(1, "\n", 1);
		row++;
	}
	ft_putstr("(null)");
	write(1, "\n", 1);
	return ;
}
