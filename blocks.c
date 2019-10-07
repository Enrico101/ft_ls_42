/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blocks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 18:06:24 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 18:06:25 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	blocks(const char *path, t_info *info)
{
	struct stat	blocks;
	int			x;

	stat(path, &blocks);
	x = blocks.st_blocks;
	info->blocks = x;
}
