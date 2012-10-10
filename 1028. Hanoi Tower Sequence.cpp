#include <iostream>
#include <string>
#include <cstring>
using namespace std;


//void Hanoi(int n){
//	if(n == 1){
//		cout << n << " ";
//	}else{
//		Hanoi(n-1);
//		cout << n << " ";
//		Hanoi(n-1);
//	}
//}

int getMod(string str, int toBeMod){
	int temp = 0;
	for(int i=0; i < str.length(); i++){
		temp *= 10;
		temp += str[i];
		temp %= toBeMod;
	}
	return temp;
}

string bitNumDivide(string p, int toDivide){
	int temp = 0, tempa;
	char res[110];
	memset(res, 0, sizeof(res));
	res[0] = '0';
	for(int i=0, j=0; i < p.length(); i++){
		temp *= 10;
		temp += p[i] - '0';
		if(temp < toDivide){
			if(i != 0){
				res[j++] = '0';
			}
		}else{
			res[j++] = temp / toDivide + '0';
			temp %= toDivide; 
		}
	}
	return res;
}

//int getBits(string p){
//	int index = 0;
//	string temp = p;
//	while(temp.compare("0") != 0){
//		temp = bitNumDivide(temp, 2);
//		if(temp.compare("0") != 0){
//			index++;
//		}
//	}
//	return index;
//}

int main(void){
	int t, count;
	string p;
/*
	while(cin >> t){
		Hanoi(t);
	}
*/
	cin >> t;
	for(count=1; count <= t; count++){
		int index = 0;
		cin >> p;
		cout << "Case " << count << ": ";
		while(getMod(p, 2) == 0){
			index++;
			p = bitNumDivide(p, 2);
		}
		cout << index+1 << endl;
		if(count + 1 <= t){
			cout << endl;
		}
	}
	return 0;
}