/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:00:03 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/06 18:10:26 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	int	i;

	size = sizeof(tab) / sizeof(tab[0]);
	printf("قبل عكس الجدول: ");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");
	ft_rev_int_tab(tab, size);
	printf("بعد عكس الجدول: ");
	for (i = 0; i < size; i++)
		printf("%d ", tab[i]);
	printf("\n");
	return (0);
}*/
