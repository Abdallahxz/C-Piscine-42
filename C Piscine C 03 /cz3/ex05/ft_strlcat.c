/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:56:03 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/14 09:33:01 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	total_len;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	total_len = dest_len + src_len;
	if (size == 0 || dest_len >= size)
		return (total_len);
	i = dest_len;
	while (i < size - 1 && src[i - dest_len])
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	dest[i] = '\0';
	return (total_len);
}

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[9] = "Hello";
	char src[] = " world!";
	unsigned int size = sizeof(dest);

	printf("Before ft_strlcat: dest = %s, src = %s\n", dest, src);
	unsigned int result = ft_strlcat(dest, src, size);
	printf("After ft_strlcat: dest = %s, src = %s\n", dest, src);

	return (0);
}
