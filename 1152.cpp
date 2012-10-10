//#include <iostream>
//#include <cstring>
//#include <stack>
//using namespace std;
//struct Grid{
//	int rIndex;
//	int cIndex;
//	string path;
//}grid[30];
//
//int visited[6][7];
//int flag, step;
//
//void printGrid(){
//	for(int i=1; i < step; i++){
//		cout << (grid[i].rIndex - 1) * 6 + grid[i].cIndex << " ";
//	}
//	cout << (grid[step].rIndex - 1) * 6 + grid[step].cIndex << endl;
//}
//
//bool isValidPos(int x, int y){
//	if(visited[x][y] == 1){
//		return false;
//	}
//	return (x >= 1 && x <= 5 && y >= 1 && y <= 6);
//}
//
//void traverse(int rIndex, int cIndex){
//	//int next[8][2] = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
//	int next[][2] = {{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1}} ;
//	if(step == 30){
//		flag = 1;
//		return;
//	}
//	int nRIndex, nCIndex;
//	for(int i=0; i < 8; i++){
//		nRIndex = rIndex + next[i][0];
//		nCIndex = cIndex + next[i][1];
//		if(isValidPos(nRIndex, nCIndex)){
//			step++;
//			grid[step].cIndex = nCIndex;
//			grid[step].rIndex = nRIndex;
//			visited[nRIndex][nCIndex] = 1;
//			traverse(nRIndex, nCIndex);
//			if(flag == 1) return;
//			visited[nRIndex][nCIndex] = 0;
//			step--;
//		}
//	}
//	
//}
//
//int main(void){
//	int n;
//	int rIndex;
//	int cIndex;
//	while(cin >> n && n != -1){
//		step = 1;
//		memset(visited, 0, sizeof(visited));
//		rIndex = (n - 1) / 6 + 1;
//		cIndex = (n - 1) % 6 + 1;
//		grid[step].rIndex = rIndex;
//		grid[step].cIndex = cIndex;
//		visited[rIndex][cIndex] = 1;
//		flag = 0;
//		traverse(rIndex, cIndex);
//		printGrid();
//	}
//	return 0;
//}