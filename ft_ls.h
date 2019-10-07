/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:49:54 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 12:20:17 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H
# include "libft/libft.h"
# include "ft_ls.h"
# include <stdio.h>
# include <sys/types.h>
# include <pwd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <time.h>
# include <dirent.h>
# include <string.h>
# include <grp.h>

typedef struct	s_flags
{
	int			l_flag;
	int			re_flag;
	int			a_flag;
	int			r_flag;
	int			t_flag;
}				t_flags;

typedef struct	s_info
{
	int			blocks;
	char		*perm;
	int			links;
	char		*owner;
	char		*group;
	int			bytes;
	char		*m_time;
	char		*direct_n;
	char		*n_direct_n;
}				t_info;

typedef struct	s_file
{
	char		*direct_n;
	char		*n_direct_n;
}				t_file;

typedef struct	s_dir
{
	char		*direct_o;
	char		*direct_c;
}				t_dir;

void			blocks(const char *path, t_info *info);
void			r_sort_2(t_info *direct_name, int y);
void			display_01(t_info *info, int z);
void			error_mess(char *tmp);
int				dot(const char *str);
int				check(char c, t_flags *flags);
void			error_mess_01(char c);
void			r_sorting_2(t_info *direct_name, int x);
void			t_sorting_2(t_info *direct_name, int x);
void			sorting_2(t_info *d_name, int a);
void			info_sort_2(t_flags *flags, t_info *info, int a);
int				direct_counter(char **argv);
void			display_files(char **argv);
int				get_space(char **argv, int *z);
void			file_coll(char **argv, t_info *info);
void			get_m_time_reg(const char *path);
void			get_group_reg(const char *path);
void			get_bytes_reg(const char *path);
void			get_owner_reg(const char *path);
void			get_links_reg(const char *path);
void			f_mode_reg(const char *path);
void			l_reg(const char *path);
void			l_for_reg(const char *path, t_flags *f, t_info *info, int b);
int				is_reg(const char *path);
int				*find_time(t_info *direct_name);
void			swap(t_info *direct_name, int z);
void			args(char *argv[], t_flags *flags, t_dir *dir_c);
void			no_args(t_flags *flags);
void			l_or_not(const char *path, t_flags *flags);
void			set_flags(t_flags *ex_flag);
int				other_perm(const char *path, char *temp, int x);
int				group_perm(const char *path, char *temp, int x);
int				owner_perm(const char *path, char *temp, int x);
int				dir_or_not(const char *path, char *temp);
void			r_sort(t_info *direct_name);
int				recursion(const char *path, t_dir *d, t_flags *flag, int y);
int				get_dir_size(char *path, int x);
void			direct_check(t_dir *direct, int directs_coll);
void			set_null(t_dir *dir_c);
void			funct(t_flags *flags, t_info *info);
void			open_dir(const char *path, t_info *info);
void			info_sort(t_flags *flags, t_info *info);
void			l_func(t_flags *flags, t_info *info);
int				is_dir(char *path);
int				direct_coll(char **argv, t_dir *direct_o);
void			display(t_info *info, t_flags *flags, char **argv);
ssize_t			get_size(const char *path);
void			t_sorting(t_info *direct_name);
void			r_sorting(t_info *direct_name);
void			sorting(t_info *d_name);
void			dir_content(const char *filename, t_info *direct_name);
char			flag_checker(char **flags, t_flags *ex_flag, int *a, int z);
void			f_mode(const char *path, t_info *perms);
void			get_links(const char *path, t_info *link);
void			get_owner(const char *path, t_info *owner);
void			get_group(const char *path, t_info *group);
void			get_bytes(const char *path, t_info *bytes);
void			get_m_time(const char *path, t_info *m_time);
void			get_dir_name(const char *filename);
void			l(const char *path, t_info *info);

#endif
