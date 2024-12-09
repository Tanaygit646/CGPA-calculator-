#include<iostream>
using namespace std;

int main(){
    int numOfSems;
    cout<<"Enter your number of semester:-";
    cin>>numOfSems;
    if(numOfSems <= 0){
        cout<<"enter invalid details"<<endl;
    }

    float sgpa;
    float totalgpa;
    for(int i=1 ; i<=numOfSems ; i++){
        while(true){
        cout<<"enter your sgpa of sem"<<i<<"(0-10):-";
        cin>>sgpa;
        if(sgpa>=0 && sgpa<=10){
            totalgpa += sgpa; 
            
            break;
        }else{
            cout<<"enter valid value"<<endl;
        }
        
    }
    
    }
    cout<<"your CGPA score is:-"<<(totalgpa/numOfSems)<<endl;
    cout<<"thank you"<<endl;
    return 0;
}