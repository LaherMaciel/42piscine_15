clear
cc -Wall -Wextra -Werror -fsanitize=address *.c && ./a.out
echo
echo
echo
norminette -R CheckForbiddenSourceHeader