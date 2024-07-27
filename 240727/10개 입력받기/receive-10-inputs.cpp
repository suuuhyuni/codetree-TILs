#include <iostream>
using namespace std;

int main() {
    int num[10];
    int sum=0, cnt=0;
    double avg=0;

    cout.precision(1);
    cout<<fixed;


    for (int i=0; i<10; i++){
        cin>>num[i];
    }

    for (int i=0; i<10; i++){
        if (num[i]==0)
            break;
        
        sum+=num[i];
        cnt++;
    }

    avg = (double)sum/cnt;

    cout<<sum<<" "<<avg;
    // 여기에 코드를 작성해주세요.
    return 0;
}