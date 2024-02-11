#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 테스트 케이스
    int t;
    cin >> t;
    
    while(t--){
        // 해빈이가 가진 의상의 수
        int n;
        cin >> n;
        unordered_map<string, int> ecase;
        for(int i=0; i<n; i++){
            string name, cate;
            cin >> name >> cate;
            // 같은 카테고리의 옷의 수를 구한다.
            ecase[cate]++;
        }
        int ans=1;
        for(auto iter=ecase.begin(); iter!=ecase.end(); ++iter){
            ans*=(iter->second+1);
        }
        cout << ans-1 << "\n";
    }

    return 0;
}