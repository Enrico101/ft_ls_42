/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direct_counter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:20:30 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 14:19:49 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	direct_counter(char **argv)
{
	int		x;
	int		y;
	char	*tmp;

	x = 1;
	y = 0;
	while (argv[x])
	{
		tmp = ft_strdup(argv[x]);
		if (is_dir(tmp) == 1)
		{
			if (tmp[0] != '-')
				y++;
		}
		x++;
		free(tmp);
	}
	return (y);
}
