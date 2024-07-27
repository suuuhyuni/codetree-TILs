#include <iostream>
using namespace std;

int main() {

    int num[10];
    int sum=0, cnt=0;

    for (int i=0; i<10; i++){
        cin>>num[i];
    }

    for (int i=0; i<10; i++){
        if (num[i]==0)
            break;
        
        if (num[i]%2 == 0){
            sum+=num[i];
            cnt++;
        }

    }

    cout<<cnt<<" "<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}