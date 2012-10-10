//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int moves[8][2] = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
//int position[31];
//int visit[31];
//bool flag = false;
//
//bool isValidPos(int rIndex, int cIndex){
//	return visit[(rIndex - 1) * 6 + cIndex] == 0 && rIndex >= 1 && rIndex <= 5 && cIndex >= 1 && cIndex <= 6;
//}
//
//void dfs(int pos, int step){
//	if(step == 29){
//		for(int i=0; i < 29; i++){
//			cout << position[i] << " ";
//		}
//		cout << position[29] << endl;
//		flag = true;
//		return;
//	}
//	int cRIndex = (pos - 1) / 6 + 1, cCIndex = (pos - 1) % 6 + 1;
//	int nRIndex, nCIndex;
//	for(int i=0; i < 8; i++){
//		nRIndex = cRIndex + moves[i][0];
//		nCIndex = cCIndex + moves[i][1];
//		if(isValidPos(nRIndex, nCIndex)){
//			step++;
//			position[step] = (nRIndex - 1) * 6 + nCIndex;
//			visit[(nRIndex - 1) * 6 + nCIndex] = 1;
//			dfs((nRIndex - 1) * 6 + nCIndex, step);
//			if(flag) return;
//			visit[(nRIndex - 1) * 6 + nCIndex] = 0;
//			step--;
//		}
//	}
//
//}
//
//int main(void){
//	int n;
//	while(cin >> n && n != -1){
//		flag = false;
//		memset(visit, 0, sizeof(visit));
//		position[0] = n;
//		visit[n] = 1;
//		dfs(n, 0);
//	}
//}