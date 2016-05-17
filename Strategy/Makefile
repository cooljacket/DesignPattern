objects = main.o CashSuper.o CashContext.o CashNormal.o CashDiscount.o  CashReturn.o
CC = g++

out : $(objects)
	$(CC) -o out $(objects)

CashSuper.o : CashSuper.h
CashNormal.o : CashNormal.h
CashDiscount.o : CashDiscount.h
CashReturn.o : CashReturn.h
CashContext.o : CashContext.h
main.o : main.cpp CashContext.h

.PHONY : clean
clean : 
	-rm out $(objects)