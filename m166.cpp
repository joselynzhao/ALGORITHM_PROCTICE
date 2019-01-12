// //异常处理 ，除以0的异常

// #include <iostream>
// using namespace std;
 
// double division(int a, int b)
// {
//    if( b == 0 )
//    {
//       throw "Division by zero condition!";
//    }
//    return (a/b);
// }
 
// int main ()
// {
//    int x = 50;
//    int y = 0;
//    double z = 0;
 
//    try {
//      z = division(x, y);
//      cout << z << endl;
//    }catch (const char* msg) {
//      cerr << msg << endl;
//    }
 
//    return 0;
// }


#include <iostream>
#include <exception>
using namespace std;
 
struct MyException : public exception
{
  const char * what () const throw ()
  {
    return "C++ Exception";
  }
};
 
int main()
{
  try
  {
    throw MyException();
  }
  catch(MyException& e)
  {
    std::cout << "MyException caught" << std::endl;
    std::cout << e.what() << std::endl;
  }
  catch(std::exception& e)
  {
    //其他的错误
  }
}