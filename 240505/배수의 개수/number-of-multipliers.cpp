#include <iostream>

using namespace std;

int main() {
    int n, i, cnt1=0, cnt2=0;

    for (i=0; i<10; i++){
        cin>>n;

        if (n%3==0){
            cnt1++;
        }

        if (n%5==0){
            cnt2++;
        }
    }
    cout<<cnt1<<" "<<cnt2;
    // 여기에 코드를 작성해주세요.
    return 0;
}