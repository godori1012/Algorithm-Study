#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, max=-1;
    cin >> n;
    
    int score[n];
    float sum = 0;
    
    for(int i=0; i<n; i++){
        cin >> score[i];
        if(score[i] > max){
            max = score[i];
        }
    }
    
    float jojak_score[n];
    for(int i=0; i<n;i++){
        jojak_score[i] = (float)score[i]/max*100;
        // cout << jojak_score[i] << " ";
        sum += jojak_score[i];
    }
    
    cout << (sum/n);

    return 0;
}

