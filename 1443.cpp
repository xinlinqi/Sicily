#include <iostream>
#include <queue>
using namespace std;

struct Job{
	int priority;
	bool isMine;
}job[120];

void moveFirstToEnd(int first, int end){
	Job j = job[first];
	for(int i=first; i <= end - 1; i++){
		job[i] = job[i+1];
	}
	job[end] = j;
}

bool hasBiggerOnes(int first, int end){
	for(int i=first+1; i <= end; i++){
		if(job[first].priority < job[i].priority){
			return true;
		}
	}
	return false;
}

int main(){
	int t, n, m, start, end;
	queue<Job> jq;
	cin >> t;
	while(t--){
		cin >> n >> m;
		start = 0;
		end = n - 1;
		for(int i=0; i < n; i++){
			cin >> job[i].priority;
			if(i == m){
				job[i].isMine = true;
			}else{
				job[i].isMine = false;
			}
		}
		while(start <= end){
			if(hasBiggerOnes(start, end)){
				moveFirstToEnd(start, end);
			}else{
				if(job[start].isMine){
					cout << start + 1 << endl;
					break;
				}
				start++;
			}
		}
	}
	return 0;
}