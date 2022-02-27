#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;
int main(){
    time_t timer;
    tm *times;
    while (true){
        timer = time(NULL);
        times = localtime(&timer);
        cout<<times->tm_hour;
        cout<<":"<<times->tm_min;
        cout<<":"<<times->tm_sec;
        system("cls");


    }
}
