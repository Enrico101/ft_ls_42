/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:58:42 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 16:28:58 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	r_sort(t_info *direct_name)
{
	int		y;
	int		x;
	t_info	temp;

	y = 0;
	x = 0;
	while (direct_name[y].n_direct_n)
		y++;
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
