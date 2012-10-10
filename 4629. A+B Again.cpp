#include <iostream>
using namespace std;

long gcd(long a, long b){
	if(b == 0){
		return a;
	}
	return gcd(b, a % b);
}

long lcm(long a, long b){
	return (a * b)/gcd(a, b);
}

int main(void){
	int t, a, b, c, d;
	long child, parent;
	cin >> t;
	while(t--){
		cin >> a >> b >> c >> d;
		parent = lcm(b, d);
		child = a * (parent / b) + c * (parent / d);
		long g = gcd(parent, child);
		parent /= g;
		child /= g;
		if(parent == 1){
			cout << child << endl;
		}else{
			cout << child << "/" << parent << endl;
		}
	}
	return 0;
}