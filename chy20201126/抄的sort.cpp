#include <iostream> 
#include <algorithm> 
  
using namespace std; 
  
void show(int a[]) 
{ 
    for(int i = 0; i < 10; ++i) 
        cout << a[i] << " "; 
} 
  
int main() 
{ 
    int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0}; 
    cout << "\n ����ǰ����Ϊ : "; 
    show(a); 
  
    sort(a, a+10); 
  
    cout << "\n\n ���������Ϊ : "; 
    show(a); 
  
    return 0; 
  
}
