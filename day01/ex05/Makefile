CC=clang++
FLAG=-Wall -Wextra -Werror -std=c++98
SRC=main.cpp \
		Harl.cpp

PROG=Harl
LIB=harl.a
OBJ=${SRC:%.cpp=%.o}

all : $(PROG)

$(PROG): $(OBJ)
	ar rcs $(LIB) $(OBJ)
	$(CC) $(FLAG) $(LIB) -o $(PROG)

%.o : %.cpp Harl.hpp
	$(CC) $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIB) $(PROG)

re : clean all
