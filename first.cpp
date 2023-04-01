#include<iostream>
using namespace std;

class Box {
private:
  int height;

public:
  Box() {
    height = 0;
  }

  Box(int h) {
    height = h;
  }

  Box operator + (Box b) {
    Box temp;
    temp.height = height + b.height;
    
    return temp;
  }

  Box operator - (Box b) {
    Box temp;
    temp.height = height - b.height;
    
    return temp;
  }

  Box operator * (Box b) {
    Box temp;
    temp.height = height * b.height;
    
    return temp;
  }

  Box operator / (Box b) {
    Box temp;
    temp.height = height / b.height;
    
    return temp;
  }

  Box operator % (Box b) {
    Box temp;
    temp.height = height % b.height;
    
    return temp;
  }

  void operator ++ () {  // prefix
    ++height;
  }

  void operator -- () {  // prefix
    --height;
  }

  void operator ++ (int) {  // postfix
    height++;
  }

  void operator -- (int) {  // postfix
    height--;
  }

  bool operator < (Box b) { 
    if (height < b.height) 
      return true;
    else false;
  }
  
  bool operator > (Box b) { 
    if (height > b.height)
      return true;
    else false;
  }

  bool operator <= (Box b) { 
    if (height <= b.height)
      return true;
    else false;
  }

  bool operator >= (Box b) { 
    if (height >= b.height)
      return true;
    else false;
  }

  bool operator == (Box b) {
    if (height == b.height)
      return true;
    else false;
  }

  bool operator != (Box b) {
    if (height != b.height)
      return true;
    else false;
  }

  void display() {
    cout << "height: " << height << endl;
  }
};

int main() {
  Box b1(1), b2(2), b3(3), b4(4), b5(5), b6(6), b7(7), b8(8), b9(9), b10(10);
  Box box1, box2, box3, box4, box5;

  box1 = b1 + b2 + b3;  // 1 + 2 + 3
  // box1.display();  // 6

  box2 = box1 - b1 - b2;  // 6 - 1 - 2
  // box2.display();  // 3

  box3 = b5 * b6 * b10;
  // box3.display();  // 300

  box4 = b10 / b5;
  // box4.display();  // 2

  if (box2 == b3)
    cout << "box2 and b3 are equal" << endl;
  if (box2 != b4)
    cout << "box2 and b4 are not equal" << endl;
  if (box1 > box2)
    cout << "box1 is bigger than box2" << endl;
  if (box2 < box1)
    cout << "box2 is smaller than box1" << endl;

  box1++;
  // box1.display();  // 7

  box2--;
  // box2.display();  // 2

  return 0;
}

/*

a = 5, b = 6,

c = a++
d = ++b

print a => 6
print c => 6
print d => 6
print b => 7

*/