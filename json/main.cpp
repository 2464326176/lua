/*
 * @Author: yh
 * @Date: 2022/6/29 23:20
 * @Description: 
 * @FilePath: main.cpp
 */

#include <iostream>
#include <string>

using namespace std;
/*
#define and    &&
#define and_eq &=
#define bitand &
#define bitor  |
#define compl  ~
#define not    !
#define not_eq !=
#define or     ||
#define or_eq  |=
#define xor    ^
#define xor_eq ^=
*/

int main() {
    int a = 15, b = 49, c = 100, d = 164;
    bool f = false;
    string str("string");

    if((a > 1 && b < 50)
            && ((c < 110
                    || d > 145)
            || (str == "string" && !f))) {
        printf("ok\n");
    }


    return 0;
}