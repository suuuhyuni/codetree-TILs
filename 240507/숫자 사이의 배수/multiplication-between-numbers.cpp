#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin>>a>>b;

    int i;
    int sum=0, cnt=0;
    double mean;

    cout.precision(1);

    cout<<fixed;

    for (i=a; i<=b; i++){
        if (i%5 == 0 || i%7 == 0){
            sum+=i;
            cnt++;
        }
    }

    mean=(double)sum/cnt;

    cout<<sum<<" "<<mean;
    // 여기에 코드를 작성해주세요.
    return 0;
}