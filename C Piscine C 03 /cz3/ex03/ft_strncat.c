/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:30:32 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/13 10:37:12 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (ptr);
}
/*
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void) {
    char dest[20] = "merhaba,";
    char src[] = "world!";
    unsigned int nb = 2;

    printf("Antes de strncat: dest = %s\n", dest);

    ft_strncat(dest, src, nb);

    printf("Después de strncat: dest = %s\n", dest);

    return 0;
}
*/