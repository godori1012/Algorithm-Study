#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, r;
    
    cin >> t;
    
    // vector<string> s;
    vector<string> result;
    string str, s;
    
    for(int i=0; i<t; i++){
        cin >> r >> str;
        for(int j=0; j<str.length(); j++){
            for(int k=0; k<r; k++){
                s += str[j];
            }
        }
        result.push_back(s);
        s = "";
    }
    
    for(int i=0; i<t; i++){
        cout << result[i] << "\n";
    }

    return 0;
}

