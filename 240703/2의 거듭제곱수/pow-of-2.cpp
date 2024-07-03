#include <iostream>

using namespace std;

int main() {

    int n;

    cin>>n;

    int cnt=0, x=n;

    while (x!=1){
        
        x=x/2;

        cnt++;
    }

    cout<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}