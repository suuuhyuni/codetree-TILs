#include <iostream>

using namespace std;

int main() {
    int a, b, i;

    cin>>a>>b;

    int sum = 0;

    for (i=a ; i<=b; i++){
        sum+=i;
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}