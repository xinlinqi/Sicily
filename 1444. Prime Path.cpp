//#include <iostream>
//using namespace std;
//
//bool is_prime(int n){
//	if(n <= 2) return n == 2;
//	for(int i=2; i <= sqrt((double)n) + 1; i++){
//		if(n % i == 0){
//			return false;
//		}
//	}
//	return true;
//}
//
//int main(void){
//	for(int i=1001; i <= 9999; i++){
//		if(is_prime(i)){
//			cout << i << endl;
//		}
//	}
//}