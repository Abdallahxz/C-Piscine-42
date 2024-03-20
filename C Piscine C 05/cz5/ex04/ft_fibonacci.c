/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:59:00 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/14 11:59:06 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int ft_fibonacci(int index);

int main() {
    int index;
    printf("Fibonacci dizisinin indeksini girin:");
    scanf("%d", &index);

    int sonuc = ft_fibonacci(index);
    if (sonuc == -1)
        printf("Geçersiz indeks. Lütfen negatif olmayan bir tamsayı girin.\n");
    else
        printf("Fibonacci dizisinin %d. indeksindeki sayı: %d\n", index, sonuc);

    return 0;
}
*/
