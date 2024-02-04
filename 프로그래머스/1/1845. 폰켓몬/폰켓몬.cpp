#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    sort(nums.begin(), nums.end());
    vector<int> vari;
    
    int tot=nums.size();
    for(int i=0; i<tot-1; i++){
        if(nums[i] != nums[i+1]){
            vari.push_back(i);
        }
    }
    if(nums[tot-1]!=nums[tot]){
        vari.push_back(tot);
    }
    
    if(vari.size()>tot/2){
        answer = tot/2;
    } else{
        answer = vari.size();
    }
    
    return answer;
}