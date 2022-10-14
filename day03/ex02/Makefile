CC= clang++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=FragTrap
LIB=fragtrap.a
SRC= main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all
