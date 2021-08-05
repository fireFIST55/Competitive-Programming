#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    string str;
    cin>>str;
    int i,num,length=str.length(),rem,freq[3]={0};
    for(i=0,num=0;str[i]!='\0';i++){
        num+=(str[i]-48);
        freq[(str[i]-48)%3]++;
    }
    if(num%3){
        rem=num%3;
        if(freq[rem]&&length>1)
            cout<<1;
        else if((rem==2&&freq[1]==2&&rem<length)||(rem==1&&freq[2]==2&&length>2))
            cout<<2;
        else
            cout<<-1;
    }
    else
        cout<<0;
    return 0;
}

