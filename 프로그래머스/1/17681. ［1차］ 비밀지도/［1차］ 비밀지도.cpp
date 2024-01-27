#include <string>
#include <vector>
#include <bitset>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0; i<n; i++){
        string rowi="";
        int num = arr1[i]|arr2[i];
        string str = bitset<32>(num).to_string();
        for(int j=32-n; j<str.length(); j++){
            if(str[j] =='1'){
                rowi.append("#");
            } else{
                rowi.append(" ");
            }
        }
        answer.push_back(rowi);
    }
    
    return answer;
}