#include <iostream>

using namespace std;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, count1 = 1, count2 = 1, count3 = 1, count;
    cin >> n;
    
    string str;
    cin >> str;
    char check=str[0];
    
    // 교차로 색을 칠하는 경우
    for(int i=1; i<n; i++){
        if(str[i] != check){
            count1++;
            check=str[i];
        } 
    }
    
    // 모두 파란색으로 칠하고 이후 빨간 부분을 칠하는 경우
    if(str[0] == 'R'){
        count2++;
    }
    for(int i=1; i<n; i++){
        if(str[i] == 'R'){
            if(str[i-1] != str[i]){
                count2++;
            }
        }
    }
    
    // 모두 빨간색으로 칠하고 이후 파란 부분을 칠하는 경우
    if(str[0] == 'B'){
        count3++;
    }
    for(int i=1; i<n; i++){
        if(str[i] == 'B'){
            if(str[i-1] != str[i]){
                count3++;
            }
        }
    }
    
    // 비교하여 적은 횟수를 구함
    count = (count1 > count2) ? count2 : count1;
    count = (count > count3) ? count3 : count;
    
    cout << count;

    return 0;
}