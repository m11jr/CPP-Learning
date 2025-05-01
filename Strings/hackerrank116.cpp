#include <iostream>
#include <cstring> // in char strings
#include <string>  // in normal string
#include <iomanip>

using namespace std;

int main(){

// char arr[] ={"Hello World"};
// cout<<arr<<endl;  // compilator understands that we want our char to be seen in one hand

// stil we can use for loop for that

// cout<< "C is is alphateic : "<<isalpha('9')<<endl;
// cout<< "C is is alphateic : "<<isalpha('A')<<endl;


// cout<< "C is is alphanumeric : "<<isalnum('9')<<endl;
// cout<< "C is is alphateic : "<<isalnum('A')<<endl;
// cout<< "C is is alphateic : "<<isalnum('-')<<endl;

// aplha only check its  alphaetic, alnum checks whether it is numerical or alphetic

//Checkin whether char is blank
system("clear");
char message[]= {"Hello World. This my cpp code!. There is more than 30 chars here. There will be 5 or 10 more then."};
int blankCount(0);
int lowCount(0);
int upCount(0);
int numCount(0);
char uppermessage[sizeof(message)];
char lowermessage[sizeof(message)];
for(size_t i =0; i<sizeof(message)/sizeof(message[0]);++i){
    if(isblank(message[i])){
        
        cout<<i<< " index is the blank char"<<endl;
        blankCount++;
    }
    if(islower(message[i])){
        lowCount++ ;
    } else if(isupper(message[i])) {
        upCount++;
    } 
    

    if(isdigit(message[i])){
numCount++;
    }
    uppermessage[i]=toupper(message[i]);
    lowermessage[i]=tolower(message[i]);

}
cout<<message<<endl;
cout<<"Total number of Blank Chars : "<<blankCount<<endl;
cout<<"Total number of Up Chars : "<<upCount<<endl;
cout<<"Total number of Low Chars : "<<lowCount<<endl;
cout<<"Total number of Digit Chars : "<<numCount<<endl;
cout<<uppermessage<<endl;
cout<<lowermessage<<endl;

//---------------------------
const char msg[]={"The"};
//msg[1]="t"; because of const char

const char *message2 = {"The sky is blue"};




char lengthmsg[]= "Here our Message."; // Here Our Message.\0 it finished like that because of knowthing where our string char ends
cout<<strlen(lengthmsg);

}