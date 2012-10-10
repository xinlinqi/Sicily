#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int arr[30000];

int main(void){
	int n, k, j, i = 0, max = 0, minn, maxn;
	cin >> n >> k;
	for(int i=0; i < n; i++){
		cin >> arr[i];
	}
	for(int i=0; i < n; i++){
		minn = arr[i];
		maxn = arr[i];
		j = i;
		for(j = i+1; j < n; j++){
			maxn = (maxn < arr[j])? arr[j]:maxn;
			minn = (minn > arr[j])? arr[j]:minn;
			if(abs(maxn - minn) > k){
				break;
			}
			if ((j - i) > max){
				max = j - i;
			}
		}
	}
	cout << max + 1 << endl;
	return 0;
}