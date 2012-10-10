#include <iostream>
using namespace std;

int main(void){
	int t, n, arr[110], count = 0, temp, min, mink;
	cin >> t;
	bool flag = true;
	while(t--){
		cin >> n;
		count = 0;
		for(int i=0; i < n; i++){
			cin >> arr[i];
		}
		for(int i=0; i < n; i++){
			min = arr[i], mink=i;
			for(int j=i+1; j < n; j++){
				flag = true;
				if(arr[j] < min){
					min = arr[j];
					mink = j;
					count++;
				}
			}
			temp = arr[i];
			arr[i] = min;
			arr[mink] = temp;
		}
		cout << count << endl;
	}
	return 0;
}