#include <iostream>
using namespace std;


class Insertion{
    private:
    int arr[10] , pos , num;
    public:
    Insertion(){
        for(int i=0; i<10; i++)
        arr[i] = 0;
        pos = 0;
    }
    void input(){
        cout << "Enter 10 numbers in arr: ";
        for(int i=0; i<10; i++)
        cin>>arr[i];
        cout<<"Enter one number you wish to insert: ";
        cin>>num;
        cout<<"Enter location where you want to insert number: ";
        cin>>pos;
    }
    void insrt(){
        cout<<"Before adding number array looks like:";
        for(int i=0; i<10; i++)
        cout<<arr[i]<<" ";
        cout<<endl<<endl;
        arr[pos] = num;
        cout<<"After adding number array looks like:";
        for(int i=0; i<10; i++)
        cout<<arr[i]<<" ";
    }  

};
int main(){
    Insertion obj;
    obj.input();
    obj.insrt();
    return 0;
}