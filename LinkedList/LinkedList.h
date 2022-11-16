#pragma once
#include <iostream>
#include "Node.h"

using namespace std;

template<class T>
class List{
private:
    Node<T>* head;
public:
    List(){
        head=0;
    }
    void push(T data){
        Node<T>* n=new Node<T>;
        n->data=data;
        n->next=0;
        if(head==0){
           head=n; 
        }
        else{
            Node<T>* p=head;
            while (p->next!=0)
            {
                p=p->next;
            }
            p->next=n;
        }
    }
    void print(){
        Node<T>* p=head;
        while(p!=0){

            cout << p->data << " ";
            p=p->next;
        }
    }
    void insert(T data, int pos){
        Node<T>* n=new Node<T>;
        n->data=data;
        if(pos==1){
            n->next=head;
            head=n;
        }
        else{
            Node<T>* p=head;
            // di den phan tu truoc pos
            for(int i=1;i<pos-1;i++){
                p=p->next;
            }
            n->next=p->next;
            p->next=n;
        }
    }
    void del(int pos){
        
        if(pos==1){
            Node<T>* q=head;
            head=head->next;
            delete q;
        }
        else{
            Node<T>* p=head;
            // di den phan tu truc pos
            for(int i=1;i<pos-1;i++){
                p=p->next;
            }
            Node<T> * q=p->next;
            p->next=q->next;
            delete q;
        }
    }
    bool isEmpty(){
        return head;
    }
    void update(T data, int pos){
       
        if(pos==1){
            head->data=data;;
        }
        else{
            Node<T>* p=head;
            //Di top pos
            for(int i=1;i<pos;i++){
                p=p->next;
            }
            p->data=data;
        }
    }
    int size(){
        Node<T>* p=head;
        int dem=0;
        while (p!=0)
        {
            dem++;
            p=p->next;
        }
        return dem;
    }
    int find(T data){
        Node<T>*p=head;
        int pos=-1;
        while (p->data!=data)
        {
            p=p->next;
            pos++;
        }
        return pos;
    }
};