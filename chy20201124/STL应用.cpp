#include<vector>
#include<iostream>
int main()
{
	std::vector<int> v={7,5,16,8};//��������������vector 
	v.push_back(25);
	v.push_back(16);//�Ǽ��������� 
	for(int n:v)
	{
		std::cout<<n<<'\n';//����v���� 
		
	} 
	
}
