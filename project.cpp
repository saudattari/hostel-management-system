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
    string password, user_name, s_name, c_name, h_start_date, c_subject;
    int h_fee, c_roll,c_semester;
    char c;
    public:
    Hostel(){
        start = NULL;
        password = user_name = s_name = c_name = h_start_date = c_subject ="";
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
        cin>>s_name;
        cout<<"Enter College Name: ";
        cin>>c_name;
        cout<<"Enter hostel addmission date: ";
        cin>>h_start_date;
        cout<<"Enter Hostel fee: ";
        cin>>h_fee;
        cout<<"Enter college roll No: ";
        cin>>c_roll;
        cout<<"Enter your College semester: ";
        cin>>c_semester;
        cout<<"Enter your Subject: ";
        cin>>c_subject;
    }

    void linked_list(){
        node* p = new node();
        p->student_name = s_name;
        p->college_name = c_name;
        p->college_roll = c_roll;
        p->hostel_fee = h_fee;
        p->hostel_starts = h_start_date;
        p->next = NULL;
        if(start == NULL){
            start = p;
        }
        else{
            node* cur = start;
            while(cur->next != NULL){
                cur = cur->next;
            }
        }
    }
    
};

int main(){
    

}