#include<bits/stdc++.h>
using namespace std;
#define PU 3.14

int score = 0; // globle variable

 inline void  fun1(){
    cout << score << endl;
    score++;
    cout <<  " One" << endl;
}

void  fun2(){
    cout << score << endl;
    score++;
    cout <<  " Two" << endl;
}
void  fun3(){
    cout << score << endl;
    score++;
    cout <<  " three" << endl;
}
int main()
{
    // double area = PU * 5 * 5;
    // cout << area;

    fun1();
    fun2();
    fun3();
    return 0;
}