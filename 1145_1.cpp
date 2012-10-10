#include <iostream>
#include <stdlib.h>
using namespace std;

struct area{
	int start;
	int end;
}a[110];

int compare(const void*a, const void* b){
	area a1 = *(area*) a;
	area a2 = *(area*) b;
	return a1.start - a2.start;
}

int main(void){
	int l, m;
	cin >> l >> m;
	int cSum = 0;
	for(int i=0; i < m; i++){
		cin >> a[i].start >> a[i].end;
	}
	qsort(a, m, sizeof(a[0]), compare);

	for(int i=0; i < m - 1; i++){
		if (a[i].end >= a[i].start){
			cSum += a[i].end - a[i].start + 1;
		}

		if (a[i].end > a[i+1].start){
			a[i+1].start = a[i].end + 1;
			if (a[i].end > a[i+1].end){
				a[i+1].end = a[i].end;
			}
		}
	}
	if (a[m-1].end >= a[m-1].start){
		cSum += a[m-1].end - a[m-1].start + 1;
	}

	cout << l + 1 - cSum << endl;

	return 0;
}