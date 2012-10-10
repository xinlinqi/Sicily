#include <iostream>
#include <queue>
#include <string>
#include <set>
#include <assert.h>
using namespace std;

struct node{
	int arr[8];
	string path;
	int id;
	int depth;
	node(int pArr[], int length, string pPath, int pId, int pDepth){
		for(int i=0; i < length; i++){
			assert(length <= 8);
			arr[i] = pArr[i];
		}
		path = pPath;
		depth = pDepth;
		id = pId;
	}
	void setAttr(int pArr[], int length, string pPath, int pId, int pDepth){
		for(int i=0; i < length; i++){
			assert(length <= 8);
			arr[i] = pArr[i];
		}
		path = pPath;
		depth = pDepth;
		id = pId;
	}
};

int cantor(int arr[], int length){
	int ret = 0;
	int count;
	int fac[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};
	for(int i=0; i < length; i++){
		count = 0;
		for(int j=i; j < length; j++){
			if(arr[j] < arr[i]){
				count++;
			}
		}
		ret += count * fac[length-i-1];
	}
	return ret;
}

inline void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

void doOperationA(int arr[], int length){
	for(int i=0; i < length / 2; i++){
		swap(arr[i], arr[i + length/2]);
	}
}

void doOperationB(int arr[], int length){
	for(int i = length/2 - 1; i >= 1; i--){
		swap(arr[i], arr[i-1]);
		swap(arr[i + length/2], arr[i+length/2-1]);
	}
}

void doOperationC(int arr[]){
	swap(arr[1], arr[2]);
	swap(arr[1], arr[6]);
	swap(arr[1], arr[5]);
	
}

void wideSearch(int initArr[], int destArr[], int max){
	int tempArr[8];
	queue<node> nodeStack;
	set<int> stateSet;
	int initState = cantor(initArr, 8), destState=cantor(destArr, 8);
	node n(initArr, 8, "", initState, 0);
	nodeStack.push(n);
	stateSet.insert(initState);
	if(initState == destState){
		cout << 0 << endl;
		return;
	}
	while(!nodeStack.empty()){
		node temp = nodeStack.front();
		nodeStack.pop();
		if(temp.depth >= max){
			cout << -1 << endl;
			return;
		}
		//A operation.
		for(int i=0; i < 8; i++){
			tempArr[i] = temp.arr[i];
		}
		doOperationA(tempArr, 8);
		int id = cantor(tempArr, 8);
		if(!(stateSet.find(id) != stateSet.end())){
			if(id == destState){
				cout << temp.depth + 1 << " " << temp.path + "A" << endl;
				return;
			}
			n.setAttr(tempArr, 8, temp.path + "A", id, temp.depth+1);
			nodeStack.push(n);
			stateSet.insert(id);
		}
		//B operation.
		for(int i=0; i < 8; i++){
			tempArr[i] = temp.arr[i];
		}
		doOperationB(tempArr, 8);
		id = cantor(tempArr, 8);
		if(!(stateSet.find(id) != stateSet.end())){
			if(id == destState){
				cout << temp.depth + 1 << " " << temp.path + "B" << endl;
				return;
			}
			n.setAttr(tempArr, 8, temp.path + "B", id, temp.depth+1);
			nodeStack.push(n);
			stateSet.insert(id);
		}

		//C operation.
		for(int i=0; i < 8; i++){
			tempArr[i] = temp.arr[i];
		}
		doOperationC(tempArr);
		id = cantor(tempArr, 8);
		if(!(stateSet.find(id) != stateSet.end())){
			if(id == destState){
				cout << temp.depth + 1 << " " << temp.path + "C" << endl;
				return;
			}
			n.setAttr(tempArr, 8, temp.path + "C", id, temp.depth+1);
			nodeStack.push(n);
			stateSet.insert(id);
		}
	}
}

int main(void){
	int n;
	int arr[8];
	int initArr[] = {1, 2, 3, 4, 8, 7, 6, 5};
	while(cin >> n && n != -1){
		for(int i = 0; i < 8; i++){
			cin >> arr[i];
		}
		wideSearch(initArr, arr, n);
	}
	return 0;
}