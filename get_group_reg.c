/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_group_reg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:33:04 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 13:33:25 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_group_reg(const char *path)
{
	struct stat		buf;
	struct group	*g_info;
	gid_t			gid;

	stat(path, &buf);
	gid = buf.st_gid;
	g_info = getgrgid(gid);
	ft_putstr(g_info->gr_name);
	ft_putchar(' ');
}
