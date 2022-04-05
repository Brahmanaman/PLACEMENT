#include<iostream>
using namespace std;

class ComplexNumbers {
    // Complete this class
    public:
    int img, rel;
    
    //constructor
    ComplexNumbers(int r, int i){
        rel = r;
        img = i;
        
    }
    
    void plus(ComplexNumbers &temp){
        rel+=temp.rel;
        img+=temp.img;
        
    }
    
    void print(){
        cout<< rel << " + i"<<img;
    }
    
    void multiply(ComplexNumbers &temp){
        int r, i;
        r = (rel*temp.rel) - (img * temp.img);
        i = (rel * temp.img) + (img*temp.rel);
        rel = r;
        img = i;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}