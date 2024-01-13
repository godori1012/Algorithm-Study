#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    string name;
    map<string, int> notListen;
    vector<string> result;
    
    for(int i=0; i<n; i++){
        cin >> name;
        notListen[name] = i;
    }
    
    while(m--){
        cin >> name;
        if(notListen.find(name)!=notListen.end()){
            result.push_back(name);
        }
    }
    
    cout << result.size() << "\n";
    // 사전순으로 정렬
    reverse(result.begin(), result.end());
    sort(result.rbegin(), result.rend());
    sort(result.begin(), result.end());
    
    for(int i=0; i<result.size(); i++){
        cout << result[i] <<"\n";
    }

    return 0;
}
