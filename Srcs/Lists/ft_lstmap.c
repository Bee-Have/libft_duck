/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:17:09 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/15 10:53:13 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int), void (*del)(int *))
{
	t_list	*new;
	t_list	*head;

	if (!lst)
		return (NULL);
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	head = new;
	while (lst->next != NULL)
	{
		new->content = f(lst->content);
		new->next = (t_list *)malloc(sizeof(t_list));
		if (!new->next)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	new->content = f(lst->content);
	new->next = NULL;
	return (head);
}
