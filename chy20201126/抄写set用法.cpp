#include <iostream>
#include <set>
using namespace std;
int main()
{
    std::set<int> mySet;    // ֱ�Ӷ�����������set����
    mySet.insert(10); 
	      // Ĭ�ϱȽϺ���Ϊless
	  
    mySet.insert(20);  
	
	     // ��С��������
    mySet.insert(16);    
    for(auto it:mySet)
    {
        std::cout<<it<<std::endl;
    }
    std::cout<<"end"<<std::endl;
    return 0;

}
