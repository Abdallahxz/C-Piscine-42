/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:59:22 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/14 11:59:24 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	mid;
	int	square;

	if (nb <= 0)
		return (0);
	left = 1;
	right = nb;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		square = mid * mid;
		if (square == nb)
			return (mid);
		else if (square < nb)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int number = 81;
	int square_root = ft_sqrt(number);
	if (square_root != 0)
		printf("The square root of %d is %d\n", number, square_root);
	else
		printf("mafi %d\n", number);
	return (0);
}
*/