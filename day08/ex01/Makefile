CC= c++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=ex01
LIB=span.a
SRC= Span.cpp \
	main.cpp

OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) main.cpp -o $(PROG)

%.o: %.cpp Span.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all