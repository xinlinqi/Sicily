#include <iostream>
#include <cstring>
#include <stack>
#include <stdlib.h>
using namespace std;

const int COLUMN = 8, ROW = 8;
const int moves[][2] = {{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1}} ;
struct Grid{
	int rIndex;
	int cIndex;
}grid[COLUMN * ROW+1];

struct steps{
	int rIndex;
	int cIndex;
	int cnt;
}s[8];

int visited[ROW+1][COLUMN+1];
int flag, step;


int compare(const void*a, const void*b){
	steps sa = *(steps*) a;
	steps sb = *(steps*) b;
	return sa.cnt - sb.cnt;
}

void printGrid(){
	for(int i=1; i < step; i++){
		cout << (grid[i].rIndex - 1) * COLUMN + grid[i].cIndex << " ";
	}
	cout << (grid[step].rIndex - 1) * COLUMN + grid[step].cIndex << endl;
}

bool isValidPos(int x, int y){
	if(visited[x][y] == 1){
		return false;
	}
	return (x >= 1 && x <= ROW && y >= 1 && y <= COLUMN);
}

int cal(int rIndex, int cIndex){
	int cnt = 0;
	for(int i=0; i < 8; i++){
		if(isValidPos(rIndex+s[i].rIndex, cIndex+s[i].cIndex)){
			cnt++;
		}
	}
	return cnt;
}

void traverse(int rIndex, int cIndex){
	//int next[8][2] = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1}, {-2, 1}, {-2, -1}};
	
	if(step == COLUMN * ROW){
		flag = 1;
		return;
	}
	int nRIndex, nCIndex;

	for(int i=0; i < 8; i++){
		s[i].cnt = cal(rIndex+s[i].rIndex, cIndex+s[i].cIndex);
	}
	qsort(s, 8, sizeof(steps), compare);

	for(int i=0; i < 8; i++){
		nRIndex = rIndex + s[i].rIndex;
		nCIndex = cIndex + s[i].cIndex;
		if(isValidPos(nRIndex, nCIndex)){
			step++;
			grid[step].cIndex = nCIndex;
			grid[step].rIndex = nRIndex;
			visited[nRIndex][nCIndex] = 1;
			traverse(nRIndex, nCIndex);
			if(flag == 1) return;
			visited[nRIndex][nCIndex] = 0;
			step--;
		}
	}
	
}

int main(void){
	int n;
	int rIndex;
	int cIndex;
	memset(visited, 0, sizeof(visited));
	for(int i=0; i < 8; i++){
		s[i].cIndex = moves[i][0];
		s[i].rIndex = moves[i][1];
	}
	while(cin >> n && n != -1){
		step = 1;
		memset(visited, 0, sizeof(visited));
		rIndex = (n - 1) / COLUMN + 1;
		cIndex = (n - 1) % COLUMN + 1;
		grid[step].rIndex = rIndex;
		grid[step].cIndex = cIndex;
		visited[rIndex][cIndex] = 1;
		flag = 0;
		traverse(rIndex, cIndex);
		printGrid();
	}
	return 0;
}