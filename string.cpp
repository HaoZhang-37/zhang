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

	//string�ĸ�ֵ
	string s3;
	s3 = "hello";
	s3 = 'a';
	s3.assign(s2);
	s3.assign(10, 'a');

	//string ��ƴ��
	string s4 = "��";
	s4 += "��ѧϰ";
	s4.append("c++");
	str3.append("study abcde", 5);// ���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	str3.append(str2, 0, 10);// �ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β 

	//string�������滻
	string str1 = "abcdefgde";
	int pos = str1.find("de");// ����s��һ�γ���λ��,��pos��ʼ����
	pos = str1.rfind("de");//����s���һ�γ���λ��,��pos��ʼ���� 

	//�滻
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//�滻��pos��ʼ��n���ַ�Ϊ�ַ���s 
	
	//
	string str1 = "hello";
	string str2 = "hello";

	//���ַ���s�Ƚ� 
	if (str1.compare(str2) == 0)	cout << "=" << endl;
	else if (str1.compare(str2) > 0)	cout << ">" << endl;
	else cout << "<" << endl;
	
	// �±������ [] ��ʹ��ʱ�������������Ч�ԣ�����±곬���ַ��ĳ��ȷ�Χ����ʾ����δ������Ϊ�����ڳ����ַ�����ʹ���±������ʱ���ַ���������ַ����� ��\0��������Ч�ġ���Ӧ string ���Ͷ��󣨳����ͣ����һ���ַ����±�����Ч�ģ����÷����ַ� ��\0����
	// ���� at() ��ʹ��ʱ�����±��Ƿ���Ч������������±곬���ַ��ĳ��ȷ�Χ��ϵͳ���׳� out_of_range �쳣��
	string s1 = "hello";
	cout << s1.size() << endl;
	string str = "hello";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";// ͨ��[]��ʽȡ�ַ� 
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";// ͨ��at������ȡ�ַ� 
	}
	cout << endl;

	str[0] = 'x';// ͨ��[]��ʽȡ�ַ� 
	cout << str << endl;
	char c = str.at(2); //ͨ��at������ȡ�ַ�
	cout << c << endl;

	//���롢ɾ��
	string str = "hello";
	str.insert(1, "111");//�����ַ���
	cout << str << endl;

	str.erase(1, 3);// ɾ����Pos��ʼ��n���ַ�
	cout << str << endl;

	str.insert(1, 5, '1');// �����Pos��ʼ��n���ַ�
	cout << str << endl;

	//ȡ���ַ���
	void test01()
	{
		string str = "hello";
		string subStr = str.substr(1, 3);//������pos��ʼ��n���ַ���ɵ��ַ��� 
		cout << subStr << endl;
	}

	//ʵ�ò���
	void test02()
	{
		string email = "hello@sina.com";

		//���ʼ��� ��ȡ �û�����Ϣ
		int pos = email.find('@');

		string user = email.substr(0, pos);//������pos��ʼ��n���ַ���ɵ��ַ��� 
		cout << user << endl;
	}


	return 0;
}