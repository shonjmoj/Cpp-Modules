CC= c++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=easyfind
SRC= main.cpp \

OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	$(CC) $(FLAG) main.cpp -o $(PROG)

%.o: %.cpp easyfind.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all