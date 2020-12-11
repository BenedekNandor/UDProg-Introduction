#include "std_lib_facilities.h"

const int sz =  10;
int ga[sz] {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(int x[], int n)
{
    int la[10];
    for (int i = 0; i < 10; ++i) la[i] = ga[i];     
    
    for (int i = 0; i < 10; ++i) {  
        if (i != 9) {
            std::cout << la[i] << ", ";
        }
        else {
            std::cout << la[i] << std::endl;
        }
    }
    
    int *p = new int [n];   
    int *p1 = p;     
    for (int i = 0; i < n; i++) {   
        *p1 = x[i];
        p1++;
    }

    p1 = p;    
    int i = 0;
    while (i < n) {   
        if (i != n - 1) {
            std::cout << *p1 << ", ";
        }
        else {
            std::cout << *p1 << std::endl;
        }
        p1++;
        i++;
    }
    delete[] p;     
}

int main()
{
    f(ga, sz);
    
    int aa[10];
    
    for (int i = 0; i < 10; i++) {
        int j = i + 1;  
        int fact = 1;

        while (j != 1) {
            fact *= j;
            j--;
        }
        aa[i] = fact;   
    }
    f(aa, sz);
}
