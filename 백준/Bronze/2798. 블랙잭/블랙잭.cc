#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,m, max=-1;
    cin  >> n >> m;
    // 카드 번호 입력
    vector<int> cardNum(n);
    for(int i=0; i<n; i++){
        cin >> cardNum[i];
    }
    
    // m에 최대한 가까운 카드 3장의 합 계산
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(cardNum[i]+cardNum[j] + cardNum[k] > max && cardNum[i]+cardNum[j]+cardNum[k] <= m){
                    max = cardNum[i]+cardNum[j]+cardNum[k];
                }
            }
        }
    }
    
    cout << max;
    return 0;
}
