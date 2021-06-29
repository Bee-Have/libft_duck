/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarini- <amarini-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:12:43 by amarini-          #+#    #+#             */
/*   Updated: 2021/06/28 12:20:52 by amarini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(long long int *))
{
	if (!lst)
		return ;
	if (lst->content)
	{
		del(&lst->content);
		lst->content = 0;
	}
	free(lst);
	lst = NULL;
}
