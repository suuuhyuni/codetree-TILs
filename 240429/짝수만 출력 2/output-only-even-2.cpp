#include <iostream>

using namespace std;

int main() {
    int a, b, n;

    cin>>b>>a;

    n=b;

    while (n>=a && n<=b){
        if (n%2==0){
            cout<<n<<" ";
            n-=2;
        }
        else{
            n--;
            cout<<n<<" ";
            n-=2;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}