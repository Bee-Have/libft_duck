/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:14:10 by amarini-          #+#    #+#             */
/*   Updated: 2021/07/12 15:27:39 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(long long int *))
{
	t_list	*current;
	t_list	*tmp;

	current = (*lst)->next;
	del(&(*lst)->value);
	free(*lst);
	*lst = NULL;
	while (current != NULL)
	{
		tmp = current->next;
		del(&current->value);
		free(current);
		current = NULL;
		current = tmp;
	}
}
