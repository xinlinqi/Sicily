//#include <iostream>
//#include <string.h>
//using namespace std;
//
//long routes;
//int city[110][110];
//
//void bfs(int curr, int dest, int step, int maxStep, int total){
//	cout << routes << endl;
//	if(step == maxStep){
//		if(curr == dest){
//			routes++;
//		}
//		return;
//	}
//	for(int i=0; i < total; i++){
//		if(city[curr][i] != 0){
//			bfs(city[curr][i] , dest, step + 1, maxStep, total);
//		}else{
//			break;
//		}
//	}
//}
//
//int main(void){
//	int n, m, l, q, c1, c2;
//	int pathFromCity[110];
//	memset(city, 0, sizeof(city));
//	memset(pathFromCity, 0, sizeof(pathFromCity));
//	cin >> n >> m >> l;
//	for(int i=0; i < m; i++){
//		cin >> c1 >> c2;
//		city[c1][pathFromCity[c1]] = c2;
//		pathFromCity[c1]++;
//	}
//	cin >> q;
//	for(int i=0; i < q; i++){
//		routes = 0;
//		cin >> c1 >> c2;
//		bfs(c1, c2, 0, l, n);
//		cout << routes << endl;
//	}
//	return 0;
//}