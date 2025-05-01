#include <iostream>
using namespace std;

void maxStr(const string &str1,const string &str2,string &output){
    if(str1>str2){
        output=str1;
    }else{
        output=str2;
    }
    cout<<output<<endl; 
}



int main(){
    // int x = 5;
    // const int &rx=x;

    // x=20;
    // cout<<rx<<endl // 20
    // //rx=30 will give error because we cannot change rx because of const int


string output;
string input1("Baku");
string input2("Yevlax");
maxStr(input1,input2,output);

}