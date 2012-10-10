//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int arr[200][200], visit[200];
//bool hasPath;
//void dfs(int start, int end){
//    if(start == end){
//        hasPath = true;
//        return;
//    }
//    for(int i=0; i <= end; i++){
//        if(hasPath) break;
//		if(!visit[i] && arr[start][i] == 1){
//			visit[i] = 1;
//			dfs(i, end);
//			visit[i] = 0;
//		}
//    }
//}
//
//int main(void){
//    int n, m, a, b;
//    while(cin >> n && n){
//        cin >> m;
//        memset(arr, 0, sizeof(arr[0]) * n);
//        hasPath = false;
//        for(int i=0; i < m; i++){
//            cin >> a >> b;
//            arr[a][b] = 1;
//        }
//        dfs(0, n - 1);
//        if(hasPath){
//            cout << "I can post the letter" << endl;
//        }else{
//            cout << "I can't post the letter" << endl;
//        }
//    }
//    return 0;
//}                                 