CC=clang++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=zombie
LIB=zombie.a
SRC= main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

OBJ=$(SRC:.cpp=.o)

all: $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp Zombie.hpp
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(PROG) $(LIB)

re: fclean all