#include <iostream>
using namespace std;

//����һ���ӷ�����
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main1()
{
    int a = 10;
    int b = 20;

    //���������﷨���������ƣ�������
    int c = add(a, b);

    cout << "c = " << c << endl;

    a = 100;
    b = 500;
    c = add(a, b);
    cout << "c = " << c << endl;


    system("pause");

    return 0;
}