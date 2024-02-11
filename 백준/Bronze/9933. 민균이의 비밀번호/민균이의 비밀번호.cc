#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    unordered_map<string, int> pwd;
    
    while(n--){
        string txt;
        cin >> txt;
        pwd[txt]++;
        reverse(txt.begin(), txt.end());
        pwd[txt]++;
    }
    string ans;
    for(auto iter=pwd.begin(); iter!=pwd.end(); iter++){
        if((iter->second)==2){
            ans=(iter->first);
            break;
        }
    }
    int len = ans.length();
    int midInd = (len/2);
    
    cout << len << " " << ans[midInd];
    return 0;
}

