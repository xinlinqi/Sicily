#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
	int weight[5], rate[5], pound, cost, toAdd, index=1;
	while(cin){
		for(int i=1; i <= 3; i++){
			cin >> weight[i] >> rate[i];
		}
		cin >> rate[4];
		weight[0] = 0;
		weight[4] = 1000;
		printf("Set number %d:\n", index);
		while(cin >> pound && pound){
			toAdd = 0;
			cost = 0;
			for(int i=1; i <= 4; i++){
				if(pound > weight[i-1] && pound <= weight[i]){
					cost = pound * rate[i];
					for(int j=i; j < 4; j++){
						if((weight[j]+1) * rate[j+1] < cost){
							toAdd = weight[j]+1 - pound;
							cost = (weight[j]+1) * rate[j+1];
						}
					}
				}
			}
			printf("Weight (%d) has best price $%d (add %d pounds)\n", pound, cost, toAdd);
		}
		cout << endl;
		index++;
	}
}