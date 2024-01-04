#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int x;
    vector<int> arr;
    cin >> x;
    arr.push_back(x%42);
    
    for(int i=0; i<9; i++){
        cin >> x;
        int na = x%42;
        
        
        if(find(arr.begin(), arr.end(), na) == arr.end()){
            arr.push_back(x%42);
        }
    }

    cout << arr.size();

    return 0;
}
