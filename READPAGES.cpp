#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,N,X,Y;
    cin>>T;
    while(T--)
    {
        cin>>N >>X >>Y;
        if(X*Y>=N)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
