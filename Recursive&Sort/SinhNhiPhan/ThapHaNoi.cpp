#include <iostream>

using namespace std;

void ThapHaNoi(int n,char c1,char c2,char c3){
    if(n==1){
        cout << c1 << " --> " <<c3<<endl;
    }
    else{
        ThapHaNoi(n-1,c1,c3,c2);
        ThapHaNoi(1,c1,c2,c3);
        ThapHaNoi(n-1,c2,c3,c1);
    }
}
int main(){
    ThapHaNoi(3,'A','B','C');
}