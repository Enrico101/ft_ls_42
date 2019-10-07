/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_group.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:32:24 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 12:35:20 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_group(const char *path, t_info *group)
{
	struct stat		buf;
	struct group	*g_info;
	gid_t			gid;

	stat(path, &buf);
	gid = buf.st_gid;
	g_info = getgrgid(gid);
	group->group = g_info->gr_name;
}
