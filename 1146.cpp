//#include <iostream>
//#include <stdlib.h>
//#include <cstring>
//using namespace std;
//int value[110];
//int times[110];
//int dpresult[110][1100];
//
//int max(int a, int b){
//	if (a > b){
//		return a;
//	}
//	return b;
//}
//
//int dp(int k, int tTime){
//	if(dpresult[k][tTime] != -1){
//		return dpresult[k][tTime];
//	}
//	if (k == 0 || tTime == 0) return 0;
//	if (times[k] > tTime){
//		return dp(k-1, tTime);
//	}
//	int a = dp(k-1, tTime);
//	int b = value[k] + dp(k-1, tTime - times[k]);
//	dpresult[k][tTime] = max(a, b);
//	return dpresult[k][tTime];
//}
//
//int main(void){
//	int t, m, tempTime, tempVal, index=1;
//	memset(dpresult, -1, sizeof(dpresult));
//	cin >> t >> m;
//
//	for(int i=1; i <= m; i++){
//		cin >> times[i] >> value[i];
//	}
//	int j = 0, tVal = 0;
//	cout << dp(m, t) << endl;
//	return 0;
//}