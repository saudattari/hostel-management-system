#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

struct node{
    string student_name, college_name,hostel_starts;
    int hostel_fee, college_roll;
    node* next;
    node(){
        student_name = college_name = hostel_starts ="";
        hostel_fee = college_roll = 0;
        next =  NULL;
    }
};

class Hostel{
    private:
    node* start;
    string password, user_name;
    char c;
    int j;
    public:
    Hostel(){
        start = NULL;
        password = user_name ="";
        c = '\0';
        j=0;
    }
    void password(){
        cout<<"Please Enter User Name: ";
        getline(cin,user_name);
        if(user_name == "saudattari"){
            for(int i=0 ;i<8; i++){
                if(c == 13){
                    //means it press enter
                j--;
                }
                else if(c == 8){
                    j--;
                }
                else{
                c = getch();        // to get input without showing it on screen
                password += c;
                c = '*';
                cout<<c;
                }
            }
        }
    }

};

int main(){


}