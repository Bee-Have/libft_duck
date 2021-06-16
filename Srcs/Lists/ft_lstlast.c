/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:10:26 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 14:23:49 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

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
