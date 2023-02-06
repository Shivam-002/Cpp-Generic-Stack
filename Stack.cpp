#include <iostream>
using namespace std;

template <typename T>
class Stack{
    private:
        T* arr;
        int top;
        int size;   
    public:
        Stack(int size){
            this->size = size;
            arr = new T[size];
            top= -1;
        }
        void Push(T value){
            if(top>=size){
                cout<<"Overflow"<<endl;
            }
            else{
                arr[++top] = value;
            }    
            
        }
        void Change(T value){
            if(top<0){
                cout<<"Stack Empty"<<endl;    
            }else{
                arr[top] = value;    
            }
        }
        void Pop(){
            if(top<0){
                cout<<"Underflow"<<endl;
            }else{
                top--;
            }
        }
        T Peep(){
            if(top<0){
                cout<<"Stack Empty"<<endl;
                return T();
            }else{
                return arr[top];
            }
        }
        bool isEmpty(){
            return top == -1;
        }
};
