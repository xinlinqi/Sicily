#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct keyword{
	char key;
	int index;
	int order;
}key[15];

int compare(const void* a, const void* b){
	keyword ka = *(keyword*) a;
	keyword kb = *(keyword*) b;
	if(ka.key == kb.key){
		return ka.index - kb.index;
	}
	return ka.key - kb.key;
}

int compare2(const void* a, const void* b){
	keyword ka = *(keyword*) a;
	keyword kb = *(keyword*) b;
	return ka.index - kb.index;
}

int main(void){
	string k;
	string cStr;
	
	char cArr[20][20];
	char dArr[20][20];
	memset(cArr, 0, sizeof(cArr));
	memset(dArr, 0, sizeof(dArr));
	int row, col;
	while(cin >> k && k.compare("THEEND")){
		cin >> cStr;
		row = k.length();
		col = cStr.length() / row; 
		
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				cArr[j][i] = cStr[i * col + j];
			}
		}
		for(int i=0; i < k.length(); i++){
			key[i].index = i;
			key[i].key = k[i];
		}
		int row = cStr.length() / k.length();
		int col = k.length();
		qsort(key, k.length(), sizeof(keyword), compare);

		for(int i=0; i < col; i++){
			key[i].order = i;
		}

		qsort(key, k.length(), sizeof(keyword), compare2);

		for(int i=0; i < k.length(); i++){
			for(int r=0; r < row; r++){
				dArr[r][key[i].index] = cArr[r][key[i].order];
			}
		}
		for(int i=0; i < row; i++){
			for(int j=0; j < col; j++){
				cout << dArr[i][j];
			}
		}
		cout << endl;
	}
	return 0;
	
}