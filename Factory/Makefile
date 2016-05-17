objects = main.o
CC = g++
HEADERS = OperationFactory.h OperationAdd.h OperationSub.h OperationMul.h OperationDiv.h

out : $(objects)
	$(CC) -o out $(objects)

main.o : main.cpp $(HEADERS)
	$(CC) -c main.cpp

.PHONY : clean
clean : 
	-rm out $(objects)