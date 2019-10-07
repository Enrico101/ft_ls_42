CC = gcc

FLAG = -Wall -Wextra -Werror

NAME = ft_ls.a

LIB_PATH = ./libft

LIB_A = ./libft/libft.a

SOURCE = args.c dir_or_not.c direct_check.c direct_coll.c f_mode.c find_time.c flag_checker.c ft_ls.c func.c get_bytes.c get_dir_size.c get_group.c get_links.c get_m_time.c get_owner.c get_size.c group_perm.c info_sort.c is_dir.c l.c l_func.c l_or_not.c no_args.c open_dir.c other_perm.c owner_perm.c r.c r_sorting.c recursion.c set_flag.c sorting.c swap.c t_sorting.c file_coll.c get_space.c l_for_reg.c l_reg.c f_mode_reg.c get_bytes_reg.c get_group_reg.c get_links_reg.c get_m_time_reg.c get_owner_reg.c is_reg.c direct_counter.c info_sort_2.c sorting_2.c r_sorting_2.c t_sorting_2.c check.c error_mess_01.c blocks.c display_01.c dot.c error_mess.c r_2.c

LIB_COM = make -C $(LIB_PATH)

all: $(NAME)

OBJ = $(SOURCE:.c=.o)

norm:
	norminette -R CheckForbiddenSourceHeader
	
$(NAME):
	$(LIB_COM)
	gcc $(FLAG) -c $(SOURCE)
	ar rc $(NAME) $(OBJ) ft_ls.h
	ranlib $(NAME)

run:
	$(CC) $(FLAG) $(NAME) $(LIB_A) -o ft_ls

test: all
	gcc $(flag) ft_ls.c

clean:
	$(MAKE) clean -C $(LIB_PATH)
	rm -rf $(OBJ)

fclean: clean
	$(MAKE) fclean -C $(LIB_PATH)
	rm -rf $(NAME)

re: fclean all
