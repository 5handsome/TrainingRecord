#include<iostream>
#include<set>//���� ���� 
using namespace std;
int main()
{
	std::set<int> mySet;
	mySet.insert(5);
	mySet.insert(16);
	mySet.insert(59);//��С����Ƚϣ�Ĭ�ϱȽϺ�����less 

	for(auto it:mySet)
	{
		std::cout<<it<<std::endl;
	}
	std::cout<<"end"<<std::endl;
	return 0;
}
//�����set��ʱ������������˵���ǲ�����Ԫ��ʱ������set����false����ԭ����ȣ�������set�� 
// https://www.cnblogs.com/litaozijin/p/6665595.html
