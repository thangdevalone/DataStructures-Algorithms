#pragma once
#include "Node.h"
using namespace std;
template<class T>
class Stack
{
private:
    Node<T>* top;
public:
    Stack() {
        top=0;
    }
    void push(T data){
        Node<T>* n=new Node<T>;
        n->data=data;

        if(top==0){
            n->next=0;
        }
        else{
            n->next=top;
        }
        top=n;

    }
    T pop(){
        T res=top->data;
        Node<T>* q=top;
        top=top->next;
        delete q;
        return res;
    }
    void print(){
        Node<T>* p=top;
        while (p!=0)
        {
            cout << p->data<<" ";
            p=p->next;
        }
    }
    bool isEmpty(){
        return top;
    }
    T getTop(){
        return top->data;
    }
    int size(){
        int dem=1;
        Node<T>* p=top;

        while (p->next!=0)
        {
            p=p->next;
            dem++;
        }
        return dem;
    }

};