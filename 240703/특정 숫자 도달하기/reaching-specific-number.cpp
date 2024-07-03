#include <iostream>
using namespace std;

int main() {
    int ar[10];
    int sum=0, cnt=0;
    double mean=0;

    cout<<fixed;
    cout.precision(1);

    for (int i=0; i<10; i++){
        cin>>ar[i]; 
    }

    for (int i=0; i<10; i++){
        if (ar[i]>=250){
            break;
        }
        sum+=ar[i];
        cnt++;
    }

    mean=(double)sum/cnt;
       

    cout<<sum<<" "<<mean;

    // 여기에 코드를 작성해주세요.
    return 0;
}