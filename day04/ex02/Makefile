CC= clang++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=Animal
LIB=animal.a
SRC= main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		Brain.cpp

OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp Brain.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all
