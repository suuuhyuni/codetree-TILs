#include <iostream>
using namespace std;

int main() {

    int n;
    double sum=0;
    double mean=0;

    cin>>n;

    cout<<fixed;
    cout.precision(1);

    double score[n];
    for (int i=0; i<n; i++){
        cin>>score[i];
        sum+=score[i];
        
    }

    mean=sum/n;

    cout<<mean<<endl;

    if (mean>=4.0)
        cout<<"Perfect";
    else if (mean>=3.0)
        cout<<"Good";
    else
        cout<<"Poor";
    // 여기에 코드를 작성해주세요.
    return 0;
}