#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, count=0;
    cin >> n >> m;
    
    string str;
    map<string, int> s;
    
    for(int i=0; i<n; i++){
        cin >> str;
        s[str] = i;
    }
    
    while(m--){
        cin >> str;
        if(s.find(str) != s.end()){
            count++;
        }
    }
    
    cout << count;
    
    return 0;
}