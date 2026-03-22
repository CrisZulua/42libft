CC = cc
FLAGS = -Wall -Werror -Wextra
O_FLAGS = -MMD -MP

NAME = libft.a
OBJDIR = ./objects

SRC = $(wildcard *.c)
OBJ = $(SRC:%.c=$(OBJDIR)/%.o)
DEP = $(OBJ:%.o=%.d)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(FLAGS) $(O_FLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p objects

-include $(DEP)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
