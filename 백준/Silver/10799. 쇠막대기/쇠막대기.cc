#include <bits/stdc++.h>

using namespace std;

int solution(string input){
    stack<char> st;
    int sum=0;
    for(int i=0; i<input.size(); i++){
        if(input[i]=='('){
            st.push('(');
        } else{
            st.pop();
            if(input[i-1]=='('){
                sum+=st.size();
            } else{
                sum++;
            }
        }
    }
    
    return sum;
}

int main()
{
    string input;
    cin>>input;
    
    cout<<solution(input);

    return 0;
}