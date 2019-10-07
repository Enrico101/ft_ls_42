/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 16:37:19 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 16:38:35 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	r_sort_2(t_info *direct_name, int y)
{
	int		x;
	t_info	temp;

	x = 0;
	y--;
	while (direct_name[x].n_direct_n && x < y)
	{
		temp = direct_name[x];
		direct_name[x] = direct_name[y];
		direct_name[y] = temp;
		x++;
		y--;
	}
}
