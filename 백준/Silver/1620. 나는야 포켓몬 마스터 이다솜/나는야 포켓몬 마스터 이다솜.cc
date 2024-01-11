#include <iostream>
#include <map>
#include <cctype>
#include <vector>

using namespace std;

void FindKey(string q, map<int, string> d, vector<string>& v){
    for(auto it=d.begin(); it!=d.end(); it++){
        string fpoket = it->second;
        if(fpoket == q){
            int ps = it->first;
            v.push_back(to_string(ps));
        }
    }
}

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    map<int, string> dogam;
    map<string, int> reverse_dogam;
    string poketmon;
    string question;
    vector<string> result;
    
    for(int i=1; i<=n; i++){
        cin >> poketmon;
        dogam[i] = poketmon;
        reverse_dogam[poketmon] = i;
    }
    
    while(m--){
        cin >> question;
        if(isdigit(question[0]) == 0){  // 문자가 들어온 경우
            result.push_back(to_string(reverse_dogam[question]));
        } else{                         // 숫자가 들어온 경우
            result.push_back(dogam[stoi(question)]);
        }
    }
    
    for(int i=0; i<result.size(); i++){
        cout << result[i] << "\n";
    }

    return 0;
}