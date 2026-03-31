main: main.c lib/alerta.c lib/cs50.c
	gcc -Wall -Wextra -Werror main.c lib/alerta.c lib/cs50.c -Ilib -o alerta