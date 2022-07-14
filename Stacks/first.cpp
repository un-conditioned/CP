#include<iostream>
#include<string>
using namespace std;

class Stack
{
    private :
    int top;
    int arr[5];

    public:
    Stack (){
        top = -1;
        for(int i= 0;i<5;i++){
            arr[i] = 0;

        }
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else 
            return false;
    }

    bool isFull()
    {
        int max = sizeof(arr)/sizeof(arr);
        if (top == max)
            return true;
        else    
            return false;
    }

    void push(int val){
        if(isFull()){
            cout<< " Stack Overflow "<<endl;
        }
        else{
            top++;
            arr[top]=val;
        }
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            int popValue = arr[top];
            arr[top]=0;
            top--;
            return popValue;
        }
    }
    int count(){
        return top+1 ;
    }
    int peek(int pos){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            return arr[pos];
        }
    }
    void change(int pos, int val){
        arr[pos]=val;
        cout<<" The value at position ["<<pos<<"] is changed to "<< val;

    }
    void display(){
        int max = sizeof(arr)/sizeof(arr);
        cout<<" The values in the stack are :"<<endl;
        for (int i=0 ;i<max;i++)
            cout<<arr[i]<<endl;
         }

};
int main(){
    Stack s1;
    int option, position, value;
    do{
        cout<<" What operation do you want to perform ? Enter zero to exit."<<endl;
        cout<<"1.Push()"<<endl;
        cout<<"2.Pull()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.peek()"<<endl;
        cout<<"6.count()"<<endl;
        cout<<"7.change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. Clear Screen"<<endl;

        cin>>option;
        switch(option){
            case 1:
                cout<<"Enter an item to push :"<<endl;
                cin>>value;
                s1.push(value);
                break;
            case 2:
                cout<<" Pop funcitno called.  Value popped out is "<<s1.pop()<<endl;
                break;
            case 3:
                if (s1.isEmpty())
                    cout<<"Stack is empty";
                else    
                    cout<<" NOt empty";
                break;
            case 4:
                if (s1.isFull())
                    cout<<"Stack is full";
                else    
                    cout<<" NOt Full";
                    break;
            case 5:
                cout<< " Enter the positon you want to peek "<<endl;
                cin>>position;
                cout<<" THe value is = "<< s1.peek(position)<< " at position "<<position<<endl;
                break;
            case 6:
                cout<< "The number of elements in the stack is :"<<s1.count()<<" . "<<endl;
                break;
            case 7:
               cout<<"Enter the postion of stack to be changed : " ;
               cin>>position;
               cout<<" Enter the value at that position : ";
               cin>>value;
               
                
            case 8:
                cout <<" The elements of the stack from bottom to top are :"<<endl;
                s1.display();
                break;



        }

    }
}




};