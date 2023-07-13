/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:15:46 by mheinke           #+#    #+#             */
/*   Updated: 2023/07/13 19:19:32 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

#include <stdio.h>
int main(void)
{
	char	a = 'A';
	char	b = 'B';
	t_list *node1 = ft_lstnew(&a);
	t_list *node2 = ft_lstnew(&b);
	node1->next = node2;
	node2->next = NULL;
	printf("Node 1: %c\n", *(char*)node1->content);
	printf("Node 2: %c\n", *(char*)node2->content);
	printf("List Size: %d", ft_lstsize(node1));
}