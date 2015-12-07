prog: driver.o memory.o
	g++ driver.o memory.o -o prog
driver.o: driver.cpp 
	g++ -c driver.cpp
memory.o: memory.cpp 
	g++ -c memory.cpp
clean: 
	rm *.o prog
