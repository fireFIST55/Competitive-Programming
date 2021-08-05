#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cerr.tie(NULL);                  \
    cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int i;
    long long int a,n,max=0,max1=0,total=0,total1=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        total+=a;
        total1+=a;
        if(max1<total1-a)
            max1=total1-a;
        if(max<total-total1+max1)
            max=total-total1+max1;
        else if(max<total)
            max=total;
        total+=total1;
    }
    cout<<max;
    return 0;
}
