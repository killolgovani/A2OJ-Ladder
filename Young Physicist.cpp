#include <iostream>
#include <algorithm>
#include <vector>
#define mod 1000000007
using namespace std;
 
int main(){
    
    int n; cin>>n;
    
    int suma=0,sumb=0,sumc=0;
    int a,b,c;
    while(n--){
        cin>>a>>b>>c;
        suma+=a;
        sumb+=b;
        sumc+=c;
    }
    
    if(suma==0&sumb==0&&sumc==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}
