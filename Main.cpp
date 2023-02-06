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
        void Pop(){
            if(top<=0){
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

int main() {
    Stack<int> stack(10);
    stack.Push(5);
    cout<<stack.Peep()<<endl;
    stack.Pop();
    cout<<stack.Peep()<<endl;
    
    Stack<string> stack_2(10);
    stack_2.Push("Shivam");
    cout<<stack_2.Peep();

    Stack<double> stack_3(1);
    stack_3.Push(20.00);
    stack_3.Push(10.00);
    cout<<stack_3.Peep();
    return 0;
}
