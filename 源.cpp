#include <iostream>
#include <vector>
using namespace std;
int main()
{
	///*关于vector的创建*/
	////vector容器的创建
	//vector<int> v1;
	////v2带有10个整型的vector
	//vector<int> v2(10);
	////v3带有10个整型，且初值为1
	//vector<int> v3(10, 1);
	////v4完全等价与v3
	//vector<int> v4(v3);
	////将v4的前五个赋值给v5
	//vector<int> v5(v4.begin(),v4.begin() + 5);
	////从数组中获取值来初始化
	//int v7[7] = { 1,2,3,4,5,6,7 };
	//vector<int> v6(v7, v7+ 7);


	///*vector中常用的内置函数*/
	////assign意为分配
	//vector<int> a, b;
	//a.assign(b.begin(), b.begin() + 3);
	////分配4个2给a
	//a.assign(4, 2);
	////a的第一个元素和最后一个元素
	//a.front();
	//a.back();
	////a中第i个元素，注意下标越界
	//vector<int>::size_type i=0;
	//a[i];
	////清空a
	//a.clear();
	////判断a是否为空
	//a.empty();
	////删除a中最后一个元素
	//a.pop_back();
	////删除a中第一个（从第0个算起）到第二个元素，也就是说删除的元素从a.begin()+1算起（包括它）一直到a.begin()+3（不包括它）结束
	//a.erase(a.begin() + 1, a.begin() + 3);
	vector<int> a{ 1,2,3,4,5,67 };
	a.erase(a.begin(), a.begin() + 3);
	vector<int>::iterator iter = a.begin();
	for (; iter < a.end(); ++iter)
	{
		cout << *iter << endl;
	}
}
