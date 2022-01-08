/*
 * @Author: benjie
 * @Date: 2022-01-08 20:57:31
 * @LastEditTime: 2022-01-08 21:07:10
 * @LastEditors: benjie
 * @Description: 
 */
#include<iostream>

using namespace std;
extern int ext; // 未被const修饰
extern int ext_const; // cosnt 修饰
int main() {
    cout << (ext + 10) << endl;
    cout << ext_const << endl;
}