/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:43:17 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/02 14:13:08 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstnew(void *content)
{
	char	*value;
	t_list	*head;

	value = (char *)content;
	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = value;
	head->next = NULL;
	return (head);
}
