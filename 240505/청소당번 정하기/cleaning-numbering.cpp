#include <iostream>

using namespace std;

int main() {
    int n, i, cnt1=0, cnt2=0, cnt3=0;

    cin>>n;

    for (i=1; i<=n; i++){
        if (i%2==0){
            if (i%12==0){
                cnt3++;
            }
            else if (i%3==0){
                cnt2++;
            }
            else{
                cnt1++;
            }
        }

        else if (i%3==0){
            if (i%12==0){
                cnt3++;
            }
            else{
                cnt2++;
            }
        }

        else if (i%12==0){
            cnt3++;
        }
    }
        
    cout<<cnt1<<" "<<cnt2<<" "<<cnt3;

    // 여기에 코드를 작성해주세요.
    return 0;
}