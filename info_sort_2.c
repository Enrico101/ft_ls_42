/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_sort_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:45:48 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 16:23:06 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	info_sort_2(t_flags *flags, t_info *info, int a)
{
	if (flags->t_flag == 1)
	{
		r_sorting_2(info, a);
		t_sorting_2(info, a);
	}
	else
		sorting_2(info, a);
	if (flags->r_flag == 1)
		r_sort_2(info, a);
}
