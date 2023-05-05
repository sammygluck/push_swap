# Variables

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
SRCDIR = src
OBJDIR = obj
BINDIR = bin
TARGET = push_swap
FT_PRINTF_DIR = ft_printf

# Source Files
SRC = $(wildcard $(SRCDIR)/*.c)
HDRS = push_swap.h
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Targets
all: $(BINDIR)/$(TARGET)

$(BINDIR)/$(TARGET): $(OBJ) $(FT_PRINTF_DIR)/libftprintf.a
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) -o $@ $^ -L$(FT_PRINTF_DIR) -lftprintf

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(FT_PRINTF_DIR)/libftprintf.a:
	$(MAKE) -C $(FT_PRINTF_DIR)

clean: ft_printf_clean
	rm -f $(OBJ) 

ft_printf_clean:
	$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean ft_printf_fclean
	rm -f $(BINDIR)/$(TARGET)
	-rmdir $(OBJDIR) $(BINDIR)

ft_printf_fclean:
	$(MAKE) -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean re fclean ft_printf_clean ft_printf_fclean
