#include <stdio.h>
#include <iostream>
using namespace std;
int main(void){
	const double pi = 3.1415927;
	float d, t;
	int r;
	int tIndex = 1;
	double s;
	while (cin >> d >> r >> t && r){
		printf("Trip #%d: %0.2f %0.2f\n", tIndex, (pi * d * r) / (12*5280), (pi * d * r*3600) / (12*5280 * t));
		tIndex++;
	}

	return 0;
}