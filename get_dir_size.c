/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dir_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:29:03 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 12:00:57 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	get_dir_size(char *path, int x)
{
	DIR				*dir;
	struct dirent	*dirp;
	char			*temp;

	dir = opendir(path);
	if (dir == NULL)
		return (x);
	else
		while ((dirp = readdir(dir)))
			if (dirp != NULL)
			{
				temp = ft_strnew(255);
				ft_strcpy(temp, path);
				ft_strcat(temp, "/");
				ft_strcat(temp, dirp->d_name);
				if (is_dir(temp) == 1 && dot(dirp->d_name) == 1)
				{
					x++;
					x = get_dir_size(temp, x);
				}
				free(temp);
			}
	closedir(dir);
	return (x);
}
