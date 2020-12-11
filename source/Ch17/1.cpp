#include <iostream>
#include <vector>
using namespace std;

void print_array10(ostream& os, int* a);
void print_array(ostream& os, int* a,int n);
void print_vector(ostream& os, vector<int> &vec);

int main(){
    constexpr int s = 10;
    int *p = new int[s];

    for (int i=0;i<s;i++) cout << p[i] <<" ";
    cout << endl;

    delete[] p; 

    int *q = new int[s]{100,101,102,103,104,105,106,107,108,109};
    print_array10(cout,q); 
    delete[] q;

    int *r = new int[11]{1,2,3,4,5,6,7,8,9,10,11};
    for (int i=0;i<11;i++) cout << r[i] << " ";
    cout << endl;
    delete[] r;

    int *t = new int[20]{100,101,102,103,104,105,106,107,108,109,
                         110,111,112,113,114,115,116,117,118,119};
    print_array(cout,t,20);
    delete[] t;
    
    vector<int> vec10{100,101,102,103,104,105,106,107,108,109};     
    vector<int> vec11{1,2,3,4,5,6,7,8,9,10,11};                     
    vector<int> vec20{100,101,102,103,104,105,106,107,108,109,     
                      110,111,112,113,114,115,116,117,118,119};
    print_vector(cout,vec10);
    print_vector(cout,vec11);
    print_vector(cout,vec20);

    return 0;
}

void print_array10(ostream& os, int* a){
    for (int i=0;i<10;i++) os << a[i] << " ";
    os << endl;
}

void print_array(ostream& os, int* a,int n){
    for (int i=0;i<n;i++) os << a[i] << " ";
    os << endl;
}

void print_vector(ostream& os, vector<int> &vec){ 
    for (int el:vec) os << el << " ";
    os << endl;
}

