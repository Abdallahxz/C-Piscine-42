/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:02:07 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/13 13:43:44 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hel";
	int		result;

	result = ft_strncmp(str1, str2,3);
	if (result == 0)
	{
		printf("Las cuerdas son iguales.\n");
	}
	else if (result < 0)
	{
		printf("La primera cadena es menor que la segunda.\n");
	}
	else
	{
		printf("La primera cadena es mayor que la segunda.\n");
	}
	return (0);
}
*/