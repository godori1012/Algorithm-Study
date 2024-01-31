#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    vector<char> stoc;
    string answer = "";
    for(int i=0; i<s.length(); i++){
        stoc.push_back(s[i]);
    }
    sort(stoc.rbegin(), stoc.rend());
    for(int i=0; i<stoc.size(); i++){
        answer+=stoc[i];
    }
    
    return answer;
}