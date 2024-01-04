#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    int baguni[n+1];
    for(int q=1; q<=n; q++){
        baguni[q] = q;
    }
    
    int i, j;
    for(int q=0; q<m; q++){
        cin >> i >> j;
        
        // 바구니 순서 역순
        reverse(baguni+i, baguni+j+1);
    }
    
    for(int q=1; q<=n; q++){
        cout << baguni[q] << " ";
    }
    
    return 0;
}