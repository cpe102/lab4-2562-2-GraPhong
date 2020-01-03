#include<iostream>
using namespace std;

int findDivior(int x){
    int i=2;
    while(i <= x){
        if(x%i ==0){
            return i;
        }else{
            i = i+1;
        }
    }   
}

int main ()
{
    int x;
    cout<<"Enter number = ";
    cin>>x;
    cout << "Result = "<<findDivior(x);
    return 0;
}


