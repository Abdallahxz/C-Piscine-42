/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:45:08 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/12 15:28:04 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_address(void *addr)
{
	size_t			i;
	unsigned char	*address;

	address = (unsigned char *)addr;
	i = 0;
	while (i < 16)
	{
		ft_putchar("0123456789abcdef"[address[i] / 16]);
		ft_putchar("0123456789abcdef"[address[i] % 16]);
		i++;
	}
}

void	print_content(void *addr, unsigned int size)
{
	size_t			i;
	unsigned char	*address;

	address = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		if (address[i] >= 32 && address[i] <= 126)
			ft_putchar(address[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*address;

	address = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		print_address(address + i);
		ft_putchar(':');
		ft_putchar(' ');
		print_content(address + i, 16);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}
/*
int	main(void)
{
	char memory[] = "Hello, world!
     This is a test memory content for the ft_print_memory function.";

	ft_print_memory(memory, sizeof(memory));
	return (0);
}
*/