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
    string password, user_name, s_name, c_name, h_start_date;
    int h_fee, c_roll;
    char c;
    public:
    Hostel(){
        start = NULL;
        password = user_name ="";
        c = '\0';
    }
    void Password(){
        cout<<"Please Enter User Name: ";
        getline(cin,user_name);
        if(user_name == "saudattari"){
            cout<<"Enter Password: ";
            for(int i=0 ;i<8; i++){
                
                if(c == 13){
                    //means it press enter
                i--;
                }
                else if(c == 8){
                    i--;
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
    bool login() {
        if(password == "66666666"){
            return true;
        }
        else{
            return false;
        }
    }

    void Add_info(){
        cout<<"Enter student name: ";
        cin>>s_name;
        cout<<"Enter College Name: ";
        cin>>c_name;
        cout<<"Enter hostel addmission date: ";
        cin>>h_start_date;
        cout<<"Enter Hostel fee: ";
        cin>>h_fee;
        cout<<"Enter college roll No: ";
        cin>>c_roll;
    }
    
};

int main(){
    

}