NAME = unnecessaryViolence

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -g3 -std=c++98

SRCDIR = ./srcs
SRCS =	$(SRCDIR)/main.cpp \
		$(SRCDIR)/Weapon.cpp \
		$(SRCDIR)/HumanA.cpp \
		$(SRCDIR)/HumanB.cpp

OBJDIR = ./build
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

all: $(OBJDIR) $(NAME)

$(OBJDIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJDIR) $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -fr $(OBJDIR)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all clean fclean re