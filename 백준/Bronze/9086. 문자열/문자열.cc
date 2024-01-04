#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    string s;
    string str[t];
    for(int i=0; i<t; i++){
        cin >> s;
        int l = s.length();
        
        str[i] = string(1, s[0]) + string(1, s[l-1]);
    }
    
    for(int i=0; i<t; i++){
        cout << str[i] << endl;
    }

    return 0;
}