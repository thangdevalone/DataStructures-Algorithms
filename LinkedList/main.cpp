#include <iostream>
#include "Linkedlist.h"
using namespace std;

int main()
{

    List<int> ds;

    ds.push(1);
    ds.push(2);
    ds.push(3);
    ds.push(4);
    ds.insert(4, 3);
    cout << "ds: "; ds.print(); cout<< endl;
    ds.del(3);
    ds.update(5,4);
    cout << "ds: "; ds.print() ;cout<< endl;
    cout << ds.find(5)<<"-"<<ds.size()<<endl;
}