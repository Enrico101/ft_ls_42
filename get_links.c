/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_links.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:41:16 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 17:01:59 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_links(const char *path, t_info *link)
{
	struct stat links;

	stat(path, &links);
	link->links = links.st_nlink;
}
