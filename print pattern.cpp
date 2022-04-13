#include <iostream>
#include<vector>
#include<math.h>
using namespace std;
void Prt_Ptrn(int n){
    int temp=0;
    for(int i=0;i<n;i++){
        temp=temp+pow(10,n-1)/pow(10,i)*(i+1);
        cout<<temp<<endl;
    }
}
int main(){
 int n;
 cout<<"enter the size of pattern ";
 cin>>n;
 Prt_Ptrn(n);
    return 0;
}
