#include <iostream>
using namespace std;

int main() {
    int num[10];
    int sum1=0, cnt=0;
    double sum2=0,avg=0;

    for (int i=0; i<10; i++){
        cin>>num[i];

        if (i%2==1){
            sum1+=num[i];
        }

        if (i%3==2){
            sum2+=num[i];
            cnt++;
        }
    }

    cout.precision(1);
    cout<<fixed;

    avg=sum2/cnt;

    cout<<sum1<<" "<<avg;

    // 여기에 코드를 작성해주세요.
    return 0;
}