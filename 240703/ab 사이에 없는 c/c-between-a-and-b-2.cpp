#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin>>a>>b>>c;

    bool x=true;

    for (int i=a; i<=b; i++){
        if (c%i == 0)
            x=false;
    }

    if (x==true)
        cout<<"YES";
    else
        cout<<"NO";
    // 여기에 코드를 작성해주세요.
    return 0;
}