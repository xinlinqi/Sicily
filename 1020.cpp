#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int numOfTest;
    int b[100];
    int bigNumLen = 0;
    char bigNum[400];
	string bigNumStr;
    int n;
	int temp;
    cin >> numOfTest;
    for (int i=0; i < numOfTest; i++){
        cin >> n;
        for (int i=0; i < n; i++){
            cin >> b[i];
        }
        int result[100];
		cin >> bigNumStr;
		bigNumLen = bigNumStr.length();
        for (int j = 0; j < n; j++){
			temp = 0;
            for(int i=0; i < bigNumLen; i++){
                    temp = temp * 10;
                    temp = temp + bigNumStr[i] - '0';
                    temp = temp % b[j];
            }
            result[j] = temp;
        }
        cout << '(';
        for(int i=0; i < n-1 ; i++){
                cout << result[i] << ',';
        }
        cout << result[n-1] << ")" << endl;
    }
    return 0;
}