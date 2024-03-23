#include <bits/stdc++.h>

using namespace std;

vector<int> countAlpha(string input){
    vector<int> alpha(26, 0);
    
    for(int i=0; i<input.size(); i++){
        alpha[input[i]-'A']++;
    }
    
    return alpha;
}

string palindrome(vector<int> &count){
    string part1="", part2="", part3="";
    
    for(int i=0; i<26; i++){
        if(count[i]%2==1){  // 홀수인 경우
            if(part2.size()==1){
                return "I'm Sorry Hansoo";
            } else{
            part2=(char)(i+'A');
            }
        }
        
        for(int j=0; j<count[i]/2; j++){
            part1+=(char)(i+'A');
            part3=(char)(i+'A')+part3;
        }
    }
    return part1+part2+part3;
}

string solution(string input){
    
    // 알파벳 수 파악
    vector<int> count=countAlpha(input); 
    
    // 팰린드롬
    string palin=palindrome(count);
    
    return palin;
}

int main()
{
    string input;
    cin>>input;
    
    cout<<solution(input);

    return 0;
}

