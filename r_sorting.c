/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_sorting.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:59:26 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 11:49:42 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	r_sorting(t_info *direct_name)
{
	int y;
	int z;
	int a;

	a = 0;
	y = 0;
	while (direct_name[y].direct_n && direct_name[y].direct_n != NULL)
		y++;
	y--;
	while (y)
	{
		z = 0;
		while (z < y)
		{
			a = ft_strcmp(direct_name[z].direct_n, direct_name[z + 1].direct_n);
			if (a < 0)
				swap(direct_name, z);
			z++;
		}
		y--;
	}
}
