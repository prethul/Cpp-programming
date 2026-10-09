#include<iostream>
using namespace std; 

int main(){
    

    int english;
    cout<<"Enter your english marks :";
    cin>>english;

    int math;
    cout<<"Enter your math marks :";
    cin>>math;

    int science;
    cout<<"Enter your science marks :";
    cin>>science;

    int avg = (english + math + science)/3;
    cout<<"Here is the avearge marks :"<<avg<<endl;

    return 0;
}