#include <iostream>
using namespace std;

int main() {
    double score[8];
    double sum=0;
    double mean=0;

    for (int i=0; i<8; i++){
        cin>>score[i];
        sum+=score[i];
    }

    cout<<fixed;
    cout.precision(1);

    mean=sum/8;

    cout<<mean;
    // 여기에 코드를 작성해주세요.
    return 0;
}