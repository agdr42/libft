/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:06:50 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/26 15:37:49 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*current;

	count = 0;
	current = lst;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
/*int main(void)
{
    t_list *list;

    // asignar valores a la lista enlazada
    list = ft_lstnew("node1");
    ft_lstadd_front(&list, ft_lstnew("node2"));
    ft_lstadd_front(&list, ft_lstnew("node3"));

    printf("Size of list: %d\n", ft_lstsize(list));

    return (0);
}*/