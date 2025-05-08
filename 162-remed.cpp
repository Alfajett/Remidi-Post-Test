#include <iostream>
using namespace std;

class deret{
	public:
		void input(){
			cout << "Masukkan n: "; cin >> n;
		}
		
		float hitung(int n){
			if(n==1){
				return 1;
			}
			else{
				if(n%2==0){
					return hitung(n-1) - 1.0/n;
				}
				else{
					return hitung(n-1) + 1.0/n;
				}
			}
		}
		int getN(){
			return n;
		}
	private:
		int n;
};

int main(){
	
	deret x;
	x.input();
	int n=x.getN();
	cout << "Hasil deret : " << x.hitung(n);
}
