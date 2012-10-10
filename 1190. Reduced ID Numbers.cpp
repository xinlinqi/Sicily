#include <iostream>
#include <cstring>
#include <set>
using namespace std;

int main(void){
	set<int> temp;
	int n, g, arr[310], flag[1000000];
	bool ok;
	cin >> n;
	while(n--){
		cin >> g;
		for(int i=0; i < g; i++){
			cin >> arr[i];
		}
		for(int j=g; ;j++){
			memset(flag, 0, sizeof(int) * j);
			ok = true;
			for(int i=0; i < g; i++){
				if(flag[arr[i] % j]){
					ok = false;
					break;
				}else{
					flag[arr[i] % j] = 1;
				}
			}
			if(ok){
				cout << j << endl;
				break;
			}
		}
	}
	return 0;
}