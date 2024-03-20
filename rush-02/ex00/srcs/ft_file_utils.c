/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassaad- <aassaad-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 11:27:40 by ecaceres          #+#    #+#             */
/*   Updated: 2024/03/17 21:41:49 by aassaad-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_open_file(char *path)
{
	return (open(path, O_RDONLY));
}

int	ft_close_file(int fd)
{
	return (close(fd));
}
