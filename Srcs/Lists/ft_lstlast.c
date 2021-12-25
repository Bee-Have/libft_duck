/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:10:26 by amarini-          #+#    #+#             */
/*   Updated: 2021/12/23 17:01:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;
	t_list	*tmp;

	tmp = NULL;
	current = NULL;
	current = lst;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
	}
	return (tmp);
}
