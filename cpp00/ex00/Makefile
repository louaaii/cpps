CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

push:
	@echo "$(SEPIA)$(BOLD)Uploading data to Bunker...$(RESET)"
	@git add .
	@echo -n "$(WHITE)Enter transmission message: $(RESET)"
	@read commit_message; \
	git commit -m "$$commit_message"; \
	git push; \
	echo "$(SEPIA)Data successfully transmitted: '$$commit_message'$(RESET)"

re: fclean all

.PHONY: all clean fclean re push