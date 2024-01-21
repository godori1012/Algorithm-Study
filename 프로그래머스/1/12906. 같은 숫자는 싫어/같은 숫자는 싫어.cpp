#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] != arr[i+1]){
            answer.push_back(arr[i]);
        }
    }
    int s = arr.size();
    answer.push_back(arr[s-1]);
    
    return answer;
}