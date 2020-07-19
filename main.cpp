#include <iostream>
//задача: накапливать в переменной результат вычислений
using namespace std;

int32_t total_value(int32_t);

int main()
{
    cout << "Hello World!" << endl;

    cout << "total_result (1) = " << total_value(1)<< endl;
    cout << "total_result (2) = " << total_value(2)<< endl;
    cout << "total_result (3) = " << total_value(3)<< endl;
    cout << "total_result (4) = " << total_value(4)<< endl;
    cout << "total_result (5) = " << total_value(5)<< endl;
    cout << "total_result (6) = " << total_value(6)<< endl;
    return 0;
}

int32_t total_value(int32_t added_amount)
{
    //без static все переменные функции уничтожаются и результирующее число не хранится
    //static делает переменную глобальной, но при этом скрыта
    //внутри функиии, чтобы не возникали одинаковые переменные и тд
    static int32_t total_result =0;
    total_result += added_amount;
    return total_result;
}
