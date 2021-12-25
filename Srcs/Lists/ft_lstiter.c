/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:15:49 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 17:01:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(long long int *))
{
	if (!lst)
		return ;
	while (lst->next != NULL)
	{
		f(&lst->value);
		lst = lst->next;
	}
	f(&lst->value);
}
