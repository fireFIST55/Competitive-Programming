#define encoding_898                 \
    ios_base::sync_with_stdio(false);\
    cin.tie(NULL);                   \
    cout.tie(NULL);                  \
    cerr.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main(void){
    encoding_898;
    int j,length,flag=0,nex=7,ans=0,extra;
    long long int i,k,y,z,count,res=0;
    cin>>k;
    z=k;
    for(j=1;;j++){
        z/=10;
        if(!z){
            break;
        }
    }
    length=j;
    for(i=1;i<=9;i++){
        y=k*i;
        if(y%10==7){
            flag=1;
            break;
        }
    }
    if(k>1&&flag){
        vector<int>arr(length+1);
        for(i;i<=9;i++){
            y=k*i;
            if(arr[length]==7){
                res++;
                for(j=length,count=1;j;j--){
                    arr[j]=arr[j-1];
                    if(!arr[j])
                        count++;
                    if(j==length){
                        if(arr[j]>7)
                            nex=(10-arr[j])+7;
                        else
                            nex=7-arr[j];
                    }
                }
                if(count==length+1){
                    ans=1;
                    break;
                }
                arr[0]=0;
                i=0;
            }
            else if(y%10==nex){
                res++;
                if(y%10+arr[length]>9)
                    extra=1;
                else
                    extra=0;
                y/=10;
                for(j=length;j;j--){
                    if(j){
                        if(arr[j-1]+y%10+extra>9){
                            arr[j]=(arr[j-1]+y%10+extra)%10;
                            extra=1;
                        }
                        else{
                            arr[j]=arr[j-1]+y%10+extra;
                            extra=0;
                        }
                        if(j==length){
                            if(arr[j]>7)
                                nex=(10-arr[j])+7;
                            else
                                nex=(7-arr[j]);
                        }
                    }
                    y/=10;
                }
                arr[0]=0;
                i=0;
                if(nex==7){
                    for(j=1,count=1;j<length+1;j++)
                        if(!arr[j])
                            count++;
                    if(count==length+1){
                        ans=1;
                        break;
                    }
                }
            }
        }
    }
    if(ans)
        cout<<res;
    else if(k==1)
        cout<<k;
    else
        cout<<-1;
    return 0;
}
