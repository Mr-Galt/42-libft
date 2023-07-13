/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:23:51 by mheinke           #+#    #+#             */
/*   Updated: 2023/07/13 20:26:31 by mheinke          ###   ########.fr       */
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

// #include <stdio.h>
// int	main(void){
// 	char a = 'a';
// 	char b = 'b';
// 	char c = 'c';
// 	t_list *node1 = ft_lstnew(&a);
// 	t_list *node2 = ft_lstnew(&b);
// 	t_list *node3 = ft_lstnew(&c);
	
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;

// 	printf("Last Node: %p\n", ft_lstlast(node1));
// 	printf("   1 Node: %p\n", node1);
// 	printf("   2 Node: %p\n", node2);
// 	printf("   3 Node: %p\n", node3);
// }
