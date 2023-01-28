/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:42:30 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/26 15:49:07 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		temp = *lst;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
}
/*int	main(void)
{
	t_list *list;
	t_list *new;

	list = ft_lstnew("node1");
	ft_lstadd_back(&list, ft_lstnew("node2"));
	ft_lstadd_back(&list, ft_lstnew("node3"));
	ft_lstadd_back(&list, ft_lstnew("node4"));

	while (list)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}

	return (0);
}*/