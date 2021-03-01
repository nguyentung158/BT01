#include<iostream>
using namespace std;
int main(){
    int a[5];
    for(int i =1; i<=5;i++){
    cin >> a[i];
}
    for(int i =1;i<=5;i++){
        int lon =0;
        int be =0;
        for(int j =1;j<=5;j++){
            if(a[j] > a[i]) be ++;
            else if(a[i] > a[j]) lon++;
        }
        if(lon ==2 &&  be == 2){
            cout << a[i];
            return 0;
        }
    }
}
