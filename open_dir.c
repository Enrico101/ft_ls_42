/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_dir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:52:54 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 12:02:20 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	combine(char *str, const char *path, t_info *info, int x)
{
	char	*dir_str;
	char	*dirp_str;

	dir_str = ft_strnew(255);
	dirp_str = ft_strnew(ft_strlen(str));
	ft_strcpy(dir_str, path);
	ft_strcpy(dirp_str, str);
	ft_strcat(dir_str, "/");
	ft_strcat(dir_str, dirp_str);
	info[x].n_direct_n = ft_strdup(dir_str);
	info[x].direct_n = ft_strdup(str);
	free(dir_str);
	free(dirp_str);
}

void	open_dir(const char *path, t_info *info)
{
	int				x;
	struct dirent	*dirp;
	DIR				*dir;

	x = 0;
	dir = opendir(path);
	if (dir == NULL)
	{
		ft_putstr("ls: ");
		ft_putstr(path);
		ft_putstr(": ");
		ft_putstr(strerror(13));
		ft_putchar('\n');
		return ;
	}
	else
		while ((dirp = readdir(dir)))
		{
			combine(dirp->d_name, path, info, x);
			x++;
		}
	closedir(dir);
}
