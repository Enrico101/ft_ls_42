/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:45:48 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 11:49:36 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	info_sort(t_flags *flags, t_info *info)
{
	if (flags->t_flag == 1)
	{
		r_sorting(info);
		t_sorting(info);
	}
	else
		sorting(info);
	if (flags->r_flag == 1)
		r_sort(info);
}
