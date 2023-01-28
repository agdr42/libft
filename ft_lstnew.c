/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:29:18 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/26 13:05:29 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (new_elem == NULL)
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}
/*int main(void)
{
    int test_int = 42;
    t_list *new_elem;

    new_elem = ft_lstnew(&test_int);
    if (new_elem != NULL)
    {
        printf("Content: %d\n", *(int*)new_elem->content);
        printf("Next: %p\n", new_elem->next);
    }
    else
    {
        printf("Error creating new list element.\n");
    }

    return (0);
}*/