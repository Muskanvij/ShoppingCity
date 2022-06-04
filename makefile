#
# This is the makefile for CPP 2019 Semester 2 Assignment B
#
# If you use the supplied files then all will need to do is
# type
#
# make all
#
# provided there are no errors, then to run the program type
#
# city
#
#
CC= g++
LIBS = -g -std=c++17


city: city.o building.o address.o product1.o product2.o \
      product3.o residential.o commercial.o
	$(CC) $(LIBS) -o city city.o building.o address.o \
	                      product1.o product2.o product3.o residential.o \
								 commercial.o

city.o: city.cpp
	$(CC) $(LIBS) -c city.cpp

building.o: building.cpp
	$(CC) $(LIBS) -c building.cpp

address.o: address.cpp
	$(CC) $(LIBS) -c address.cpp

product1.o: product1.cpp
	$(CC) $(LIBS) -c product1.cpp

product2.o: product2.cpp
	$(CC) $(LIBS) -c product2.cpp

product3.o: product3.cpp
	$(CC) $(LIBS) -c product3.cpp

residential.o: residential.cpp
	$(CC) $(LIBS) -c residential.cpp

commercial.o : commercial.cpp
	$(CC) $(LIBS) -c commercial.cpp

all: city clean

clean:
	rm *.o
