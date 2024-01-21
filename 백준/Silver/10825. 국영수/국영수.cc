#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
    string name;
    int kor, eng, math;
};

// 성적순 배열
bool cmp(const Student& s1, const Student& s2){
    if(s1.kor != s2.kor){
        return s1.kor > s2.kor;
    }
    if(s1.eng != s2.eng){
        return s1.eng < s2.eng;
    }
    if(s1.math != s2.math){
        return s1.math > s2.math;
    }
    return s1.name < s2.name;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<Student> allStudent;
    allStudent.assign(n, {});
    
    string s;
    for(int i=0; i<n; i++){
        cin  >> allStudent[i].name >> allStudent[i].kor >> allStudent[i].eng >> allStudent[i].math
    ;
    }
    
    sort(allStudent.begin(), allStudent.end(), cmp);
    for(int i=0; i<allStudent.size(); i++){
        cout << allStudent[i].name << "\n";
    }
    
    return 0;
}
