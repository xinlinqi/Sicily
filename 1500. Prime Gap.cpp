#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n){
	if(n <= 2) return n == 2;
	for(int i=2; i <= sqrt((double)n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int findLargerPrime(int n){
	if (isPrime(n)){
		return n;
	}
	for(int i=n+1; ; i++){
		if(isPrime(i)){
			return i;
		}
	}
	return n;
}

int findSmallerPrime(int n){
	if (isPrime(n)){
		return n;
	}
	for(int i=n-1; i >= 2; i--){
		if(isPrime(i)){
			return i;
		}
	}
	return n;
}

int main(void){
	int k, l, s;
	while(cin >> k && k){
		l = findLargerPrime(k);
		s = findSmallerPrime(k);
		cout << l - s << endl;
	}
}