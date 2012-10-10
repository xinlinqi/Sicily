#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	int n, m, arr[200][200], a, b;
	while(cin >> n && n){
		memset(arr, 0, sizeof(arr));
		cin >> m;
		for(int i=0; i < m; i++){
			cin >> a >> b;
			arr[a][b] = 1;
		}
		for(int i=0; i < n; i++){
			for(int j=0; j < n; j++){
				if(arr[i][j] == 1){
					for(int k=0; k < n; k++){
						if(arr[j][k] == 1){
							arr[i][k] = 1;
						}
					}
				}
			}
		}
		if(arr[0][n-1] == 1){
			cout << "I can post the letter" << endl;
		}else{
			cout << "I can't post the letter" << endl;
		}
	}
	return 0;
}