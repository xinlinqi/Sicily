#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int arr[1010];
int d[1010][1010];

int maxLose(int arr[], int start, int end){
	
	int max1, max2;
	if(d[start][end] != -1) return d[start][end];
	if (start > end) return 0;
	if (end - start == 1){
		d[start][end] = abs(arr[start]-arr[end]);
		return d[start][end];
	}
	//1. 玩家1选择左边的数，玩家2贪心取数。
	if(arr[start+1] >= arr[end]){
		max1 = maxLose(arr, start+2, end) - arr[start+1] + arr[start];
	}else{
		max1 = maxLose(arr, start+1, end-1) - arr[end] + arr[start];
	}
	//1. 玩家1选择右边的数，玩家2贪心取数。
	if(arr[start] >= arr[end-1]){
		max2 = maxLose(arr, start+1, end-1) - arr[start] + arr[end];
	}else{
		max2 = maxLose(arr, start, end-2) - arr[end-1] + arr[end];
	}
	d[start][end] = (max1 > max2)?max1:max2;
	return d[start][end];
}

int main(void){
	int n, gIndex = 1;
	while(cin >> n && n){
		for(int i = 0; i < 1010; i++){
			memset(d[i], -1, sizeof(d[0]));
		}
		for(int i=0; i < n; i++){
			cin >> arr[i];
		}
		printf( "In game %d, the greedy strategy might lose by as many as %d points.\n", gIndex, maxLose(arr, 0, n-1));
		gIndex++;
	}

	return 0;

}