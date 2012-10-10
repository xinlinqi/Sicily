#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
//The Prime Number is annoying.....
inline bool is_prime(long long n){
	if(n == 1){
		return false;
	}
	if(n == 2){
		return true;
	}
	for(long i=2; i <= sqrt((long double)n); i++){
		if (n % i == 0){
			return false;
		}
	}
	return true;
}
int main(void){
	int n;
	cin >> n;
	long long rArr[100];
	int index;
	long long result, max;
	long long lastMin = 3;
	for(int j=11; j < n; j++){
		if(!is_prime(j) || j == 61){
			continue;
		}
		int temp = 1;
		index = 0;
		memset(rArr, 0, sizeof(long long)*100);
		result = (long long)pow(2.0, j) - 1;
		max = result;
		for(long long i=3; i <= max; i++){
			if(is_prime(i) && result % i == 0){
				rArr[index++] = i;
				if(is_prime(result / i)){
					rArr[index++] = result / i;
					break;
				}else{
					result = result / i;
				}
			}else{
				max = result / i;
			}
		}
		for(int i =0; i < index; i++){
			if(i == index-1){
				cout << rArr[index-1] << " = " << (long long)pow(2.0, j) - 1 << " = ( 2 ^ " << j << " ) - 1" << endl;
			}else{
				cout << rArr[i] << " * ";
			}
		}
	}
	return 0;
}