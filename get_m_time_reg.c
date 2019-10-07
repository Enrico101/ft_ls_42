/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_m_time_reg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:34:46 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 13:34:05 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_m_time_reg(const char *path)
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
	ft_putstr(trim);
	ft_putchar(' ');
	free(trim);
}
