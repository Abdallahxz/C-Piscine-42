/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:40:23 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/06 18:54:23 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/* #include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {5, 2, 8, 1, 6};            
		// مثال لجدول من الأرقام الصحيحة غير مرتب
	int size = sizeof(tab) / sizeof(tab[0]); // حساب حجم الجدول
	// طباعة الجدول قبل الفرز
	printf("Original array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	// استدعاء الدالة لفرز الجدول
	ft_sort_int_tab(tab, size);
	// طباعة الجدول بعد الفرز
	printf("Sorted array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
	return (0);
}*/
