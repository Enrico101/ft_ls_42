/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:57:23 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/06 09:49:31 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	sorting(t_info *d_name)
{
	int y;
	int z;
	int a;

	a = 0;
	y = 0;
	while (d_name[y].n_direct_n && d_name[y].n_direct_n != NULL)
		y++;
	y--;
	while (y)
	{
		z = 0;
		while (z < y)
		{
			a = ft_strcmp(d_name[z].n_direct_n, d_name[z + 1].n_direct_n);
			if (a >= 1)
				swap(d_name, z);
			z++;
		}
		y--;
	}
}
