#include <iostream>
using namespace std;

int main() {

    int num[10];

    for (int i=0; i<10; i++){
        cin>>num[i];
    }

    int sum=0;

    sum=num[2]+num[9]+num[4];

    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}