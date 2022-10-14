CC= clang++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=ClapTrap
LIB=claptrap.a
SRC= main.cpp \
		ClapTrap.cpp

OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp ClapTrap.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all
