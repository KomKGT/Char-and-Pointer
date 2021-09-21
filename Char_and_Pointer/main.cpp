#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Chartest(char *name,char *lastname)
{
	cout<<name<<" "<<lastname<<endl;
}
void Chartest2(char *name,char *lastname)
{
	cout<<*name<<" "<<*lastname<<endl;
}
void Integertest(int *a,int *b)
{
	cout<<a<<" "<<b<<endl;
}
void Integertest2(int *c,int *d)
{
	cout<<*c<<" "<<*d<<endl;
}
int main(int argc, char** argv) {
	
	Chartest("Komgrich","Tranganpaiboon");
	
	char name = 'KOM';
	char lastname = 'TNGPB';
	Chartest2(&name,&lastname);
	
	int x = 3;
	int y = 5;
	Integertest(&x,&y);
	
	Integertest2(&x,&y);
	return 0;
}
