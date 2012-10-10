#include <iostream>
using namespace std;

class NumCal{
	int *p;
	int size;
public:
	int sum();
	NumCal();
	NumCal(int* new_p, int new_size);
};

int NumCal::sum(){
	int retSum = 0;
	for(int i=0; i < size; i++){
		retSum += p[i];
	}
	return retSum;
}

NumCal::NumCal(int *new_p, int new_size){
	p = new_p;
	size = new_size;
}

NumCal::NumCal(){
	size = 0;
	p = new int(size);
}

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	NumCal numCal(arr, 5);
	cout << numCal.sum() << endl;
}