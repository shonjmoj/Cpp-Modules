CC= clang++
FLAGS=-Wall -Wextra -Werror -std=c++98
PROG=main 

all : $(PROG)

$(PROG) : main.cpp
	$(CC) $(FLAGS) main.cpp -o $(PROG)

clean :
	rm -f $(PROG)

re : fclean all

fclean: clean
	rm -rf *.replace