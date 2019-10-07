/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bytes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:30:51 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 12:35:31 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_bytes(const char *path, t_info *bytes)
{
	struct stat buf;

	stat(path, &buf);
	bytes->bytes = buf.st_size;
}
