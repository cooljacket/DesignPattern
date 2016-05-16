objects = main.o

out : $(objects)
	g++ -o out $(objects)

main.o : main.cpp Test.h
	g++ -c main.cpp Test.h

.PHONY : clean
clean :
	-rm out $(objects) *.gch