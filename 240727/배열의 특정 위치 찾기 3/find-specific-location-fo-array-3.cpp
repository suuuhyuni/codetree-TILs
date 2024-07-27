#include <iostream>
using namespace std;

int main() {

    int num[100];
    int sum=0;

    for (int i=0; i<100; i++){
        cin>>num[i];
    }

    for (int i=0; i<100; i++){
        if (num[i]==0){
            sum=num[i-1]+num[i-2]+num[i-3];
            break;
            
        }
        
    }

    cout<<sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}