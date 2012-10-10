#include <iostream>
#include <math.h>
using namespace std;
int main(void){
	int y;
	while(cin >> y && y){
		double bits = pow(2.0, (y-1960) / 10 + 2) * log(2.0);
		double sum = 0;
		int n = 2;
		while(sum <= bits){
			sum += log((double)n);
			n++;
		}
		cout << n-2 << endl;
	}
	return 0;
}