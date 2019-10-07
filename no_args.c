/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_args.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:24:36 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 14:49:08 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	no_args(t_flags *flags)
{
	t_info *info;

	info = (t_info *)malloc(sizeof(t_info) * 4294967295);
	open_dir(".", info);
	info_sort(flags, info);
	funct(flags, info);
	free(info);
}
