/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:15:07 by mheinke           #+#    #+#             */
/*   Updated: 2023/07/13 21:35:06 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_node;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	current_node = *lst;
	while (current_node)
	{
		next_node = current_node->next;
		ft_lstdelone(current_node, del);
		current_node = next_node;
	}
	//*lst = NULL;
}

#include <stdio.h>

void del(void *content){
	while (content)
		free(content);
}

int	main(void){

	int a = 10;
	int b = 20;
	int c = 30;

	t_list *node1 = ft_lstnew(&a);
	t_list *node2 = ft_lstnew(&b);
	t_list *node3 = ft_lstnew(&c);
	
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
printf("Before:\n");
while (node1)
	{
		printf("%d\n", *(int *)(node1->content));
		node1 = node1->next;
	}
	ft_lstclear(&node1, del);

	printf("After:\n");
	while (node2)
	{
		printf("%d \n", *(int *)(node2->content));
		node1 = node1->next;
	}
}