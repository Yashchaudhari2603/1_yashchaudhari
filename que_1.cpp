#include <iostream>
using namespace std;
int main() {
    
    int n,i,num=0;
    cin>>n;
    if(n<0){
        cout<<"Please provide a valid positive integer"<<endl;
    }
    for(i=1;i<=n;++i)
    {
        int divisor=0;
        for(int j=1;j<=i;j++){
            
            if(i%j==0){
                divisor++;
            }
        }
        if(divisor>3)
            num++;
    }
    cout<<num;
    return 0;
}
