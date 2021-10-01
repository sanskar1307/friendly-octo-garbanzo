#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n],i=0;
    while(i<n){
        cin>>A[i];
        i++;
    }
    stack<int> X;
    X.push(A[0]);
    for(i=1;i<n;i++){
         if (X.empty()) {
            X.push(A[i]);
            continue;
        }
         while (X.empty() == false
               && X.top() < A[i])
        {
            cout << X.top()
                 << " --> " << A[i] << endl;
            X.pop();
        }

        X.push(A[i]);

    }
      while (X.empty() == false) {
        cout << X.top() << " --> " << -1 << endl;
        X.pop();
    }
}