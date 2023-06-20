CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = btc

SRC = BitcoinExchange.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp BitcoinExchange.hpp main.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) main.cpp $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
