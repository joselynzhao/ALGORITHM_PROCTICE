
// #include <iostream>
// using namespace std;
 
// class Box
// {
//    public:
 
//       double getVolume(void)
//       {
//          return length * breadth * height;
//       }
//       void setLength( double len )
//       {
//           length = len;
//       }
 
//       void setBreadth( double bre )
//       {
//           breadth = bre;
//       }
 
//       void setHeight( double hei )
//       {
//           height = hei;
//       }
//       // 重载 + 运算符，用于把两个 Box 对象相加
//       Box operator+(const Box& b)
//       {
//          Box box;
//          box.length = this->length + b.length;
//          box.breadth = this->breadth + b.breadth;
//          box.height = this->height + b.height;
//          return box;
//       }
//    private:
//       double length;      // 长度
//       double breadth;     // 宽度
//       double height;      // 高度
// };
// // 程序的主函数
// int main( )
// {
//    Box Box1;                // 声明 Box1，类型为 Box
//    Box Box2;                // 声明 Box2，类型为 Box
//    Box Box3;                // 声明 Box3，类型为 Box
//    double volume = 0.0;     // 把体积存储在该变量中
 
//    // Box1 详述
//    Box1.setLength(6.0); 
//    Box1.setBreadth(7.0); 
//    Box1.setHeight(5.0);
 
//    // Box2 详述
//    Box2.setLength(12.0); 
//    Box2.setBreadth(13.0); 
//    Box2.setHeight(10.0);
 
//    // Box1 的体积
//    volume = Box1.getVolume();
//    cout << "Volume of Box1 : " << volume <<endl;
 
//    // Box2 的体积
//    volume = Box2.getVolume();
//    cout << "Volume of Box2 : " << volume <<endl;
 
//    // 把两个对象相加，得到 Box3
//    Box3 = Box1 + Box2;
 
//    // Box3 的体积
//    volume = Box3.getVolume();
//    cout << "Volume of Box3 : " << volume <<endl;
 
//    return 0;
// }


#include <iostream>
using namespace std;
 
class Distance
{
   private:
      int feet;             // 0 到无穷
      int inches;           // 0 到 12
   public:
      // 所需的构造函数
      Distance(){
         feet = 0;
         inches = 0;
      }
      Distance(int f, int i){
         feet = f;
         inches = i;
      }
      friend ostream &operator<<( ostream &output, 
                                       const Distance &D )
      { 
         output << "F : " << D.feet << " I : " << D.inches;
         return output;            
      }

      friend istream &operator>>( istream  &input, Distance &D )
      { 
         input >> D.feet >> D.inches;
         return input;            
      }
};
int main()
{
   Distance D1(11, 10), D2(5, 11), D3;

   cout << "Enter the value of object : " << endl;
   cin >> D3;
   cout << "First Distance : " << D1 << endl;
   cout << "Second Distance :" << D2 << endl;
   cout << "Third Distance :" << D3 << endl;


   return 0;
}