/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:15:49 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:23:46 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int *))
{
	if (!lst)
		return ;
	while (lst->next != NULL)
	{
		f(&lst->content);
		lst = lst->next;
	}
	f(&lst->content);
}
