#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    bool x=false;

    for (int i=2; i<=n-1; i++){
        if (n%i==0){
            x=true;
        }
    }

    if (x==true)
        cout<<"C";
    else
        cout<<"N";
    // 여기에 코드를 작성해주세요.
    return 0;
}