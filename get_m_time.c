/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_m_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:42:00 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 12:40:11 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_m_time(const char *path, t_info *m_time)
{
	int			x;
	int			y;
	struct stat	buf;
	char		*mtime;
	char		*trim;

	x = 4;
	y = 0;
	trim = ft_strnew(15);
	stat(path, &buf);
	mtime = ctime(&buf.st_mtime);
	while (mtime[x] && x <= 15)
	{
		trim[y] = mtime[x];
		y++;
		x++;
	}
	m_time->m_time = ft_strdup(trim);
	free(trim);
}
