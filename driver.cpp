#include "memory"
/*
	Author: Darren Tam(ID 5037702)
	Lab Assignment #3
	Purpose: Simulating memory with a vector by being able
		 to add, move, and dumping memory using a
		 vector.
*/

int main(){
	memory m(20);
	for(int i = 0; i < 10; i++){
		m.Store(i, 1);
	}
	cout << "Memory location 16: " << m.Retrieve(15) << endl;

	//Should return errors.
	m.copy(0, 5, 25);
	m.dump(25, 30);

	m.dump (0,5);
	m.copy(0, 3, 16);
	m.dump();

}
