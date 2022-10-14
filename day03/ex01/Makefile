CC= clang++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=ScavTrap
LIB=scavtrap.a
SRC= main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all
