#include <iostream>

using namespace std;

class partajata{
	static int a;
	int b;
	public:
		void set(int i,int j){
			a = i;
			b = j;
		}
		void arata();
};

int partajata::a; //defineste variabila globala

void partajata::arata(){
	cout << "Acesta este static a: " << a << endl;
	cout << "Acesta este non-static b: " << b << endl;
}

void main(){
	partajata x, y;
	x.set(1,1);
	x.arata();
	y.set(2,2);
	y.arata();
	x.arata();
	system("pause");
}