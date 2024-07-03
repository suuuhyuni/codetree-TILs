#include <iostream>

using namespace std;

int main() {

    int a, b, c;
    bool n=false;

    cin>>a>>b>>c;

    for (int i=a; i<=b; i++){

        if (i%c==0){
            n=true;
        }
    }

    if (n==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}