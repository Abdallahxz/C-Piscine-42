/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:58:14 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/18 16:58:17 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*array;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	len = max - min;
	array = (int *)malloc(len * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
