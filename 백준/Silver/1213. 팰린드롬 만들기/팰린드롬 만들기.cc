#include <bits/stdc++.h>

using namespace std;

string palin(vector<int> alpha){
    string part1="", part2="", part3="";
    
    for(int i=0; i<26; i++){
        if(alpha[i]%2==1){
            if(part2.size()==1){
                return "I'm Sorry Hansoo";
            }else{
                part2+=(char)(i+'A');
            }
            
        }
        
        for(int j=0; j<alpha[i]/2; j++){
            part1+=(char)(i+'A');
            part3=(char)(i+'A')+part3;
        }
    }
    
    return part1+part2+part3;
}

string solution(string input){
    vector<int> alpha(26, 0);
    for(int i=0; i<input.length(); i++){
        alpha[input[i]-'A']++;
    }
    return palin(alpha);
}
    

    
int main(){
    
    string answer;
    cin>> answer;
    
    cout<<solution(answer);
    
    return 0;
}