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

	//string的赋值
	string s3;
	s3 = "hello";
	s3 = 'a';
	s3.assign(s2);
	s3.assign(10, 'a');

	//string 的拼接
	string s4 = "我";
	s4 += "爱学习";
	s4.append("c++");
	str3.append("study abcde", 5);// 把字符串s的前n个字符连接到当前字符串结尾
	str3.append(str2, 0, 10);// 字符串s中从pos开始的n个字符连接到字符串结尾 

	//string查找与替换
	string str1 = "abcdefgde";
	int pos = str1.find("de");// 查找s第一次出现位置,从pos开始查找
	pos = str1.rfind("de");//查找s最后一次出现位置,从pos开始查找 

	//替换
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//替换从pos开始的n个字符为字符串s 
	
	//
	string str1 = "hello";
	string str2 = "hello";

	//与字符串s比较 
	if (str1.compare(str2) == 0)	cout << "=" << endl;
	else if (str1.compare(str2) > 0)	cout << ">" << endl;
	else cout << "<" << endl;
	
	// 下标操作符 [] 在使用时不检查索引的有效性，如果下标超出字符的长度范围，会示导致未定义行为。对于常量字符串，使用下标操作符时，字符串的最后字符（即 ‘\0’）是有效的。对应 string 类型对象（常量型）最后一个字符的下标是有效的，调用返回字符 ‘\0’。
	// 函数 at() 在使用时会检查下标是否有效。如果给定的下标超出字符的长度范围，系统会抛出 out_of_range 异常。
	string s1 = "hello";
	cout << s1.size() << endl;
	string str = "hello";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";// 通过[]方式取字符 
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";// 通过at方法获取字符 
	}
	cout << endl;

	str[0] = 'x';// 通过[]方式取字符 
	cout << str << endl;
	char c = str.at(2); //通过at方法获取字符
	cout << c << endl;

	//插入、删除
	string str = "hello";
	str.insert(1, "111");//插入字符串
	cout << str << endl;

	str.erase(1, 3);// 删除从Pos开始的n个字符
	cout << str << endl;

	str.insert(1, 5, '1');// 插入从Pos开始的n个字符
	cout << str << endl;

	//取子字符串
	void test01()
	{
		string str = "hello";
		string subStr = str.substr(1, 3);//返回由pos开始的n个字符组成的字符串 
		cout << subStr << endl;
	}

	//实用操作
	void test02()
	{
		string email = "hello@sina.com";

		//从邮件中 获取 用户名信息
		int pos = email.find('@');

		string user = email.substr(0, pos);//返回由pos开始的n个字符组成的字符串 
		cout << user << endl;
	}


	return 0;
}