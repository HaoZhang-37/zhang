#include <iostream>
#include <string>
using namespace std;
int main()
{
	//string 的构造函数
	string s1;
	//指针必须初始化，且只接受地址，指针接受数组时，无须取地址，数组首地址为地址。string（p）时，p为指针时，且指向字符时，为一种重载，string直接从指针开始，到结束。
	const char* p = "hello";
	string s2(p);
	//直接拷贝
	string(s2);
	//使用10个a初始化
	string(10, 'a');



	return 0;
}