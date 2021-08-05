#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cerr.tie(NULL);                  \
    cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i,j;
    long long x,n,sum=0,mx=0,ans=0,y=0;
    vector<int>vec;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    for(j=0;j<n;j++){
        sum+=vec[j];
        mx=max(mx,sum);
        ans=max(ans,y+mx);
        y+=sum;
    }
    cout<<ans;
    return 0;
}
