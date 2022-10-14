CC= clang++
FLAGS=-Wall -Wextra -Werror -std=c++98
PROG=main 

all : $(PROG)

$(PROG) : main.cpp
	$(CC) $(FLAGS) main.cpp -o $(PROG)

fclean :
	rm -f $(PROG)

re : clean all