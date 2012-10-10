#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(void){
	int n, index=0;
	while(cin >> n){
		int *arr = new int[n+1];
		if(index > 0){
			printf("\n");
		}
		for(int i=0; i < n; i++){
			scanf("%d", &arr[i]);
		}

		sort(arr, arr+n);
		int cnt = 1;
		arr[n] = -1;
		for(int i=0; i < n; i++){
			if(arr[i] == arr[i+1]){
				cnt++;
			}else{
				printf("%d %d\n", arr[i], cnt);
				cnt = 1;
			}
		}
		delete []arr;
		index++;
	}
	return 0;
}