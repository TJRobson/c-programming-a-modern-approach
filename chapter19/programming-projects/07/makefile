queueclient: queueclient.o queueADT.o
	gcc -o queueclient.out queueclient.o  queueADT.o

queueclient.o: queueclient.c queueADT.c queueADT.h
	gcc -c queueclient.c

stackADT3.o: queueADT.c queueADT.h
	gcc -c queueADT.c
