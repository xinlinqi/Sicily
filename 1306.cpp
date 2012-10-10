#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void*a, const void*b){
	int ia = *(int*) a;
	int ib = *(int*) b;
	return ia - ib;
}

int main(void){
	int n, m;
	cin >> n >> m;
	int arr[100010];
	while(!(n ==0 && m == 0)){
		for(int i=0; i < n; i++){
			cin >> arr[i];
		}
		qsort(arr, n, sizeof(int), compare);
		for(int i=0; i < n; i = i+m){
			cout << arr[i] ;
			if (i + m < n){
				cout << " ";
			}
		}
		cout << endl;
		cin >> n >> m;
	}
	
}