/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_time.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:27:14 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 14:36:33 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	*find_time(t_info *direct_name)
{
	int			x;
	int			y;
	int			time_len;
	int			*time;
	struct stat	buf;

	x = 0;
	y = 0;
	time_len = 0;
	while (direct_name[time_len].n_direct_n)
		time_len++;
	time = (int *)malloc(sizeof(int) * time_len);
	while (direct_name[x].n_direct_n)
	{
		stat(direct_name[x].n_direct_n, &buf);
		time[y] = buf.st_mtimespec.tv_sec;
		y++;
		x++;
	}
	return (time);
}
