#include <iostream>
#include <string.h>

using namespace std;
//========Stack===========
class Stack_int{
private:
    int Top=-1;       //Top of Stack
    #define size 5    //Stack Size
    int Stack[size];  //Stack


public:

    Stack_int(){
        for(int i=0 ; i<size ;i++)
            Stack[i]=NULL;
    }

    void Push(int a){
        if(Top==size-1) cout << "The Stack is OverFlow "<< endl;
        else {
        Top++;
        Stack[Top]=a;
        cout << "Push : " <<a<< endl;
        }

    }

    int Pop(){
        if(Top==-1) cout << "The Stack is UnderFlow "<< endl;
        else{
        int ret = Stack[Top];
        cout << "Pop : " <<Stack[Top]<< endl;
        Stack[Top]=NULL;
        Top--;
        return ret;
        }
    }

    void Display(){
        cout << "[ ";
        for(int i=0;i<size;i++){
            cout <<Stack[i]<<" ";
            if(i<size-1)
                cout << ", ";
        }
        cout << "]";

    }

};



class Stack_char{
private:
    int Top=-1;       //Top of Stack
    #define size 5    //Stack Size
    char Stack[size];  //Stack


public:

    Stack_char(){
        for(int i=0 ; i<size ;i++)
            Stack[i]=NULL;
    }

    void Push(char a){
        if(Top==size-1) cout << "The Stack is OverFlow "<< endl;
        else {
        Top++;
        Stack[Top]=a;
        cout << "Push : " <<a<< endl;
        }

    }

    char Pop(){
        if(Top==-1) cout << "The Stack is UnderFlow "<< endl;
        else{
        char ret = Stack[Top];
        cout << "Pop : " <<Stack[Top]<< endl;
        Stack[Top]=NULL;
        Top--;
        return ret;
        }
    }

    void Display(){
        cout << "[ ";
        for(int i=0;i<size;i++){
            cout <<Stack[i]<<" ";
            if(i<size-1)
                cout << ", ";
        }
        cout << "]";

    }

};



class Stack_string{
private:
    int Top=-1;       //Top of Stack
    #define size 5    //Stack Size
    string Stack[size];  //Stack


public:

    Stack_string(){
        for(int i=0 ; i<size ;i++)
            Stack[i]="";
    }

    void Push(string a){
        if(Top==size-1) cout << "The Stack is OverFlow "<< endl;
        else {
        Top++;
        Stack[Top]=a;
        cout << "Push : " <<a<< endl;
        }

    }

    string Pop(){
        if(Top==-1) cout << "The Stack is UnderFlow "<< endl;
        else{
        string ret = Stack[Top];
        cout << "Pop : " <<Stack[Top]<< endl;
        Stack[Top]="";
        Top--;
        return ret;
        }
    }

    void Display(){
        cout << "[ ";
        for(int i=0;i<size;i++){
            cout <<Stack[i]<<" ";
            if(i<size-1)
                cout << ", ";
        }
        cout << "]";

    }

};



class Stack_double{
private:
    int Top=-1;       //Top of Stack
    #define size 5    //Stack Size
    double Stack[size];  //Stack


public:

    Stack_double(){
        for(int i=0 ; i<size ;i++)
            Stack[i]=NULL;
    }

    void Push(double a){
        if(Top==size-1) cout << "The Stack is OverFlow "<< endl;
        else {
        Top++;
        Stack[Top]=a;
        cout << "Push : " <<a<< endl;
        }

    }

    double Pop(){
        if(Top==-1) cout << "The Stack is UnderFlow "<< endl;
        else{
        double ret = Stack[Top];
        cout << "Pop : " <<Stack[Top]<< endl;
        Stack[Top]=NULL;
        Top--;
        return ret;
        }
    }

    void Display(){
        cout << "[ ";
        for(int i=0;i<size;i++){
            cout <<Stack[i]<<" ";
            if(i<size-1)
                cout << ", ";
        }
        cout << "]";

    }

};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//========Queue===========

class Queue_int{
private:
    int Front=-1;
    int Rear=-1;
    #define size 7  //Queue Size
    int Queue[size];

public:
    Queue_int(){
        for(int i=0;i<size;i++)
            Queue[i]=NULL;
    }

    void Push(int a){
        if(Rear==size-1)
            cout<<"Queue is OverFlow "<<endl;
        else if(Front==-1){
            Front++;
            Rear++;
            Queue[Rear]=a;
            cout<<"Push : "<<a<<endl;
        }
        else{
            Rear++;
            Queue[Rear]=a;
            cout<<"Push : "<<a<<endl;
        }
    }

    int Pop(){
        if(Front==-1||Front==size)
            cout<<"Queue is UnderFlow "<<endl;
        else if(Front==Rear){
            int ret=Queue[Front];
            cout<<"Pop : "<<Queue[Front]<<endl;
            Queue[Front]=NULL;
            Front=-1;
            Rear=-1;
            return ret;
        }
        else{
            int ret=Queue[Front];
            cout<<"Pop : "<<Queue[Front]<<endl;
            Queue[Front]=NULL;
            Front++;
            return ret;
        }
    }

    void Display(){
        cout << "[ ";
        for(int i=0;i<size;i++){
            cout <<Queue[i]<<" ";
            if(i<size-1)
                cout << ", ";
        }
        cout << "]";

    }
};


class Queue_char{
private:
    int Front=-1;
    int Rear=-1;
    #define size 7  //Queue Size
    char Queue[size];

public:
    Queue_char(){
        for(int i=0;i<size;i++)
            Queue[i]=NULL;
    }

    void Push(char a){
        if(Rear==size-1)
            cout<<"Queue is OverFlow "<<endl;
        else if(Front==-1){
            Front++;
            Rear++;
            Queue[Rear]=a;
            cout<<"Push : "<<a<<endl;
        }
        else{
            Rear++;
            Queue[Rear]=a;
            cout<<"Push : "<<a<<endl;
        }
    }

    char Pop(){
        if(Front==-1||Front==size)
            cout<<"Queue is UnderFlow "<<endl;
        else if(Front==Rear){
            char ret=Queue[Front];
            cout<<"Pop : "<<Queue[Front]<<endl;
            Queue[Front]=NULL;
            Front=-1;
            Rear=-1;
            return ret;
        }
        else{
            char ret=Queue[Front];
            cout<<"Pop : "<<Queue[Front]<<endl;
            Queue[Front]=NULL;
            Front++;
            return ret;
        }
    }

    void Display(){
        cout << "[ ";
        for(int i=0;i<size;i++){
            cout <<Queue[i]<<" ";
            if(i<size-1)
                cout << ", ";
        }
        cout << "]";

    }
};


class Queue_string{
private:
    int Front=-1;
    int Rear=-1;
    #define size 7  //Queue Size
    string Queue[size];

public:
    Queue_string(){
        for(int i=0;i<size;i++)
            Queue[i]="";
    }

    void Push(string a){
        if(Rear==size-1)
            cout<<"Queue is OverFlow "<<endl;
        else if(Front==-1){
            Front++;
            Rear++;
            Queue[Rear]=a;
            cout<<"Push : "<<a<<endl;
        }
        else{
            Rear++;
            Queue[Rear]=a;
            cout<<"Push : "<<a<<endl;
        }
    }

    string Pop(){
        if(Front==-1||Front==size)
            cout<<"Queue is UnderFlow "<<endl;
        else if(Front==Rear){
            string ret=Queue[Front];
            cout<<"Pop : "<<Queue[Front]<<endl;
            Queue[Front]="";
            Front=-1;
            Rear=-1;
            return ret;
        }
        else{
            string ret=Queue[Front];
            cout<<"Pop : "<<Queue[Front]<<endl;
            Queue[Front]="";
            Front++;
            return ret;
        }
    }

    void Display(){
        cout << "[ ";
        for(int i=0;i<size;i++){
            cout <<Queue[i]<<" ";
            if(i<size-1)
                cout << ", ";
        }
        cout << "]";

    }
};


class Queue_double{
private:
    int Front=-1;
    int Rear=-1;
    #define size 7  //Queue Size
    double Queue[size];

public:
    Queue_double(){
        for(int i=0;i<size;i++)
            Queue[i]=NULL;
    }

    void Push(double a){
        if(Rear==size-1)
            cout<<"Queue is OverFlow "<<endl;
        else if(Front==-1){
            Front++;
            Rear++;
            Queue[Rear]=a;
            cout<<"Push : "<<a<<endl;
        }
        else{
            Rear++;
            Queue[Rear]=a;
            cout<<"Push : "<<a<<endl;
        }
    }

    double Pop(){
        if(Front==-1||Front==size)
            cout<<"Queue is UnderFlow "<<endl;
        else if(Front==Rear){
            double ret=Queue[Front];
            cout<<"Pop : "<<Queue[Front]<<endl;
            Queue[Front]=NULL;
            Front=-1;
            Rear=-1;
            return ret;
        }
        else{
            double ret=Queue[Front];
            cout<<"Pop : "<<Queue[Front]<<endl;
            Queue[Front]=NULL;
            Front++;
            return ret;
        }
    }

    void Display(){
        cout << "[ ";
        for(int i=0;i<size;i++){
            cout <<Queue[i]<<" ";
            if(i<size-1)
                cout << ", ";
        }
        cout << "]";

    }
};



int main()
{
    Queue_int s1;

    s1.Push(1);
    s1.Push(1);
    s1.Push(1);
    s1.Push(1);

    s1.Pop();
    s1.Pop();
    s1.Pop();
    s1.Pop();
    s1.Pop();
    s1.Display();

    return 0;
}
