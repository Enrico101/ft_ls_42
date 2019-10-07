/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_or_not.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:21:53 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 14:15:03 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	l_or_not(const char *path, t_flags *flags)
{
	t_info	*info;

	info = (t_info *)malloc(sizeof(t_info) * 4294967295);
	open_dir(path, info);
	if (info[0].direct_n == NULL)
	{
		free(info);
		return ;
	}
	else
	{
		ft_putstr(path);
		ft_putstr(": \n");
		info_sort(flags, info);
		if (flags->l_flag == 1)
			l_func(flags, info);
		else
			funct(flags, info);
		printf("\n");
		free(info);
	}
}
