/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_sorting.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 15:24:09 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 14:21:39 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	t_sorting(t_info *direct_name)
{
	int d;
	int e;
	int *time;

	e = 0;
	time = find_time(direct_name);
	while (direct_name[e].n_direct_n && direct_name[e].n_direct_n != NULL)
		e++;
	e--;
	while (e)
	{
		d = 0;
		while (d < e)
		{
			if (time[d] < time[d + 1])
			{
				ft_swap(&time[d], &time[d + 1]);
				swap(direct_name, d);
			}
			d++;
		}
		e--;
	}
	free(time);
}
