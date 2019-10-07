/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_func.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:48:48 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 18:01:17 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	total_bytes(t_info *info)
{
	int y;
	int x;
	int z;

	y = 0;
	x = 0;
	z = 0;
	while (info[x].n_direct_n)
	{
		l(info[x].n_direct_n, &info[x]);
		z += info[x].blocks;
		free(info[x].perm);
		free(info[x].m_time);
		x++;
	}
	ft_putstr("total: ");
	ft_putnbr(z);
	ft_putchar('\n');
	while (info[y].n_direct_n)
	{
		info[y].blocks = 0;
		y++;
	}
}

void	l_func(t_flags *flags, t_info *info)
{
	int z;

	z = -1;
	total_bytes(info);
	if (flags->a_flag == 1)
		while (info[++z].n_direct_n)
		{
			l(info[z].n_direct_n, &info[z]);
			display_01(info, z);
			free(info[z].perm);
			free(info[z].m_time);
			free(info[z].n_direct_n);
			free(info[z].direct_n);
		}
	else
		while (info[++z].n_direct_n)
		{
			l(info[z].n_direct_n, &info[z]);
			if (*info[z].direct_n != '.')
				display_01(info, z);
			free(info[z].perm);
			free(info[z].m_time);
			free(info[z].n_direct_n);
			free(info[z].direct_n);
		}
}
