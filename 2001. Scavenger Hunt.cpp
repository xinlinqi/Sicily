#include <iostream>
#include <math.h>
using namespace std;

int p[1000];
int q[1000];

int initP(int pn){
	int ret = 0;
	for(int i=1; i <= pn; i++){
		if(pn % i == 0){
			p[ret++] = i;
		}
	}
	return ret;
}

int initQ(int qn){
	int ret = 0;
	for(int i=1; i <= qn; i++){
		if(qn % i == 0){
			q[ret++] = i;
		}
	}
	return ret;
}

int main(void){
	int pn, qn;
	cin >> pn >> qn;
	int lp = initP(pn);
	int lq = initQ(qn);
	for(int i=0; i < lp; i++){
		for(int j=0; j < lq; j++){
			cout << p[i] << " " << q[j] << endl;
		}
	}
	return 0;
}