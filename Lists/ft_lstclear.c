/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:14:10 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/15 10:47:37 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int *))
{
	t_list	*current;
	t_list	*tmp;

	current = (*lst)->next;
	del(&(*lst)->content);
	free(*lst);
	*lst = NULL;
	while (current != NULL)
	{
		tmp = current->next;
		del(&current->content);
		free(current);
		current = NULL;
		current = tmp;
	}
}
