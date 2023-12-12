#include<iostream>
using namespace std;
int main(){
    int n,h,count1=0,count2=0;
    cin>>n>>h;
    int A[n];

    for(int i=1; i<=n; i++){
        cin>>A[i];
        if(A[i]<=h){
            count1++;
        }
        else
           count2 +=2;
    }cout<<(count1+count2)<<endl;
}
