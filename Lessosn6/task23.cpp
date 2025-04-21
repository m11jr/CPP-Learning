#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int a;
    cin>>a;
    int First = a/10000;
    int Second = (a%10000)/1000;
    int Third = (a%1000)/100;
    int Fourth = (a%100)/10;
    int Fifth = a%10;
    
   /* if(First==Second || First==Third || First == Fourth || First ==Fifth || Second == Third || Second == Fourth || Second == Fifth || Third == Fourth || Third == Fifth || Fourth ==Fifth ){
        cout<<"Identical Digits Found"<<endl;
    } else {
        cout<<"No Identical Digits"<<endl;
    }
        */


        if(First == Second){
      
        }
    
    return 0;
}
