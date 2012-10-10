#include <iostream>
#include <string>
#include <set>
using namespace std;
string allStr[130] = {""};

int used[100] = {0};
int total = 0;

void Perm(int strLen, int cur, string& temp, string srcStr){
	if(cur == strLen){
		allStr[total] = temp;
		total++;
		return;
	}

	for(int i=0; i < 5; i++){
		if(used[i] == 0){
			used[i] = 1;
			temp += srcStr[i];
			Perm(strLen, cur+1, temp, srcStr);
			temp.erase(temp.length()-1);
			used[i] = 0;
		}
	}
}

inline void Swap(char& a, char& b){
	int temp = a;
	a = b;
	b = temp;
}


void recPerm(string arr, int start, int end){
	int i;
	if(start == end){
		allStr[total] = arr;
		total++;
	}
	else{
		for(i=start; i <= end; i++){
			Swap(arr[start], arr[i]);
			recPerm(arr, start+1, end);
			Swap(arr[start], arr[i]);
		}
	}
}

int calRanking(string a, string b){
	int visited[5] = {0};
	int ret = 0;
	for(int i=0; i < 5; i++){
		int j;
		for(j=0; j < 5 && a[i] != b[j]; j++){
			if(!visited[j])
				ret++;
		}
		visited[j] = 1;
	}
	return ret;
}

int main(void){
	int n;
	string strArr[110];
	string arr = "ABCDE";
	recPerm(arr, 0, 4);
	set<string> res;
	while(cin >> n && n){
		int sum;
		int min = -1;
		for(int i=0; i < n; i++){
			cin >> strArr[i];
		}
		for(int i=0; i < total; i++){
			sum = 0;
			for(int j=0; j < n; j++){
				sum += calRanking(allStr[i], strArr[j]);
			}
			if(min < 0){
				min = sum;
			}
			if(min > sum){
				min = sum;
				res.clear();
				res.insert(allStr[i]);
			}else{
				if(min == sum)
				{
					res.insert(allStr[i]);
				}
			}
		}
		cout << *res.begin() << " is the median ranking with value " << min << "." << endl;
	}
	return 0;
}