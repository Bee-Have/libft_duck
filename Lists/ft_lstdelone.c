/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:12:43 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/15 10:51:55 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(int *))
{
	if (!lst)
		return ;
	if (lst->content)
	{
		del(&lst->content);
		lst->content = 0;
		lst->null = 1;
	}
	free(lst);
	lst = NULL;
}
