#include <iostream>
#include <assert.h>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

struct node{
	string str;
	int length;
	string oStr;
};

int compare(const void* n1, const void* n2){
	struct node* node1 = (node*) n1;
	struct node* node2 = (node*) n2;
	if(!node1->str.compare(node2->str)){
		return node1->length - node2->length;
	}
	return node1->str.compare(node2->str);
}

int main(void){
	int t;
	int n;
	cin >> t;
	string tempStr;
	while (t--){
		cin >> n;
		node strNode[8];
		for(int i=0; i < n; i++){
			cin >> tempStr;
			strNode[i].str = tempStr;
			strNode[i].oStr = tempStr;
			strNode[i].length = tempStr.length();
		}
		int max = strNode[0].str.length();
		char temp[101];
		memset(temp, '\0', sizeof(char) * 101);
		for(int i=0; i < n; i++){
			if (strNode[i].str.length() > max){
				max = strNode[i].str.length();
			}
		}
		for(int i=0; i < n; i++){
			if(strNode[i].str.length() < max){
				memset(temp, strNode[i].str[strNode[i].str.length()-1], (max-strNode[i].str.length())*sizeof(char));
				strNode[i].str += temp;
			}
		}

		qsort(strNode, n, sizeof(strNode[0]), compare);

		for(int i = 0; i < n; i++){
			cout << strNode[i].oStr;
		}
		cout << endl;
	
	}
	return 0;
}