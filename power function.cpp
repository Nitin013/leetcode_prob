#include<iostream>
using namespace std;
double myPow(double x, int n) {
        double pow=1;
        if(n>=0){
           while(n){
               if(n&1){
                   pow=pow*x;
               }
               n=n/2;
               x=x*x;
             }
             return pow;
         }
        else{
            while(n){
                if(n%2!=0){
                    pow=pow*1/x;
                }
                n=n/2;
                x=x*x;
            }
            return pow;
        }
}
int main(){
    double x;
    int n;
    cout<<"enter the number and its pow";
    cin>>x>>n;
    cout<<myPow(x,n);
    return 0;
}