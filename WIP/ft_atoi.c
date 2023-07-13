/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mheinke <mheinke@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:29:15 by mheinke           #+#    #+#             */
/*   Updated: 2023/07/13 18:51:15 by mheinke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	capture_counter(int count, int neg_flag)
{
	if (count >= 19 && neg_flag == -1)
		return (0);
	else
		return (-1);
}

static long long	my_atoll(const char *str)
{
	int			i;
	int			neg_flag;
	long long	res;
	int			count;

	i = 0;
	neg_flag = 1;
	res = 0;
	count = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' && str[i++])
		neg_flag *= -1;
	else if (str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i++] - '0') + (res * 10);
		count++;
	}
	if (count >= 19)
		return (capture_counter(count, neg_flag));
	return (res * neg_flag);
}

static long	my_atol(const char *str)
{
	return (my_atoll(str));
}

int	ft_atoi(const char *str)
{
	return (my_atol(str));
}

#include <stdio.h>
int	main(){
	char str[] = "-9223372036854775808";
	
	printf("OG: %d\n", atoi(str));
	printf("FT: %d\n", ft_atoi(str));
}