#include <iostream>
int main(){
 int input=5;
    int i = input/2;
    int c;
    for (i>0; i--;) {
        c= input%i;
        if (c==0 || i == 1)
            std::cout << "not prime" << std::endl;
        else
            std::cout << "prime" << std::endl;
    }
    return 0;
}
