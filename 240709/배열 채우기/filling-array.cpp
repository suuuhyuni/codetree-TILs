#include <iostream>
using namespace std;

int main() {

    int num[10];
    int cnt=0;

    for (int i=0; i<10; i++){
        cin>>num[i];

        if (num[i]==0){
            break;
        }

        cnt++;

    }
    
    for (int n=cnt;n>0; n--){
        cout<<num[n-1]<<" ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}