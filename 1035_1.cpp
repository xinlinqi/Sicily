#include <iostream>
#include <string>
#include <list>
#include <map>
#include <stdlib.h>
#include <algorithm>

using namespace std;

string complement(string strand){
    map<char, char> pairMap;
    pairMap['A'] = 'T';
    pairMap['T'] = 'A';
    pairMap['G'] = 'C';
    pairMap['C'] = 'G';
    string retStr = "";
    for(int i=0; i < strand.length(); i++){
        retStr += pairMap[strand[i]];
    }
    return retStr;
}

int Search(list<string>::iterator& sIt, string destStr, list<string>& sList){
    int ret = 0;
    for(list<string>::iterator it = sList.begin(); it!=sList.end(); it++){
        if(!destStr.compare(*it)){
            sList.erase(sIt);
            sList.erase(it);
            return 1;
        }
    }
    return 0;
}

int main(void){
    int numOfTest;
    int n;
    int result;
    string temp;
    list<string> strList;
    cin >> numOfTest;
    while (numOfTest--){
        result = 0;
        string comStrand;
        cin >> n;
        
        for(int i = 0; i < n; i++){
            cin >> temp;
            strList.insert(strList.begin(), temp);
        }
        for(list<string>::iterator it=strList.begin(); it != strList.end(); it++){
            comStrand = complement(*it);

            if( Search(it, comStrand, strList)){
                result++;
                it = strList.begin(); 
            }
            
        }
        cout << result << endl;
        strList.clear();
    }
    return 0;
} 