CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
INC_DIR = ./inc
INC_FLAGS = -I$(INC_DIR)
TARGET = animals
SRCS = 	main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		Brain.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CPP) $(CPP_FLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	@$(CPP)  $(INC_FLAGS) $(CPP_FLAGS) -c $< -o $@
clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(TARGET)

re: fclean all

checkleaks: all
	valgrind --leak-check=yes ./$(TARGET)

.PHONY: all show clean fclean re
