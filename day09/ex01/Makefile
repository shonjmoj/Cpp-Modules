CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

SRC = RPN.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp RPN.hpp main.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) main.cpp $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
