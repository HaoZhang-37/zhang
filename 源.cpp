#include <iostream>
#include <vector>
using namespace std;
int main()
{
	///*����vector�Ĵ���*/
	////vector�����Ĵ���
	//vector<int> v1;
	////v2����10�����͵�vector
	//vector<int> v2(10);
	////v3����10�����ͣ��ҳ�ֵΪ1
	//vector<int> v3(10, 1);
	////v4��ȫ�ȼ���v3
	//vector<int> v4(v3);
	////��v4��ǰ�����ֵ��v5
	//vector<int> v5(v4.begin(),v4.begin() + 5);
	////�������л�ȡֵ����ʼ��
	//int v7[7] = { 1,2,3,4,5,6,7 };
	//vector<int> v6(v7, v7+ 7);


	///*vector�г��õ����ú���*/
	////assign��Ϊ����
	//vector<int> a, b;
	//a.assign(b.begin(), b.begin() + 3);
	////����4��2��a
	//a.assign(4, 2);
	////a�ĵ�һ��Ԫ�غ����һ��Ԫ��
	//a.front();
	//a.back();
	////a�е�i��Ԫ�أ�ע���±�Խ��
	//vector<int>::size_type i=0;
	//a[i];
	////���a
	//a.clear();
	////�ж�a�Ƿ�Ϊ��
	//a.empty();
	////ɾ��a�����һ��Ԫ��
	//a.pop_back();
	////ɾ��a�е�һ�����ӵ�0�����𣩵��ڶ���Ԫ�أ�Ҳ����˵ɾ����Ԫ�ش�a.begin()+1���𣨰�������һֱ��a.begin()+3����������������
	//a.erase(a.begin() + 1, a.begin() + 3);
	vector<int> a{ 1,2,3,4,5,67 };
	a.erase(a.begin(), a.begin() + 3);
	vector<int>::iterator iter = a.begin();
	for (; iter < a.end(); ++iter)
	{
		cout << *iter << endl;
	}
}
