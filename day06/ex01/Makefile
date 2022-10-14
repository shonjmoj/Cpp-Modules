CC= clang++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=prog
LIB=serialization.a
SRC= main.cpp \
	serialize.cpp \


OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp serialize.hpp Data.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all