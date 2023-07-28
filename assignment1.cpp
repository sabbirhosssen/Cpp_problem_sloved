// •Assignment 1 : 	CSE 1360	Object-Oriented Programming-I Lab Work

// Submitted by =>
// Name : Reazul Islam Rifat
// Id : 41220300474
// Section : 3F


#include <iostream>
class MyClass {
      private:
int myNumber;
        public:
MyClass(int number) {
         myNumber = number;
 }
   void printNumber() {
        std::cout << "My number is: " << myNumber << std::endl;
 }
};
int main() {
      MyClass myObject(42);
      myObject.printNumber();
      for (int i = 0; i < 10; i++) {
           if (i == 5) {
                std::cout << "Reached 5, breaking the loop." << std::endl;
            break;
           }
        std::cout << "Current value: " << i << std::endl;
          return 0;
}
}



// => Assignment Solution:

// 1.Class in line 2 as ‘MyClass’.

// 2.Member variable in line 4 as ‘myNumber’.

// 3.Constructor in line 6 as ‘MyClass’ initialized as myNumber.

// 4.Member function in line 9 as ‘printNumber’.

// 5.Class object in the line 15 as ‘myObject’.

// 6.Argument value in line 14, the value is ‘42’.

// 7.Break in the line 19.

// 8.Identifire in line 16 as i(used in the loop),
//  in line 7 as myNumber , in line 9 as printNumber, in line 13 as main, in line 2 as MyClass.