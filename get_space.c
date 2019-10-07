/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_space.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:37:13 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 15:44:01 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	get_space(char **argv, int *z)
{
	int		x;
	int		y;
	char	*tmp;

	x = 1;
	y = 0;
	while (argv[x])
	{
		tmp = ft_strdup(argv[x]);
		if (is_reg(tmp) == 0)
			y++;
		if (is_reg(tmp) == 2)
			if (tmp[0] != '-')
			{
				error_mess(tmp);
				*z = 1;
			}
		free(tmp);
		x++;
	}
	if (*z != 1)
		z = 0;
	return (y);
}
