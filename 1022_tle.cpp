//#include <iostream>
//#include <string>
//#include <stdlib.h>
//using namespace std;
//
//struct constent{
//	string name;
//	int solved;
//}con[100010];
//
//int compare(const void* a, const void* b){
//	constent ca = *(constent*)a;
//	constent cb = *(constent*)b;
//	return ca.solved - cb.solved;
//}
//
//int main(void){
//	int m, solved, numOfCon;
//	string cmd, name;
//	bool justQueryed;
//	cin >> m;
//	while(m--){
//		numOfCon = 0;
//		while(cin >> cmd){
//			if(cmd.compare("Add") == 0){
//				justQueryed = false;
//				cin >> con[numOfCon].name >> con[numOfCon].solved;
//				numOfCon++;
//			}else{
//				if(cmd.compare("Query") == 0){			
//					if(numOfCon % 2 == 0){
//						cout << "No one!" << endl;
//					}else{
//						if(!justQueryed){
//							qsort(con, numOfCon, sizeof(constent), compare);
//							justQueryed = true;
//						}
//						cout << con[numOfCon/2].name << endl;
//					}
//					
//				}
//				if(cmd.compare("End") == 0){
//					if(numOfCon % 2 == 0){
//						cout << "Happy BG meeting!!" << endl;
//					}else{
//						if(!justQueryed){
//							qsort(con, numOfCon, sizeof(constent), compare);
//							justQueryed = true;
//						}
//						cout << con[numOfCon/2].name << " is so poor." << endl;
//					}
//					cout << endl;
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}