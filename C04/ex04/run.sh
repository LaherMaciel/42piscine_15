clear
cc -g -Wall -Wextra -Werror -fsanitize=address *.c && ./a.out
echo
echo
echo
norminette