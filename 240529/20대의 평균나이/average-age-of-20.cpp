#include <iostream>

using namespace std;

int main() {

    int age;
    int sum=0, cnt=0;

    cout<<fixed;
    cout.precision(2);

    while (true){
        cin>>age;

        if (age>=30)
            break;

        sum+=age;

        cnt++;
    }
    cout<<(double)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}