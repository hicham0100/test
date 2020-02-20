#include <iostream>
using namespace std;
class A {
    int a;
    public:
        virtual char getValue() const {
            return 'a';
        }
        void aff(){cout << 22;}
        virtual ~A() {}
};

class B : public A {

        virtual char getValue()  {
            return 'b';
        }
};


int main() {
    cout << sizeof(A) << endl;
    cout << sizeof(B) << endl;
}
