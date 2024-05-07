#include <iostream>

using namespace std;

int main() {
    int n;

    cin>>n;

    int i;
    int a, sum=0;
    for (i=1; i<=n; i++){
        cin>>a;
        sum+=a;
    }

    double mean;

    cout.precision(1);
    cout<<fixed;

    mean=(double) sum / n;

    cout<<sum<<" "<<mean;
    // 여기에 코드를 작성해주세요.
    return 0;
}