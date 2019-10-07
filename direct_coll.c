/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direct_coll.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:29:33 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 12:14:21 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	direct_coll(char **argv, t_dir *direct_o)
{
	int		x;
	int		y;
	int		z;
	char	*temp;

	x = 1;
	y = 0;
	z = 0;
	while (argv[x])
	{
		if (is_dir(argv[x]) == 1)
		{
			if (argv[x][0] != '-')
			{
				temp = ft_strnew(ft_strlen(argv[x]));
				ft_strcpy(temp, argv[x]);
				direct_o[y].direct_o = ft_strnew(ft_strlen(temp));
				ft_strcpy(direct_o[y].direct_o, temp);
				free(temp);
				y++;
			}
		}
		x++;
	}
	return (y);
}
