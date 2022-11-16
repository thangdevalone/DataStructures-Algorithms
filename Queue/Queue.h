#pragma once

#include "Node.h"
#include <iostream>

using namespace std;

template<class T>
class Queue
{
private:
    Node<T> *head;
    Node<T> *tail;
public:
    Queue() {
        head=tail=0;
    }
    void enqueue(T data){
        Node<T> *n=new Node<T>;
        n->data=data;
        n->next=0;
        if(head==0){
            head=tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }
    T dequeue(){
        Node<T> * q=head;
        T res=head->data;
        head=head->next;
        delete q;
        if(head==0){
            tail=0;
        }
        return res;
    }
    bool isEmpty(){
        return head;
    }
    T getHead(){
        return head->data;
    }
    int size(){
        Node<T>*p=head;
        int dem=0;
        while (p!=0)
        {
            dem++;
            p=p->next;
        }
        return dem;
    }
    void print(){
        Node<T>*p=head;
        while (p!=0)
        {
            cout << p->data<< " ";
            p=p->next;
        }
        
        // for(Node<T>* p=head;p!=tail;p=p->next){
        //     cout << p->data<< " ";
        // }
    }
};