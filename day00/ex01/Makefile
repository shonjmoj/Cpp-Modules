CC = clang++
FLAG = -Wall -Wextra -Werror
PROG = phonebook
SRC= main.cpp \
		contact.cpp \
		phonebook.cpp
LIB	= phone.a
OBJ	= $(SRC:.cpp=.o)

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o: %.cpp PhoneBook.hpp Contact.hpp
	$(CC) $(FLAG) -c $< -o $@

clean: 
	@rm -rf $(OBJ)

fclean : clean
	rm -rf $(PROG) $(LIB)

re : fclean all