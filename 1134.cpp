#include <iostream>
#include <stdlib.h>
using namespace std;

struct child{
	int hasn;
	int needn;
}c[10010];

int compare(const void* a, const void* b){
	child ca = *(child*) a;
	child cb = *(child*) b;
	return ca.needn - cb.needn;
}

int main(void){
	int n, s;
	bool flag;
	while(cin >> n && n){
		cin >> s;
		flag = true;
		for(int i=0; i < n; i++){
			cin >> c[i].hasn >> c[i].needn;
		}
		qsort(c, n, sizeof(c[0]), compare);

		for(int i=0; i < n; i++){
			if (s < c[i].needn){
				flag = false;
				break;
			}
			s += c[i].hasn;
		}
		if (flag){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}