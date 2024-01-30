#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer, finday, reAnswer;
    for(int i=0; i<progresses.size(); i++){
        int days;
        if((100-progresses[i])%speeds[i] !=0){
            days = (100-progresses[i])/speeds[i] +1;
        } else {
            days = (100-progresses[i])/speeds[i];
        }
        finday.push_back(days);
    }
    
    int start = finday[0];
    stack<int> s;
    int sz=finday.size();
    for(int i=0; i<sz; i++){
        if(finday[i] <= start){
            s.push(1);
        } else{
            s.push(0);
            start = finday[i];
            i--;
        }
    }
    while(!s.empty()){
        answer.push_back(s.top());
        s.pop();
    }
    int num=0;
    for(int i=0; i<answer.size(); i++){
        if(answer[i]!=0){
            num++;
            if(i==answer.size()-1){
                reAnswer.push_back(num);
            }
        } else{
            reAnswer.push_back(num);
            num=0;
        }
    }
    vector<int> theAnswer;
    for(int i=reAnswer.size()-1; i>=0; i--){
        theAnswer.push_back(reAnswer[i]);
    }
    
    return theAnswer;
}