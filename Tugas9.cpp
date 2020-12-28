#include <iostream>
using namespace std;

int main(){
	
	int sum, rmax = 0, min = 100, max =- 100 ;
	int angka[sum];
	int range[sum];
	float total = 0, rata2;
	
	cout << "Masukkan banyak angka : "; cin >> sum;
	for (int i = 0; i < sum; i++){
		cout << "Angka ke-" << i+1 << " : " ; cin >> angka[i];
		total += angka[i];
		
		if (angka[i] > max) {
			max = angka[i];
		}
		
		if (angka[i] < min) {
			min = angka[i];
		}
		
		if (i > 0){
			if (angka[i] < angka[i-1]){
			range[i] = angka[i-1] - angka[i];
			} else 
			range[i] = angka[i] - angka[i-1];
			if (range[i] > rmax) {
				rmax = range[i];
			}
		}	
	}
	rata2 = total/sum;
	cout << "\n\n_______Hasil_______\n";
	cout << "Deret\t\t: ";
		for (int i=0; i<sum; i++){
			cout << angka[i] << " ";
		}
		cout << "\nMaksimum\t: " << max;
		cout << "\nMinimum\t\t: " << min;
		cout << "\nRata-rata\t: " << rata2;
		cout << "\nSelisih Max\t: " << rmax;
	
	return 0;
}		
