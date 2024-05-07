#include <iostream>

using namespace std;

int main() {

    int n, i, sum=0, cnt=0;

    for (i=0; i<10; i++){
        cin>>n;

        if (n>=0 && n<=200){
            sum+=n;
            cnt++;
        }
    }

    cout.precision(1);
    cout<<fixed;

    double mean=(double)sum/cnt;

    cout<<sum<<" "<<mean;
    // 여기에 코드를 작성해주세요.
    return 0;
}