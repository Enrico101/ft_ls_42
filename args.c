/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:37:08 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 14:38:49 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	args(char *argv[], t_flags *flags, t_dir *dir_c)
{
	int x;
	int y;
	int z;
	int n_o_d;

	x = 0;
	y = 0;
	z = -1;
	n_o_d = 0;
	n_o_d = direct_coll(argv, dir_c);
	direct_check(dir_c, n_o_d);
	if (n_o_d == 0)
		n_o_d = 1;
	y = n_o_d;
	if (flags->re_flag == 1)
		while (x < y)
		{
			n_o_d = recursion(dir_c[x].direct_o, dir_c, flags, n_o_d);
			x++;
		}
	while (++z < n_o_d)
	{
		l_or_not(dir_c[z].direct_o, flags);
		free(dir_c[z].direct_o);
	}
}
