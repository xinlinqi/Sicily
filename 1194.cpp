// Problem#: 1194
// Submission#: 1471584
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;
int main(void){
    int n, m;
    set<string> friends;
    string temp;
    int unkown = 0;
    while(cin >> n && n){
        cin >> m;
        for(int i=0; i < n; i++){
            cin >> temp;
            transform(temp.begin(), temp.end(),temp.begin(), ::tolower);
            friends.insert(temp);
        }
        for(int i=0; i < m; i++){
            cin >> temp;
            transform(temp.begin(), temp.end(),temp.begin(), ::tolower);
            if(friends.find(temp) != friends.end()){
                friends.erase(friends.find(temp));
            }
        }
        cout << friends.size()<< endl;
        friends.clear();
    }
    return 0;
}