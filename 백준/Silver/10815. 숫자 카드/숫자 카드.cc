#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, num;
    cin >> n;
    
    map<int, int> sangeun;
    vector<int> check;
    
    for(int i=0; i<n; i++){
        cin >> num;
        sangeun[num] = i;
    }
    
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> num;
        if(sangeun.find(num) != sangeun.end()){
            check.push_back(1);
        } else{
            check.push_back(0);
        }
    }
    
    for(int i=0; i<check.size(); i++){
        cout << check[i] << " ";
    }
    return 0;
}
