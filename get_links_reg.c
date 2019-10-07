/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_links_reg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:33:49 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 13:32:56 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_links_reg(const char *path)
{
	struct stat links;

	stat(path, &links);
	ft_putnbr(links.st_nlink);
	ft_putchar(' ');
}
