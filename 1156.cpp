#include <iostream>
using namespace std;

struct treeNode{
	int id;
	char content;
	int left;
	int right;
}node[1010];

int findRootNode(int size){
	int tempId = 0;
	bool flag;
	for(int i=0; i < size; i++){
		flag = true;
		tempId = node[i].id;
		for(int j=0; j < size; j++){
			if(tempId == node[j].left || tempId == node[j].right){
				flag = false;
				break;
			}
		}
		if(flag){
			return tempId;
		}
	}
	return 0;
}

treeNode findNodeById(int id, int size){
	treeNode retNode;
	for(int i=0; i < size; i++){
		if(node[i].id == id){
			retNode = node[i];
			break;
		}
	}
	return retNode;
}

void preOrder(int root, int size){
	treeNode tNode = findNodeById(root, size);
	cout << tNode.content;
	if(tNode.left != 0){
		preOrder(tNode.left, size);
	}
	if(tNode.right != 0){
		preOrder(tNode.right, size);
	}
}

int main(void){
	int n;
	while(cin >> n){
		for(int i=0; i < n; i++){
			cin >> node[i].id >> node[i].content >> node[i].left >> node[i].right;
		}
		preOrder(findRootNode(n), n);
		cout << endl;
	}
	return 0;
}