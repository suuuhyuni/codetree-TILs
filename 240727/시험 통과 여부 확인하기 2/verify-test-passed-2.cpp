#include <iostream>
using namespace std;

int main() {

    int stu;

    cin>>stu;

    int grade[4];

    int cnt=0;

    for (int i=0; i<stu; i++){
        int sum=0;
        for (int j=0; j<4; j++){
            cin>>grade[j];

            sum+=grade[j];

        }

        int avg=sum/4;

        if (avg>=60){
            cout<<"pass"<<endl;
            cnt++;
        }
            
        else
            cout<<"fail"<<endl;
        
    }

    cout<<cnt;

    // 여기에 코드를 작성해주세요.
    return 0;
}