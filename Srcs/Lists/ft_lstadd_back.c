/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:11:34 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/28 11:20:42 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*iterator;

	if (!*alst)
	{
		*alst = new;
		(*alst)->next = NULL;
		return ;
	}
	iterator = (*alst);
	while (iterator->next)
		iterator = iterator->next;
	iterator->next = new;
	new->next = NULL;
}
