/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:51:35 by mheinke           #+#    #+#             */
/*   Updated: 2023/07/13 20:39:30 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_node = ft_lstlast(*lst);
	last_node->next = new;
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

// 	printf("1 Node: %p\n", node1);
// 	printf("2 Node: %p\n", node2);
// 	printf("3 Node: %p\n", node3);
// 	if (node2->next == NULL)
// 		printf("2. Node is the last one\n");
// 	else if (node3->next == NULL)
// 		printf("3. Node is the last one\n");
// 	printf("Now we run lstadd_back\n");
// 	ft_lstadd_back(&node2, node3);
// 	if (node2->next == NULL)
// 		printf("2. Node is still the last one\n");
// 	else if (node3->next == NULL)
// 		printf("3. Node is the new last one\n");
// }