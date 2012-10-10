#include <iostream>
using namespace std;
int main(void){
	int a, b, c, temp = 1;
	cin >> a >> b >> c;
	for(int i=0; i < b; i++){
		temp *= a % c;
		temp %= c;
	}
	cout << temp << endl;
	return 0;
}