#include <iostream>
using namespace std;

int gcd(int x, int y){
	if(x == 0) return y;
	if(x < y) return gcd(y-x, x);
	return gcd(x-y, y);
}

int lcm(int x, int y, int mGCD){
	return (x/mGCD) * (y/mGCD) * mGCD;
}


int main(void){
	int t, x, y, temp;
	cin >> t;
	for(int i=1; i <= t; i++){
		cin >> x >> y;
		temp = gcd(x, y);
		cout << i << " " <<  lcm(x, y, temp) << " " << temp <<endl;
	}

}