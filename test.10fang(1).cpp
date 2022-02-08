#include <iostream>
using namespace std;

//定义一个加法函数
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main1()
{
    int a = 10;
    int b = 20;

    //函数调用语法：函数名称（参数）
    int c = add(a, b);

    cout << "c = " << c << endl;

    a = 100;
    b = 500;
    c = add(a, b);
    cout << "c = " << c << endl;


    system("pause");

    return 0;
}