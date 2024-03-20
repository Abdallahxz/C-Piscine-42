/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:43:59 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/13 15:31:54 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "   ---+--+1234ab567";
	char	str2[] = "   -67890";
	char	str3[] = "   +54321";
	char	str4[] = "   -0";
	char	str5[] = "   +0";
	char	str6[] = "   98765k4321";
	char	str7[] = "   -2147483648";
	char	str8[] = "   2147483647";

	printf("str1: %d\n", ft_atoi(str1));
	printf("str2: %d\n", ft_atoi(str2));
	printf("str3: %d\n", ft_atoi(str3));
	printf("str4: %d\n", ft_atoi(str4));
	printf("str5: %d\n", ft_atoi(str5));
	printf("str6: %d\n", ft_atoi(str6));
	printf("str7: %d\n", ft_atoi(str7));
	printf("str8: %d\n", ft_atoi(str8));
	return (0);
}
*/