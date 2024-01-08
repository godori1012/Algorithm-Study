#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    vector<string> s;
    string str;
    
    // for(int i=0; i<3; i++){
    while(getline(cin, str)){
        s.push_back(str);
    }
    
    for(int i=0; i<s.size(); i++){
        cout << s[i] << "\n";
    }

    return 0;
}