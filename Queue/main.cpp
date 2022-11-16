#include<iostream>
#include"Queue.h"

using namespace std;

int main(){
    Queue<int> q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.print();  
    cout<<endl<<q.size()<<endl; 
 
}