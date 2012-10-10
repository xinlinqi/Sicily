#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;

struct pairs{
	int a;
	int b;
}p[400];

int compare(const void*a, const void*b){
	pairs pa = *(pairs*)a;
	pairs pb = *(pairs*)b;
	return pa.a - pb.a;
}

int dArr[400];
int getDivisors(int m, int n){
	int temp = sqrt((double)m);
	int max = temp, ret = 0;
	dArr[ret++] = 1;
	dArr[ret++] = m;
	for(int i=2; i <= max+1 && i <= n; i++){
		if(m % i == 0){
			dArr[ret++] = i;
			dArr[ret++] = m / i;
		}
	}
	return ret;
}

int main(void){
	int n, m;
	cin >> n >> m;
	if(n > m) n = m;
	int len = getDivisors(m, n), index=0, temp, d, tempa, tempb;
	for(int i=0; i < len; i = i + 1){
		d = m / dArr[i];
		temp = d * 2 + dArr[i] - 1;
		if(temp % 2 == 0){
			tempa = dArr[i] - temp / 2;
			if(tempa == 0) tempa = 1;
			tempb = temp / 2;
			if(tempb <= n && tempa <= tempb && tempa > 0){
				p[index].a = tempa;
				p[index++].b = tempb;
			}
		}
		temp = 2 * dArr[i] + d - 1;
		if(temp % 2 == 0){
			tempa = 2 * dArr[i] - temp / 2;
			if(tempa == 0) tempa = 1;
			tempb = temp / 2;
			if( tempb <= n && tempa <= tempb && tempa >= 0){
				p[index].a = tempa;
				p[index++].b = tempb;
			}
		}

	}
	qsort(p, index, sizeof(pairs), compare);

	for(int i=0; i < index; i++){
		printf("[%d,%d]\n", p[i].a, p[i].b);
		while(i < index && p[i].a == p[i+1].a){
			i++;
		}
	}
	return 0;
}