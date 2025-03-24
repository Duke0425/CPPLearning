#include <iostream>
#include "day_two.h"

// 变量和基本类型
/*
 char: 8位, 通常是单个机器字节. 
 wchar_t: 扩展字符集, 比如汉字或者日语
 
 short 半个机器字长
 int: 一个机器字长
 long: 一个或者两个机器字长
 
 无符号整数使用 unsigned


 bool: true, false.
 

 float : 单精度浮点数(32位)
 double : 双精度浮点数(64位)
 long double 扩展精度浮点数(96或者128位)
 
 20;
 024;
 0x14;
 128u;
 2024UL;
 1L;
 8LU;
 3.14159F;

 1. 整型字面量规则:
	加0默认为八进制, 加0x默认为16机制
	通过在 数值后面加上U或者u定义unsigned类型. 同时加L和U能够得到unsigned long
 2. 浮点字面值规则:
	指数用E或者e来表示. 默认的浮点字面量常量位double类型, 在数值后面加上F或者f表示单精度, 同样样加上L或者l表示扩展精度
	不提倡使用小写字母l
 3. 布尔字面值和字符字面值
	bool test = false;
	字符使用单引号来定义, 前面加上L, 能够得到wchar_t 宽字符字面值: L'a'
 4. 非打印字符的转义序列
	n: 换行符 等
 5. 字符串字面值
	用双引号括起来的零个或者多个字符表示.
	"Hello World"
 6. 字符串字面值的连接


 extern: 声明标记, 仅声明变量

 const对象: const限定符将一个对象转换成一个常量, 定义的变量不可被修改.
    此对象只能在当前文件作用域进行访问, 如果想要在其他文件作用域访问, 则需要显示地指定它为extern

 如何进行引用
	& 符号
	const引用可以绑定到不同但相关累的对象或绑定到右值
	非const引用只能绑定到与该引用同类型的对象.

 2.6 typedef 名字 
 2.7 enum 枚举类型
 2.8 类类型, class 和struct, class成员默认为private, 而struct关键字定义类 默认成员访问级别为public
 2.9 头文件
     头文件用于声明, 而不是用于定义
	 一些const对象定义在头文件中. 
 #include 是c++ 预处理器的一部分, 接受一个参数: 头文件名
     1. 头文件经常需要其他头文件, 所以要使用 预处理定义头文件保护符 避免多次重复处理该头文件的内容
	 2. 预处理器变量 #ifndef #define
	 如果头文件在尖括号中<>, 那么认为该头文件时标准头文件。编译器将会在预定义的位置集查找该头文件， 这些预定义的位置
	 可以通过设置查找路径环境变量或者通过命令行选项来修改。 如果在引号中， 那么认为它是非系统头文件， 非系统头文件的查找
	 通常开始于源文件所在路径。
  */

using namespace std;
extern const int alother;

void welcome() {


}



class Sales_item {

	public:
	//
	private:
		std::string isbn;
		unsigned units_sold;
		double revenue;
};

int main()
{
	enum open_modes {int1 = 1, int2, int3};
	open_modes anther_int1 = int1;

	typedef int simple;
	extern double special_one;
	simple value = 2, pow = 10,
		result = 1;
	simple&ref_value = value;
	value = 2, ref_value = 10;
	for (int cnt = 0; cnt != pow; ++cnt)
		result *= value;
	std:: cout << value << " raised to the power of " << pow << ": \t" << result << std::endl;
	return 0;

}
