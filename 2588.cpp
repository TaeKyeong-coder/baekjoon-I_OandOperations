/*(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다(홈페이지 참고 https://www.acmicpc.net/problem/2588) 

(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.
*/

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    //첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
    cout<<(b%10)*a<<endl;
    cout<<((b%100)/10)*a<<endl;
    cout<<((b%1000)/100)*a<<endl;
    cout<<a*b;
    
    return 0;
}
