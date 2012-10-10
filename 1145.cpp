#include <iostream>
#include <cstring>
using namespace std;
int main(void){
	int l, m;
	cin >> l >> m;
	int arr[10010];
	memset(arr, 0, 10010*sizeof(int));
	int start, end;
	for(int i=0; i < m; i++){
		cin >> start >> end;
		for(int j=start; j <= end; j++){
			arr[j] = 1;
		}
	}
	int sum = 0;
	for(int i=0; i <= l; i++){
		sum += arr[i];
	}
	cout << l + 1-sum << endl;
	return 0;
}