#include <iostream>
#include <stdlib.h>
using namespace std;
int main(void){
	int n, max, temp;
	while(cin >> n && n){
		cin >> max;
		for(int i=0; i < n-1; i++){
			cin >> temp;
			if(temp > max){
				max = temp;
			}
		}
		cout << max << endl;
	}
	return 0;
}