#include <iostream>
using namespace std;

int main() {
    int ar[10];
    int sum=0;

    for (int i=0; i<10; i++){
        cin>>ar[i];
        sum+=ar[i];
    }
    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}