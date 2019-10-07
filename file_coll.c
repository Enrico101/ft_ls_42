/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_coll.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:26:24 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 12:20:00 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	file_coll(char **argv, t_info *info)
{
	int		x;
	int		y;
	int		z;
	char	*tmp;

	x = 0;
	y = 0;
	z = 1;
	while (argv[z])
	{
		tmp = ft_strdup(argv[z]);
		if (is_reg(tmp) == 0)
		{
			info[y].direct_n = ft_strdup(tmp);
			info[y].n_direct_n = ft_strdup(tmp);
			y++;
		}
		free(tmp);
		z++;
	}
}
