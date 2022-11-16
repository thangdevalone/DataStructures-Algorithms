#include <iostream>
#include "Stack.h"

using namespace std;

int main(){
    Stack<int> st;

    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.print();
    cout <<endl;
    st.pop();
    st.print();
    st.push(5);
    cout <<endl;
    st.print();
    cout << st.size()<<endl;


}