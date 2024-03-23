#include <bits/stdc++.h>
// #include <string>
// #include <algorithm>

using namespace std;

int getLen(string str, int unit){
    int len=str.length();
    int new_len=len;
    string prev="";
    int count=1;
    
    int left=0;
    int right=unit;
    
    while(right<=len){
        string curr=str.substr(left, unit);
        
        if(prev==curr){
            count++;
        } else{
            if(count>1){
                new_len+=to_string(count).length();
                new_len-=(count-1)*unit;
            }
            
            prev=curr;
            count=1;
        }
        
        left+=unit;
        right+=unit;
    }
    
    if(count>1){
        new_len+=to_string(count).length();
        new_len-=(count-1)*unit;
    }
    
    return new_len;
}

int solution(string s) {
    int answer = s.length();
    
    for(int i=1; i<=s.length()/2; i++){
        answer=min(answer, getLen(s, i));
    }
    return answer;
}