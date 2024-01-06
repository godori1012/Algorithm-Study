#include <iostream>

using namespace std;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   string s;
   cin >> s;

   for(char c='a'; c<='z'; c++){
       cout << (int)s.find(c) << " ";
   }

    return 0;
}