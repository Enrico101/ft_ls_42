/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:57:23 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 15:54:07 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	sorting_2(t_info *d_name, int x)
{
	int y;
	int z;
	int a;

	a = 0;
	y = 0;
	x--;
	while (x)
	{
		z = 0;
		while (d_name[z + 1].links != 1)
		{
			a = ft_strcmp(d_name[z].n_direct_n, d_name[z + 1].n_direct_n);
			if (a >= 1)
				swap(d_name, z);
			z++;
		}
		x--;
	}
}
