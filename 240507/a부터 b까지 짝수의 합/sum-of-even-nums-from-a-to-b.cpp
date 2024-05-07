#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin>>a>>b;

    int i, sum=0;

    for (i=a; i<=b; i++){
        if (i%2==0)
            sum+=i;
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}