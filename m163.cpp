// #include <iostream>
// using namespace std;
 
// class Distance
// {
//    private:
//       int feet;             // 0 到无穷
//       int inches;           // 0 到 12
//    public:
//       // 所需的构造函数
//       Distance(){
//          feet = 0;
//          inches = 0;
//       }
//       Distance(int f, int i){
//          feet = f;
//          inches = i;
//       }
//       // 重载函数调用运算符
//       Distance operator()(int a, int b, int c)
//       {
//          Distance D;
//          // 进行随机计算
//          D.feet = a + c + 10;
//          D.inches = b + c + 100 ;
//          return D;
//       }
//       // 显示距离的方法
//       void displayDistance()
//       {
//          cout << "F: " << feet <<  " I:" <<  inches << endl;
//       }
      
// };
// int main()
// {
//    Distance D1(11, 10), D2;

//    cout << "First Distance : "; 
//    D1.displayDistance();

//    D2 = D1(10, 10, 10); // invoke operator()
//    cout << "Second Distance :"; 
//    D2.displayDistance();

//    return 0;
// }

// #include <iostream>
// using namespace std;
// const int SIZE = 10;

// class safearay
// {
//    private:
//       int arr[SIZE];
//    public:
//       safearay() 
//       {
//          register int i;
//          for(i = 0; i < SIZE; i++)
//          {
//            arr[i] = i;
//          }
//       }
//       int& operator[](int i)
//       {
//           if( i > SIZE )
//           {
//               cout << "索引超过最大值" <<endl; 
//               // 返回第一个元素
//               return arr[0];
//           }
//           return arr[i];
//       }
// };
// int main()
// {
//    safearay A;

//    cout << "A[2] 的值为 : " << A[2] <<endl;
//    cout << "A[5] 的值为 : " << A[5]<<endl;
//    cout << "A[12] 的值为 : " << A[12]<<endl;

//    return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

// 假设一个实际的类
class Obj {
   static int i, j;
public:
   void f() const { cout << i++ << endl; }
   void g() const { cout << j++ << endl; }
};

// 静态成员定义
int Obj::i = 10;
int Obj::j = 12;

// 为上面的类实现一个容器
class ObjContainer {
   vector<Obj*> a;
public:
   void add(Obj* obj)
   { 
      a.push_back(obj);  // 调用向量的标准方法
   }
   friend class SmartPointer;
};

// 实现智能指针，用于访问类 Obj 的成员
class SmartPointer {
   ObjContainer oc;
   int index;
public:
   SmartPointer(ObjContainer& objc)
   { 
       oc = objc;
       index = 0;
   }
   // 返回值表示列表结束
   bool operator++() // 前缀版本
   { 
     if(index >= oc.a.size()) return false;
     if(oc.a[++index] == 0) return false;
     return true;
   }
   bool operator++(int) // 后缀版本
   { 
      return operator++();
   }
   // 重载运算符 ->
   Obj* operator->() const 
   {
     if(!oc.a[index])
     {
        cout << "Zero value";
        return (Obj*)0;
     }
     return oc.a[index];
   }
};

int main() {
   const int sz = 10;
   Obj o[sz];
   ObjContainer oc;
   for(int i = 0; i < sz; i++)
   {
       oc.add(&o[i]);
   }
   SmartPointer sp(oc); // 创建一个迭代器
   do {
      sp->f(); // 智能指针调用
      sp->g();
   } while(sp++);
   return 0;
}