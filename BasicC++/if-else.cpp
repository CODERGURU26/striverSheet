#include<bits/stdc++.h>

using namespace std;

int main(){
    // int age;
    // cout<<"Enter Your Age";
    // cin>>age;
    // if(age>=18){
    //     cout<<"You Are Eligible For Voting";
    // }
    // else{
    //     cout<<"You Are Not Eligible For Voting";
    // }

    int marks;
    cout<<"Enter Your Marks:";
    cin>>marks;

    if(marks<=100 && marks>=80){
        cout<<"Grade : A"; 
    }
    else if(marks<=79 && marks>=60){
        cout<<"Grade : B";
    }
    else if(marks<=59 && marks>=40){
        cout<<"Grade : C";
    }
    else if(marks<=40 && marks>=35){
        cout<<"Grade : D";
    }
    else{
        cout<<"Grade : F";
    }
}