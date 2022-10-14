CC = clang++
FLAG = -Wall -Wextra -Werror
PROG = megaphone
SRC= megaphone.cpp
LIB	= megaphone.a
OBJ	= $(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	@ar rcs $(LIB) $(OBJ)
	@$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp
	$(CC) $(FLAG) -c $< -o $@

clean: 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(PROG) $(LIB)

re : fclean all