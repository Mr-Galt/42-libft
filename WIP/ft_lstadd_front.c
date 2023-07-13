/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:56:15 by mheinke           #+#    #+#             */
/*   Updated: 2023/07/13 20:48:51 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
	else
		return ;
}

// #include <stdio.h>
// int	main(void){
// 	char a = 'a';
// 	char b = 'b';
// 	char c = 'c';
// 	t_list *node1 = ft_lstnew(&a);
// 	t_list *node2 = ft_lstnew(&b);
// 	t_list *node3 = ft_lstnew(&c);
	
// 	node1->next = node2;
// 	node2->next = NULL;
// 	node3->next = NULL;

// 	printf("1 Node: %p\n", node1);
// 	printf("2 Node: %p\n", node2);
// 	printf("3 Node: %p\n", node3);
	
// 	printf("Node 3 at address %p connects to node at address %p\n",
// 				node3, node3->next);
// 	ft_lstadd_front(&node1, node3);
// 	printf("Node 3 at address %p connects to node at address %p\n",
// 			node3, node3->next);
// }