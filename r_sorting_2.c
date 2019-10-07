/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_sorting_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:59:26 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 14:34:27 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	r_sorting_2(t_info *direct_name, int x)
{
	int z;
	int a;

	a = 0;
	x--;
	while (x)
	{
		z = 0;
		while (direct_name[z + 1].links != 1)
		{
			a = ft_strcmp(direct_name[z].direct_n, direct_name[z + 1].direct_n);
			if (a < 0)
				swap(direct_name, z);
			z++;
		}
		x--;
	}
}
