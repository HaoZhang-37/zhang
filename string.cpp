#include <iostream>
#include <string>
using namespace std;
int main()
{
	//string �Ĺ��캯��
	string s1;
	//ָ������ʼ������ֻ���ܵ�ַ��ָ���������ʱ������ȡ��ַ�������׵�ַΪ��ַ��string��p��ʱ��pΪָ��ʱ����ָ���ַ�ʱ��Ϊһ�����أ�stringֱ�Ӵ�ָ�뿪ʼ����������
	const char* p = "hello";
	string s2(p);
	//ֱ�ӿ���
	string(s2);
	//ʹ��10��a��ʼ��
	string(10, 'a');



	return 0;
}