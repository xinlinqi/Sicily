#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int size;
struct submission{
	int time;
	char id;
	char state;
}sub[10];

int main(void){
	int tc, n, t, AC, WA;
	char ACSub[10], WASub[10];

	char id;
	string str;
	cin >> tc;
	while(tc--){
		memset(ACSub, 0, sizeof(ACSub));
		memset(WASub, 0, sizeof(WASub));
		AC = 0;
		WA = 0;
		cin >> n;
		for(int i=0; i < n; i++){
			cin >> t >> id >> str;
			if(sub[id-'A'].state != 'A'){
				sub[id-'A'].state = str[0];
				sub[id-'A'].id = id;
				sub[id-'A'].time = t;
			}
		}

		for(int i=0; i <= 9; i++){
			if(sub[i].state == 'A'){
				ACSub[AC++] = i + 'A';
			}
			if(sub[i].state == 'W'){
				WASub[WA++] = i + 'A';
			}
		}
		cout << "Accept: ";
		for(int i=0; i < AC; i++){
			cout << ACSub[i];
		}
		cout << "\nWrong: ";
		for(int i=0; i < WA; i++){
			cout << WASub[i];
		}
		cout << endl << endl;

		for(int i=0; i <= 9; i++){
			sub[i].state = 0;
		}
	}
}