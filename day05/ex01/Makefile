CC= clang++
FLAG=-Wall -Wextra -Werror -std=c++98
PROG=Form
LIB=form.a
SRC= main.cpp \
		Bureaucrat.cpp \
		Form.cpp

OBJ=$(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp Bureaucrat.hpp Form.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean: clean
	rm -rf $(LIB) $(PROG)

re : fclean all