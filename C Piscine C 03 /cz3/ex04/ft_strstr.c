/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:37:44 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/17 18:45:22 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr_str;
	char	*ptr_to_find;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		ptr_str = str;
		ptr_to_find = to_find;
		while (*ptr_to_find && *ptr_str == *ptr_to_find)
		{
			ptr_str++;
			ptr_to_find++;
		}
		if (*ptr_to_find == '\0')
			return (str);
		if (*ptr_str == '\0')
			break ;
		str++;
	}
	return ((char *)0);
}

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str1[] = "Hello, world!";
	char	str2[] = "world";
	char	str3[] = "not found";
	char	*result1;
	char	*result2;

	result1 = ft_strstr(str1, str2);
	result2 = ft_strstr(str1, str3);
	if (result1)
		printf("'%s' fue encontrado en '%s' en la posición:%ld\n", str2, str1, result1 - str1);
	else
		printf("'%s' no fue encontrado en '%s'\n", str2, str1);
	if (result2)
		printf("'%s' fue encontrado en '%s' en la posición:%ld\n", str3, str1, result2 - str1);
	else
		printf("'%s' no fue encontrado en '%s'\n", str3, str1);
	return (0);
}
