#include <iostream>
#include <vector>
using namespace std;


int main(){
    int num{7};
    int *p1 = &num;

    cout << "value of p1 (address of num): "<< p1 << endl;
    cout << "points to (value of num): " << *p1 << endl;

    int *p2 = new int[7]{1,2,4,8,16,32,64};
    
    cout << "value of p2 (address of array[0]: "<< p2 << endl;
    cout << "point to (value of array[0]: "<< *p2 << endl;

    int *p3 = p2;

    p2 = p1;

    p2 = p3;

    cout << "p1 has value of " << p1 << " and point to " << *p1 << endl;
    cout << "p2 has value of " << p2 << " and point to " << *p2 << endl;

    delete[] p2;

    p1 = new int[10]{1,2,4,8,16,32,64,128,256,512};

    p2 = new int[10];

    cout << "copy with arrays:  ";
    for (int i=0; i<10; i++){
        p2[i] = p1[i];
        cout << p2[i] << " "; 
    }
    cout << endl;

    vector<int> v1{1,2,4,8,16,32,64,128,256,512};   
    vector<int> v2;                                 
    v2=v1;                                          
    cout << "copy with vectors: ";
    for(int i:v2) cout << i << " ";                 
    cout << endl;
    return 0;
}
