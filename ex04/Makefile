NAME = ex04

CXX = c++ -g

SRCS = main.cpp 

OBJS = $(addprefix ./, $(SRCS:.cpp=.o))

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

cppformat:
	clang-format -i $(SRCS) 

cpplint:
	clang-tidy --config-file=.clang-tidy --warnings-as-errors=* --quiet $(SRCS) -- -Wall -Wextra -Werror -std=c++98

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re cppformat cpplint
