/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:09:10 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/05 20:49:47 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn_recursive(int *arr, int n, int index)
{
	int	i;

	if (index == n)
	{
		print_comb(arr, n);
		return ;
	}
	if (index == 0)
		i = 0;
	else
		i = arr[index - 1] + 1;
	while (i <= 9)
	{
		arr[index] = i;
		ft_print_combn_recursive(arr, n, index + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
	ft_print_combn_recursive(arr, n, 0);
}

/*int	main(void)
{
	ft_print_combn(2);
	return (0);
}*/
