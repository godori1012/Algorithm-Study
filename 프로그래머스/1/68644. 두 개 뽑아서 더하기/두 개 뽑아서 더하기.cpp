#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> ans;
    for(int i=0; i<numbers.size()-1;i++){
        for(int j=i+1; j<numbers.size(); j++){
            int num = numbers[i]+numbers[j];
            ans.insert(num);
        }
    }
    
    vector<int> answer;
    for(auto& iter:ans){
        answer.push_back(iter);
    }
    return answer;
}
