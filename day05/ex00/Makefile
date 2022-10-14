CC= clang++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=Bureaucrat
LIB=bureaucrat.a
SRC= main.cpp \
		Bureaucrat.cpp 

OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp Bureaucrat.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all