#include<iostream>
#include<thread>

using namespace std;

//function thread untuk print odd,even number
//parameter limit sebagai batasan angka yang akan dilooping
void printNumber(int limit)
{
	for (int i = 0; i <= limit; i++)
	{
		//Jika angka ganjil, print odd number 
		if (i % 2 != 0)
		{
			//print angka ganjil (angka+odd)
			cout << i << "  odd" << endl;
			//untuk delay 1 second setelah angka ganjil di print
			//1 second = 1000 milliseconds
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		//Jika angka genap, print even number
		else if(i % 2 == 0)
		{
			//print angka genap (angka+even)
			cout << i << "  even" << endl;
			//untuk delay 2.5 second setelah angka genap di print
			//1 second = 1000 milliseconds, sehingga 2.5 second = 2500 millisecond
			this_thread::sleep_for(chrono::milliseconds(2500));
		}
	}
	//looping selesai (telah mencapai limit)
	cout << "finished" << endl; 
}

int main()
{
	//banyaknya angka yang akan dilooping
	int limit = 25;

	//memulai thread
	thread th(printNumber,(limit));
	//menunggu thread selesai
	th.join();
}