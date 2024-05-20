#include <iostream>

using namespace std;

int main() {
    int n;

    cin>>n;

    int cnt=0;
    int div = n;
    for (int i=1; i<=n; i++){
        div = div/i;
        cnt++;
        if (div>1){
            
            continue;
        }
        else
            break;
    }
    cout<<cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}