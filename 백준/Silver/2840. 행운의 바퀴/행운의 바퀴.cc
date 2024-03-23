#include <bits/stdc++.h>

using namespace std;

typedef pair<int, char> rt;

string printWheel(int idx, int n, vector<char> &wheel){
    string answer="";
    int start=idx;
    
    do{
        answer+=wheel[idx];
        idx=(idx+1)%n;
    }while(idx!=start);

    return answer;
}

string solution(int n, vector<rt> &record){
    
    vector<char> wheel(n, '?');
    vector<bool> check(26, false);
    
    int idx=0;
    
    for(int i=0; i<record.size(); i++){
        int rotNum=record[i].first;
        int rotAlpha=record[i].second;
        
        idx= (idx-rotNum%n+n)%n;
        
        if(wheel[idx]==rotAlpha){
            continue;
        }
        
        if(wheel[idx]!='?' || check[rotAlpha-'A']){
            return "!";
        }
        
        wheel[idx]=rotAlpha;
        check[rotAlpha-'A']=true;
        
    }
    
    return printWheel(idx, n, wheel);
}

int main()
{
    int n, k;
    cin >> n >> k;
    
    vector<rt> record(k,{0, 0});
    
    for(int i=0; i<k; i++){
        cin >> record[i].first >> record[i].second;
    }
    
    cout << solution(n, record);

    return 0;
}

