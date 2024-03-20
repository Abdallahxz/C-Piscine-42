/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:58:28 by aassaad-          #+#    #+#             */
/*   Updated: 2024/03/18 16:58:34 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

void	append_string(char *result, char *str, int *index)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		result[(*index)++] = str[j++];
	}
}

void	append_separator(char *result, char *sep, int *index)
{
	int	k;

	k = 0;
	while (sep[k] != '\0')
	{
		result[(*index)++] = sep[k++];
	}
}

char	*compose_string(int size, char **strs, char *sep, int total_length)
{
	char	*result;
	int		index;
	int		i;

	result = (char *)malloc(total_length + 1);
	if (result == NULL)
		return (NULL);
	index = 0;
	i = 0;
	while (i < size)
	{
		append_string(result, strs[i], &index);
		if (i < size - 1)
		{
			append_separator(result, sep, &index);
		}
		i++;
	}
	result[index] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*empty_str;
	int		total_length;
	int		i;

	if (size == 0)
	{
		empty_str = (char *)malloc(1);
		if (empty_str != NULL)
			*empty_str = '\0';
		return (empty_str);
	}
	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size - 1)
			total_length += ft_strlen(sep);
		i++;
	}
	return (compose_string(size, strs, sep, total_length));
}
