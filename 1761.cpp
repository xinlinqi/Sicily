#include <iostream>
#include <string>
using namespace std;
int main(void){
	string isbn;
	int arr[15] = {1, 0, 2, 3, 4, 0, 5, 6, 7, 8, 9, 0};
	bool flag = true;
	while(cin >> isbn){
		flag = true;
		int sum = 0;
		for(int i=0; i < isbn.length() - 1; i++){
			sum += arr[i] * (isbn[i]-'0');
		}
		sum = sum % 11;
		string recog;
		if(sum == 10 ){
			if(isbn[isbn.length() - 1] == 'X'){
				cout << "Right" << endl;
				flag = false;
			}
			isbn[isbn.length() - 1] = 'X';
		}else{
			if(isbn[isbn.length() - 1] - '0' == sum){
				cout << "Right" << endl;
				flag = false;

			}
			isbn[isbn.length() - 1] = sum + '0';
		}
		if (flag){
			cout << isbn << endl;
		}
	}
	return 0;
}