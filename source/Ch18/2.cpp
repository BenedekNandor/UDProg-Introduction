#include "std_lib_facilities.h"

vector<int> gv {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v)
{
    vector<int> lv {gv}; 
    
    for(int i = 0; i < lv.size(); i++) {    
        if (i != lv.size() -1) {
            std::cout << lv[i] << ", ";
        }
        else {
            std::cout << lv[i] << std::endl;
        }
    }
    
    vector<int> lv2 {v};    
    
    for(int i = 0; i < lv2.size(); i++) {    
        if (i != lv2.size() -1) {
            std::cout << lv2[i] << ", ";
        }
        else {
            std::cout << lv2[i] << std::endl;
        }
    }
}


int main()
{
    f(gv);
    
    vector<int> vv {};
    for (int i = 0; i < 10; i++) {  
        int j = i + 1;  
        int fact = 1;

        while (j != 1) {
            fact *= j;
            j--;
        }
        vv.push_back(fact);
    }
    
    f(vv);
}
