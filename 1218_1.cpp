//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//#include <math.h>
//using namespace std;
//
////return b 如果有整数解。否则返回-1
//int findB(int a, int m){
//    double temp = sqrt((double)(a * a - a + 2 * m)*4+1);
//    if(temp - (int)temp != 0){
//        return -1;
//    }
//    temp = temp - 1;
//    if((int)temp % 2 == 0){
//        return temp / 2;
//    }
//    return -1;
//}
//
//int main(void){
//	int n, m;
//	while(cin >> n >> m){
//		if (n > m) n = m;
//		for(int i=1; i <= n; i++){
//			int b = findB(i, m);
//			if(b != -1 && b <= n && b > i){
//				cout << "[" << i << "," << b << "]\n";
//			}
//		}
//	}
//	
//	return 0;
//}