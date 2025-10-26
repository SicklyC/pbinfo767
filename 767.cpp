#include <bits/stdc++.h>
using namespace std;
int m,n,suma,a[100][100];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]%2==0)
            suma=suma+a[i][j];
        }
    }
    cout<<suma<<endl;
}
