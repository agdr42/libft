/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:30:51 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/26 15:51:04 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*int	main(void)
{
	t_list	*list;
	t_list	*last_node;

	// asignar valores a la lista enlazada
	list = ft_lstnew("node1");
	ft_lstadd_back(&list, ft_lstnew("node2"));
	ft_lstadd_back(&list, ft_lstnew("node3"));
	last_node = ft_lstlast(list);
	printf("Content of last node: %s\n", last_node->content);
	return (0);
}*/