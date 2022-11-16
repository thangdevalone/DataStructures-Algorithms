#include <iostream>

using namespace std;

void SinhNhiPhan(int i,int a[100],int n){
 for (int j = 0; j <= 1; j++){
        a[i-1] = j;
        if (i == n){
            for (int i = 1; i <= n; i++)
                cout << a[i-1];
                cout << endl;
        }
        else
            SinhNhiPhan(i + 1,a,n);
    }
}
int main(){
    int a[100];
    SinhNhiPhan(1,a,4);
}