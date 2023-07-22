#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

struct node{
    string student_name, college_name,hostel_starts,fee_status;
    int hostel_fee, college_roll;
    node* next;
    node(){
        student_name = college_name = hostel_starts = fee_status ="";
        hostel_fee = college_roll = 0;
        next =  NULL;
    }
};

class Hostel{
    private:
    node* start;
    string password, user_name, s_name, c_name, h_start_date, c_subject, f_status;
    int h_fee, c_roll,c_semester;
    char c;
    public:
    Hostel(){
        start = NULL;
        password = user_name = s_name = c_name = h_start_date = c_subject = f_status ="";
        c = '\0';
        h_fee = c_roll = c_semester = 0;
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
        getline(cin,s_name);
        cout<<"Enter College Name: ";
        getline(cin,c_name);
        cout<<"Enter hostel addmission date: ";
        getline(cin,h_start_date);
        cout<<"Enter your Subject: ";
        getline(cin,c_subject);
        cout<<"Enter fee status: ";
        getline(cin, f_status);
        cout<<"Enter Hostel fee: ";
        cin>>h_fee;
        cout<<"Enter college roll No: ";
        cin>>c_roll;
        cout<<"Enter your College semester: ";
        cin>>c_semester;
    }
    
};

int main(){
    

}