#include <iostream>
#include <cstdarg>
using namespace std;


void func(int num,...){
    va_list args;

    va_start(args, num);   // 함수의 첫번째 인자 주소를 찾아줌
    for(int i=0; i< num; i++){
        auto ans = va_arg(args, const char*); // 함수의 두번째 인자부터 출력
        cout << ans << endl;
    }
    va_end(args);
}


int main() {
    func(3, "abc ", "def ", "hjk ");
    return 0;
}
