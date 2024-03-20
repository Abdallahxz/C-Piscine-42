/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_extend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 13:15:42 by ecaceres          #+#    #+#             */
/*   Updated: 2024/03/17 21:40:19 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include <ft_short_types.h>
#include <stdlib.h>

char	*ft_extend_array(char *orig, char *n_cont, UINT old_len, UINT len)
{
	char	*dest;

	dest = malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	if (orig != NULL)
		ft_str_n_copy(dest, orig, old_len);
	if (n_cont != NULL)
		ft_str_n_copy(dest + old_len, n_cont, (UINT)(len - old_len));
	return (dest);
}
