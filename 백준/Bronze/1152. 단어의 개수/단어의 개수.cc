#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string s;
    getline(cin, s);
    vector<string> words;
    
    stringstream ss(s);
    string word;
    
    while(ss >> word){
        words.push_back(word);
    }
    
    cout << words.size();
    
    return 0;
}