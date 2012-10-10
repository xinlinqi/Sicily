#include <iostream>
#include <stdlib.h>
using namespace std;

struct cow{
	int type;
	int prod;
}c[10000];

int compare(const void* a, const void* b){
	cow ca = *(cow*)a;
	cow cb = *(cow*)b;
	if(ca.type == cb.type){
		return cb.prod - ca.prod;
	}
	return cb.type - ca.type;
}

int main(void){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i < n; i++){
			cin >> c[i].type >> c[i].prod;
		}
		qsort(c, n, sizeof(cow), compare);
		for(int i=1; i <= 3; i++){
			for(int j=0; j < n; j++){
				if(c[j].type == i){
					cout << i << " " << c[j].prod << endl;
					break;
				}
			}
		}
	}
	return 0;
}