#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void* a, const void* b){
	int i = *(int*) a;
	int j = *(int*) b;
	return i - j;
}

int main(void){
	int t, n;
	int arr[1010];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i < n; i++){
			cin >> arr[i];
		}
		qsort(arr, n, sizeof(int), compare);
		for(int i=0; i < n; i++){
			cout << arr[i] << endl;
		}
	}
	return 0;
}