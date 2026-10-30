#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n;
    int c;
    cin >> t;
    while(t--) {
        cin >> n;
        c = 1;
        vector<int>a(n);
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin >> a[i];
 
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) {
            if(a[j] == *(min_element(a.begin(),a.end()))) {
                v[i]=j;
                a[j]=1000;
                break;
            }
        }
        for(int i=0;i<n-1;i++)
        if((v[i]-v[i+1])%2==0) {
        c=0; 
        break; 
        }
 
        if(c)
        cout << "YES" << endl;
 
        else
        cout << "NO" << endl;
        
    }
    return 0;
}