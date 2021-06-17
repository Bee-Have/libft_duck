/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:43:17 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/16 16:18:22 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

t_list	*ft_lstnew(int content)
{
	int		value;
	t_list	*head;

	value = content;
	head = NULL;
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = value;
	head->next = NULL;
	return (head);
}
