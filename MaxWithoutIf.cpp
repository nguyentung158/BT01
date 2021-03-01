#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    double c = 1.0*(a+b)/2;
    double d = 1.0*abs(a-b)/2;
    cout << c+d;
    return 0;
}
