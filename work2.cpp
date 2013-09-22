/**设计函数，求组合数*/
#include "stdafx.h"
#include <iostream>
using namespace std;
class Count{
private: int a,b,i;

public:
	int count(int a);
};
int Count::count(int a){
	b=1;
	for(i=1;i<=a;i++){
		b=b*i;
	}
	return b;
}
class Formula{
private: float a,b,c,d;
		 float ans;
public :
	int formula(int m,int n);
};
int Formula::formula(int m ,int n){
   Count p;
   a=p.count(m);
   b=p.count(n);
   c=m-n;
   d=p.count(c);
   ans=a/(b*d);
   cout<<"最终答案为"<<ans<<endl;
   return ans;
}


int main(){
	Formula test;
	test.formula(5,2);
	system("pause");
	return 0;
}

