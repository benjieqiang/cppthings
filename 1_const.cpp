/*
 * @Author: benjie
 * @Date: 2022-01-08 20:51:50
 * @LastEditTime: 2022-01-08 22:10:42
 * @LastEditors: benjie
 * @Description: 
 */
#include<iostream>

using namespace std;

// void testConst1() {
//     const int a = 100;
//     a = 29; //error: assignment of read-only variable 'a'

//     const int i, j = 0; //error: uninitialized const 'i' [-fpermissive]
// }

// void testConstAndPointer() {
//     int val = 199;
//     const int * a; 
//     // *a = 100; //error: assignment of read-only location '* a'
//     // 虽然不能给*a，即a所指向的对象（常量）赋值，
//     cout << a << endl; //0
//     cout << "非const对象的地址赋给指向const对象的指针。" << endl;
//     a = &val; //非const对象的地址赋给指向const对象的指针。
//     cout << a << endl;//0x61fdd4
//     cout << *a << endl;//199
//     cout << "测试通过改变a的指向来改变val的值" << endl;
//     int val2 = 200;
//     a = &val2;
//     cout << a << endl;//0x61fdd0
//     cout << *a <<endl;//200
//     cout << val << endl;//199
//     // int const * b; //同上

//     cout << "常指针" << endl;
//     int val3 = 20;
//     int * const c = &val3;
//     cout << c << endl; //0x61fdcc
//     cout <<"改变常指针的内容"<< endl;
//     // c = &val2; // error: assignment of read-only variable 'c'
//     cout << *c <<endl; //20
//     cout << "改变常指针指向变量val3的内容" << endl;
//     cout <<"before" << endl;
//     cout <<val3 <<","<< *c << endl;//20,20
//     cout << "after" << endl;
//     *c = 299;
//     cout <<val3 <<","<< *c << endl;//299,299
//     cout << "指向常量的常指针" <<endl;
//     const int p = 21;
//     const int * const d = &p;
//     cout << d << endl;// d首先是一个const指针，不能修改其内容，然后他指向的内容是一个const对象，不能修改；
//     //0x61fdc8
// }
// const string &mainip() {
//     string ret;
//     //todo
//     if (!ret.empty()) return ret;
//     // warning: reference to local variable 'ret' returned [-Wreturn-local-addr]

//     return "empty";
//     // warning: returning reference to temporary [-Wreturn-local-addr]
// }
// void testConstInFunc() {
//     // mainip();

// }

class Apple {

public:
    Apple(int i) : apple_number(i) {};

    const int apple_number;
    static const int people_nubmer;
    int aa = 10;

    void take(int num) const {
        cout << "exe take const func :"<< num << endl;
    };
    int add(int num) {
        cout << "exe add func :"<< num << endl;
        return num;
    };
    int add(int num) const{
        cout << "exe add const func :"<< num << endl;
        return num;
    };
    int getCount() const {
        cout << "exe getConst func " << endl;
        return apple_number;
    };
};
// 如果要想在类外初始化，需要在类内const变量加static
// static const int apple_nubmer;
const int Apple::people_nubmer = 200;


void testConstClass() {
    Apple ap(20);
    cout << ap.getCount() << endl;
    const Apple ap2(230);
    cout << ap2.aa << endl; 
}

int main() {
    // testConst1();
    // testConstAndPointer();
    // testConstInFunc();
    testConstClass();
    return 0;
}