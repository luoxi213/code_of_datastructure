#include <iostream>
#include <string>
using namespace std;

/*本代码的思想是两个for循环+break来实现，能够最大化时间性能，与使用一个while实现完全一样*/

int main(){
string A1,A2;
cout << "enter the main string: ";
cin >> A1;
cout << "enter the pattern string: ";
cin >> A2;

int n1=A1.size();
int n2=A2.size();
cout << "the length of main string is " << n1 << endl;
cout << "the length of pattern string is " << n2 << endl;

for(int i=0;i<=n1-n2;i++)    //主串遍历，i不会有回溯
{
	for(int j=0;j<n2;j++)    //子串遍历
	{
		if(A1[i+j]==A2[j]) //判断对应位置的字符是否相等
		{
			if (j==n2-1) //判断是否全部字符已匹配
			{
				cout << "match! The index of substring in the string is " << i+1 << endl;
				return 0;
			}
		}
		else break;    //一定要用else来对应前面的if，不然每次都break出去，根本就匹配不了
	}
}
cout << "no match!" << endl;
return 0;
}