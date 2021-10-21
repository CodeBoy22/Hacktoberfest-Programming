#include <stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;


void update(int *a,int *b) {
    // Complete this function
    
    int an,bn;
    an = *a+*b;
    bn = *a-*b;
    bn = abs(bn);
    cout<<an<<endl<<bn<<endl;
    
    
    
    
    
     
       
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    cin>>a>>b;
    update(pa, pb);
   


    return 0;
}
