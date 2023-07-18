#include<iostream>
#include<string.h>
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
    public:
    Hostel(){
        start = NULL;
    }

};

int main(){
    

}