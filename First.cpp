#include <iostream>
using namespace std;

class Time {
    public:
            int hour=0;
            int minute=0;
    public:
/*          Time() {
                 hour=12;
                    minute=30;
            } */
            Time(int h, int m) : hour(h),minute(m){} 
//             hour = h;
//             minute = m;
//            }
            void print() {
                    cout << hour << ":" << minute << endl;
            }
};

            int main(){
            Time* T = new Time(12,30);
            T->print();
            delete T;
            }