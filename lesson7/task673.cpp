#include <iostream>

using namespace std;

int main(){

system("cls");
int number1,number2;
int totalSum1=0;
int totalSum2=0;
cin>>number1>>number2;

for(int i=number1; i<=(number2);i++){
    totalSum1=0;

    for(int j=1;j<=(i/2);j++){
if(i%j==0){
totalSum1+=j;
}
}

for(int b=i+1;b<=(number2);b++){
    totalSum2=0;
   
    for(int k=1;k<=(b/2);k++){
        if(b%k==0){
            totalSum2+=k;
        }
    }


    if (totalSum1 == b && totalSum2==i) {
        cout << "(" << i << ", " << b << ")"<<endl;
    }
}



}
}
