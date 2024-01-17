#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string num;
    cin >> num;
    
    vector<int> numArr;
    
    for(int i=0; i<num.length(); i++){
        numArr.push_back(num[i] - '0');
        
    }
    
    sort(numArr.rbegin(), numArr.rend());
    for(int i=0; i<num.length(); i++){
        cout << numArr[i];
        
    }

    return 0;
}
