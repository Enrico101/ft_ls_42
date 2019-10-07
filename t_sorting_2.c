/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_sorting_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:24:09 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 12:20:32 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	t_sorting_2(t_info *direct_name, int x)
{
	int d;
	int *time;

	time = find_time(direct_name);
	x--;
	while (x)
	{
		d = 0;
		while (direct_name[d + 1].links != 1)
		{
			if (time[d] < time[d + 1])
			{
				ft_swap(&time[d], &time[d + 1]);
				swap(direct_name, d);
			}
			d++;
		}
		x--;
	}
	free(time);
}
