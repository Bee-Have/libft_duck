/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:39:22 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 17:01:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tab(char **tab)
{
	int		row;

	row = 0;
	while (row < ft_tablen((const char **)tab))
	{
		write(1, tab[row], ft_strlen(tab[row]));
		write(1, "\n", 1);
		row++;
	}
	write(1, "\n", 1);
	return ;
}
