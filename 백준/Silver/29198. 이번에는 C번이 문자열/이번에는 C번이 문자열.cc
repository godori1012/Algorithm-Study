#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, k;
    cin >> n >> m >> k;
    
    string str, result="";
    // 문자 입력 & 사전순으로 정렬
    vector<string> arr;
    for(int i=0; i<n; i++){
        cin >> str;
        arr.push_back(str);
    }
    sort(arr.begin(), arr.end());
    
    // m*k의 문자열 생성
    for(int i=0; i<k; i++){
        result+=arr[i];
    }
    sort(result.begin(), result.end());
    
    // 결과 출력
    cout << result;

    return 0;
}