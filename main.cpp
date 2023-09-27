#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int d = 5;
    int result=0;
    int i=0;
    while(d)
    {
        int rem = d&1;
        result = rem*pow(10,i++) + result;
        d = d>>1;
    }
    cout<<result;
}
