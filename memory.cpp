#include "memory"

//Constructor which sets n elements to the value 0 otherwise the max is 100 instead of n.
memory::memory(int size){
	for(int i = 0; i < size; i++){
		a.push_back(0);
	}
}

//Storing a value at a certain address
void memory::Store(int adr, int value){
	a[adr] = value;
}

//Will return the value at the address given
int memory::Retrieve(int adr){
	return a[adr];
}

//Copy values in memory to a location specified.
//sadr = Starting address
//size = size of the memory being copied
//aadr = Address being copied to
void memory::copy(int sadr, int size, int aadr){
	if( ((size + sadr) + aadr) >= a.size()){
		cout << "ERROR: Not enough space in memory to copy" << endl;
	}
	else{
		//The length of the memory being copied
		int num = size+sadr;

		//Compared to the max memory to check for overflow
		int end = num+aadr;
		int tmp = end-size;

		//Copies memory here.
		for(int i = end; i > tmp; i--){
			a[i] = a[num];
			num--;
		}
	}
}

//Dump values at a specific starting point with a range.
void memory::dump(int sadr, int range){
	if( (sadr+range) <= a.size() ){
		for(int i = sadr; i < range; i++){
			cout << a[i] << " ";
		}
	}
	else{
		cout << "ERROR: Cannot print that location";
	}
	cout << endl;
}


//Dump all values.
void memory::dump(){
	for(int i = 0; i < 20; i++){
		if( i == 25 || i == 50 || i == 75 ){
			cout << endl;
		}
		cout << a[i] << " ";
	}
	cout << endl;
}
