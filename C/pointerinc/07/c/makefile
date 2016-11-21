CC = gcc
CFLAGES =	-I. 
OBJS = add_int.o add_float.o sub_int.o sub_float.o main.o

TARGET = casu
RM = rm -rf

$(TARGET):$(OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(CFLAGES)
$(OBJS):%.o:%.c
	$(CC) -c $(CFLAGES) $< -o $@

.PHONEY: clean
clean:
	-$(RM) $(TARGET) $(OBJS)
