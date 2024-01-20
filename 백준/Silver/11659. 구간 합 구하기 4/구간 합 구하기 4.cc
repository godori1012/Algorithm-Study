#include <iostream>
#include <vector>

using namespace std;

// i까지의 누적합을 계산
void Sum(int n, vector<int> &arr){
    for(int i=1; i<=n; i++){
        arr[i] += arr[i-1];
    }
}

void Minus(int a, int b, vector<int> &arr, vector<int> &result){
    result.push_back(arr[b] - arr[a-1]);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr(n+1,0), result;
    
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    
    Sum(n, arr);

    int a, b;
    for(int i=0; i<m; i++){
        cin >> a >> b;
        Minus(a, b, arr, result);
    }
    
    for(int i=0; i<m; i++){
        cout << result[i] << "\n";
    }
    
    return 0;
}