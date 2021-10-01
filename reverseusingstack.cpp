#include <bits/stdc++.h>
using namespace std;
stack<char> s;
char ins_bot(char x)
{
    if (s.size() == 0)
    {
        s.push(x);
    }
    else
    {
        char a = s.top();
        s.pop();
        ins_bot(x);
        s.push(a);
    }
}
char reverse()
{
    if (s.size() > 0)
    {

        char x = s.top();
        s.pop();
        reverse();

        ins_bot(x);
    }
}

string ns;

int main()
{
    s.push('1');
    s.push('2');
    s.push('3');
    s.push('4');

    cout << "Original Stack" << endl;

    // prchar the elements
    // of original stack
    cout << "1"
         << " "
         << "2"
         << " "
         << "3"
         << " "
         << "4"
         << endl;

    // function to reverse
    // the stack
    reverse();
    cout << "Reversed Stack"
         << endl;

    // storing values of reversed
    // stack charo a string for display
    while (!s.empty())
    {
        char p = s.top();
        s.pop();
        ns += p;
    }

    //display of reversed stack
    cout << ns[3] << " " << ns[2] << " "
         << ns[1] << " " << ns[0] << endl;
    return 0;
}