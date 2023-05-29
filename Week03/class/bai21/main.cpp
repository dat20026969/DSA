#include "b21.h"
using namespace std;
//FILE* inp, * out;
int main(int argc, char **argv) {	
	cout << "Ban da nhap vao` " << argc << " bai` toan" << "\n";
	for (int i = 0; i < argc; ++i) {
		cout << argv[i] << "\n";
	}
	int arr[100], n, x, choice;
	while (100 < 200){
		cout << "1 - Linear Search." << endl;
		cout << "2 - Linear Search Sentinel." << endl;
		cout << "3 - Binary Search." << endl;
		cout << "0 - Ket thuc chuong trinh" << endl;
		cout << "------------------------------" << endl;
		cout << "Moi thay nhap lua chon" << endl;
		cin >> choice;
		if (choice == 1) {
			//Linear Search.
			//errno_t err; //tham khao tren website cua microsoft.
			//err = freopen_s(&inp,"input.txt", "r", stdin);
			//err = freopen_s(&out,"output.txt", "w", stdout);
			//ios_base::sync_with_stdio(false);
			ifstream f1("input.txt");
			cout << "Nhap so luong phan tu, so can tim`: " << endl;
			cin >> n >> x;
			nhapMang(arr, n);
			cout << linearSearch(arr, n, x) << endl;
			cout << "---------------------------------" << endl;
			f1.close();
		}
		else if (choice == 2) {
			//-------------------//
			//Sentinel Linear Search.
			/*errno_t err1;
			err1 = freopen_s(&inp, "input1.txt", "r", stdin);
			err1 = freopen_s(&out, "output.txt", "w", stdout);
			ios_base::sync_with_stdio(false);*/
			ifstream f2("input.txt");
			nhapMang(arr, n);
			cout << sentinelLinearSearch(arr, n, x) << endl;
			cout << "---------------------------------" << endl;
			f2.close();
		}
		else if (choice == 3) {
			/*Binary Search.
			errno_t err2;
			err2 = freopen_s(&inp, "input2.txt", "r", stdin);
			err2 = freopen_s(&out, "output.txt", "w", stdout);
			ios_base::sync_with_stdio(false);*/
			ifstream f3("input.txt");
			nhapMang(arr, n);
			vector<int>a;
			int gtri;
			for (int i = 0; i < n; i++) {
				cin >> gtri;
				a.push_back(gtri);
			}
			cout << binarySearch(a, 0, n - 1, x) << endl;
			f3.close();
		}
		else if (choice == 0) {
			break;
		}
		else {
			cout << "lua chon khong hop le" << endl;
		}
	}
	cout << "ket thuc chuong trinh" << endl;
	return 0;
}