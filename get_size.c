/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:44:38 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/06 10:36:52 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

ssize_t	get_size(const char *path)
{
	ssize_t			x;
	DIR				*dir;
	struct dirent	*dirp;

	x = 0;
	dir = opendir(path);
	while ((dirp = readdir(dir)) && dirp != NULL)
	{
		x++;
	}
	closedir(dir);
	return (x);
}
