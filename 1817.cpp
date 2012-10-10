#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(void){
	int t, n, m;
	int score[110][110];
	int temp[110];
	int sum, sum1, max, min;
	scanf("%d", &t);
	while(t--){
		cin >> n >> m;
		for(int i=0; i < n; i++){
			for(int j=0; j < m; j++){
				scanf("%d", &score[i][j]);
			}
		}

		for(int j=0; j < m; j++){
			sum = 0;
			sum1 = 0;
			max = score[0][j];
			min = score[0][j];
			for(int i=0; i < n; i++){
				sum += score[i][j];
				if(max < score[i][j]){
					max = score[i][j];
				}
				if(min > score[i][j]){
					min = score[i][j];
				}
			}
			sum = sum - max - min;
			printf("%.2f\n", sum / (double)(n-2));
		}
		
	}
	return 0;
}