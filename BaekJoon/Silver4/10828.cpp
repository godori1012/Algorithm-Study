#include <iostream>
#include <stack>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 스택 s 선언
    stack<int> s;

    // N: 명령을 수행할 줄의 수
    // X: push할 때 넣을 정수
    int N, X;

    cin >> N;

    string cmd;

    while (N--)
    {
        cin >> cmd;

        if (cmd == "push")
        {
            cin >> X;
            s.push(X);
        }
        else if (cmd == "pop")
        {
            if (s.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << s.size() << "\n";
        }
        else if (cmd == "empty")
        {
            if (s.empty())
            {
                cout << 1 << "\n";
            }
            else
            {
                cout << 0 << "\n";
            }
        }
        else if (cmd == "top")
        {
            if (s.empty())
            {
                cout << -1 << "\n";
            }
            else
            {
                cout << s.top() << "\n";
            }
        }
    }
    return 0;
}
