/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:39:22 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/29 18:47:06 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_print_tab(char **tab)
{
	int		row;

	// if (!tab)
	// 	return ;
	row = 0;
	while (row < ft_strlen_2d((const char **)tab))
	{
		write(1, tab[row], ft_strlen(tab[row]));
		write(1, "-", 1);
		row++;
	}
	write(1, "\n", 1);
	return ;
}