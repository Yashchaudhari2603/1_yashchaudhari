#include <iostream>
using namespace std;
int main() {
    
    long int n,i,divisor=0;
    cin>>n;
    if(n<0){
    cout<<"Please provide a valid positive integer"<<endl;
for(i=1;i<=n;++i)
{
if(n%i==0)
divisor++;
}

if(divisor==3){
num++;
}

cout<<num;

    return 0;
}
