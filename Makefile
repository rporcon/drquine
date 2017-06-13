COLLEEN_NAME = Colleen

GRACE_KID_NAME = Grace_kid

SULLY_NAME = Sully

SRCS_DIR = ./srcs

COLLEEN_SRC =  $(SRCS_DIR)/Colleen.c

GRACE_KID_SRC = $(SRCS_DIR)/Grace_kid.c

SULLY_SRC =  $(SRCS_DIR)/Sully.c

CC = @gcc

CFLAGS = -Wall -Werror -Wextra \

COLLEEN_OBJ = $(COLLEEN_SRC:%.c=%.o)

GRACE_KID_OBJ = $(GRACE_KID_SRC:%.c=%.o)

SULLY_OBJ = $(SULLY_SRC:%.c=%.o)

all: $(COLLEEN_NAME) $(GRACE_KID_NAME) $(SULLY_NAME)

$(COLLEEN_NAME): $(COLLEEN_OBJ)
	$(CC) -o $(COLLEEN_NAME) $(COLLEEN_OBJ)

$(GRACE_KID_NAME): $(GRACE_KID_OBJ)
	$(CC) -o $(GRACE_KID_NAME) $(GRACE_KID_OBJ)

$(SULLY_NAME): $(SULLY_OBJ)
	$(CC) -o $(SULLY_NAME) $(SULLY_OBJ)

clean:
	@rm -f $(COLLEEN_OBJ) $(GRACE_KID_OBJ) $(SULLY_OBJ)

fclean: clean
	@rm -f $(COLLEEN_NAME) $(GRACE_KID_NAME) $(SULLY_NAME) 

re: fclean all

.PHONY: clean fclean re
