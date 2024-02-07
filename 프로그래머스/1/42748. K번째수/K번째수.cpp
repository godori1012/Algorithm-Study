#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, printArr;
    
    for(int i=0; i<commands.size(); i++){
        int start = commands[i][0]-1;
        int end = commands[i][1]-1;
        int num = commands[i][2]-1;
        
        for(int j=start; j<=end; j++){
            printArr.push_back(array[j]);
        }
        sort(printArr.begin(), printArr.end());
        answer.push_back(printArr[num]);
        printArr.clear();
        
    }
    
    return answer;
}