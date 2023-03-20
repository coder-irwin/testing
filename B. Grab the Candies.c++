#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m = 0;
        int b = 0;
        intn;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        for(int i = 0;i<n;i++){
            if(a[i]%2==0){
                m = m + a[i];
            }
            else if (a[i]%2!=0){
                b = b + a[i];
            }
        }
        if (m>b){
            cout<<"YES \n";
        }
        else {
            cout<<"NO \n";
        }
    }
}