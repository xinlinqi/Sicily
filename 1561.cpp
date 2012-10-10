#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
	if(n <= 2){
		return n == 2;
	}
	for(int i=2; i <= sqrt(double(n)); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(void){
	int n, i;
	cin >> n;
	if(n == 1){
		cout << 2 << endl;
		return 0;
	}
	for(i=3; n > 1;i=i+2){
		if(isPrime(i)){
			n--;
		}
	}
	cout << i - 2 << endl;
	return 0;
}