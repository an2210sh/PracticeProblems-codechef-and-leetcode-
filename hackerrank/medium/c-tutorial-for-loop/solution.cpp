#include <iostream>
#include <cstdio>
using namespace std;
void ans(int a){
    if(a>9 && a%2==0)
    cout<<"even";
    else if (a>9 && a%2!=0)
    cout<<"odd";
    else{
        switch(a){
            case 1:
            cout<<"one";
            break;
            case 2:
            cout<<"two";
            break;
            case 3:
            cout<<"three";
            break;
              case 4:
            cout<<"four";
            break;
            case 5:
            cout<<"five";
            break;
            case 6:
            cout<<"six";
            break;
              case 7:
            cout<<"seven";
            break;
            case 8:
            cout<<"eight";
            break;
            case 9:
            cout<<"nine";   
        }
    }cout<<endl;
}
int main() {
    // Complete the code.
    int a,b;
    cin>>a;
    cin>>b;
    for(int i=a;i<=b;i++)
    ans(i);
    return 0;
}
