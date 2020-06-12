#include <iostream>
#include <algorithm>
#include <vector>
#define mod 1000000007
using namespace std;

int main(){
    
    int n,t;
    cin>>n>>t;

    char A[n];
    
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    
    while(t--){
        for(int i=0,j=1;j<n;){
            if(A[i]<A[j]){
                swap(A[i],A[j]);
                i+=2;
                j+=2;
            }else{
                i++;
                j++;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<A[i];
    }
    
    cout<<endl;
    
    return 0;
}
