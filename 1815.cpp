#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
void newtonSqrt(long long a){
	int i;
	long double x;
	x=a;
	for(i=1;i <= 10; i++)
		x=(x + a/x)/2;
	printf("%.2lf\n", x);
}
void calDistance(double x1, double y1, double x2, double y2){
	//newtonSqrt((y1-y2) * (y1-y2) + (x1-x2) * (x1-x2));
	printf("%.2f\n", sqrt((y1-y2) * (y1-y2) + (x1-x2) * (x1-x2)));
}



int main(void){
	int n;
	double x1, y1, x2, y2;
	cin >> n;
	while(n--){
		cin >> x1 >> y1 >> x2 >> y2;
		calDistance(x1, y1, x2, y2);
	}
	return 0;
}