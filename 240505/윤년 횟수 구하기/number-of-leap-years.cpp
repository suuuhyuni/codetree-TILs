#include <iostream>

using namespace std;

int main() {
    int n, i, cnt1=0, cnt2=0;

    cin>>n;

    for (i=1; i<=n; i++){
        if (i%4==0){
            if ((i%100==0)&&(i%400!=0))
                cnt2++;
            else
                cnt1++;
        }
        else 
            cnt2++;
    }

    cout<<cnt1;
    // 여기에 코드를 작성해주세요.
    return 0;
}