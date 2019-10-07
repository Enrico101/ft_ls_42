/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bytes_reg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:28:15 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 13:33:37 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_bytes_reg(const char *path)
{
	int			x;
	struct stat	buf;

	stat(path, &buf);
	x = buf.st_size;
	ft_putnbr(x);
	ft_putchar(' ');
}
