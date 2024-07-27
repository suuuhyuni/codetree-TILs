#include <iostream>
using namespace std;

int main() {

    int num[10];
    int even=0, odd=0;
    int sub=0;

    for (int i=0; i<10; i++){
        cin>>num[i];
    }

    for (int i=0; i<10; i++){
        if (i%2==1){
            even+=num[i];
        }
        else{
            odd+=num[i];
        }
    }

    if (even>odd)
        sub=even-odd;
    else
        sub=odd-even;
    
    cout<<sub;
    // 여기에 코드를 작성해주세요.
    return 0;
}