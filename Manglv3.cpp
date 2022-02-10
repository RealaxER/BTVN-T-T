#include<iostream>
using namespace std;
#define MAX 100
#define MAX2 100
void Nhap_a(int a[], int n);
void Xuat_a(int a[], int n);
void Them(int a[], int &n, int vitri, int x);
void Nhap_b(int b[], int m);
void Xuat_b(int b[], int m);
void Gopdau(int  a[], int& n, int b[], int& m);
void Gopcuoi(int b[], int& m, int  a[], int& n);
void Gop_tangdan(int  a[], int& n, int b[], int& m);
void Xoa(int a[], int& n, int k);
void Tach(int a[], int& n, int b[], int& m);
void Giamdan(int a[], int n);
void Cau5(int a[], int& n);
void Cau6(int a[], int n);
void Cau7(int a[], int n);
void Tangdan(int a[], int n);
void Cau8(int a[], int n);
void Cau9(int a[], int n);
void Cau11(int a[], int &n);
void Daonguoc(int a[], int n);
int main()
{
	int a[MAX];
	int b[MAX2];
	int n;
	do
	{
		cout << " Nhap n : ";
		cin >> n;
	} while (n <= 0, n > MAX);
	int m = 0;
/*	int m;
	do
	{
		cout << " Nhap m : ";
		cin >> m;
	} while (m <= 0, m > MAX2);*/
	/*Nhap_a(a, n);
	Xuat_a(a, n);
	Nhap_b(a, m);
	Xuat_b(a, m); */
	//Gopcuoi(b,m,a,n);
	//Gop_tangdan(a, n, b, m);
	//Tach(a, n, b, m);
	//Cau5(a, n);
	//Cau6(a, n);
	//Cau7(a, n);
	//Cau8(a, n);
	//Cau9(a, n);
	//Daonguoc(a, n);
	Cau11(a, n);
	system("pause") ;
}
void Nhap_a(int a[], int n)
{
	cout << "\n\n\t\t==NHAP MANG A ==" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap gia tri thu " << i << " : " << endl;
		cin >> a[i];
	}
}
void Nhap_b(int b[], int m)
{
	cout << "\n\n\t\t== NHAP MANG B ==" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "Nhap gia tri thu " << i << " : " << endl;
		cin >> b[i];
	}
}
void Xuat_a(int a[], int n)
{
	cout << "\n\n\t\t== XUAT MANG A ==" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
void Xuat_b(int b[], int m)
{
	cout << "\n\n\t\t==XUAT MANG B ==" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << b[i] << endl;
	}
}
void Them(int a[], int &n, int vitri, int x)
{ 
	int i;
	for ( i = n; i > vitri ; i--)
	{
		a[i] = a[i - 1];
	}
	a[i] = x;
	n++;
}
void Gopdau(int  a[],int &n  ,int b[], int &m)
{  
	//Nhap_a(a, n);
//	Nhap_b(b, m);
	int k = n + m;
	for (int i = k; i > n; i--)
	{
		a[i-1] = b[m-1];
		m--;
	}
	n = k;
	//Xuat_a(a, n);
}
void Gopcuoi(int b[], int& m, int  a[], int& n) // Nhap gia tri cuoi len truoc gia tri dau xuong duoi;
{
	Nhap_b(b, m);
	Nhap_a(a, n);
	int k = n + m;
	for (int i = k; i > m; i--)
	{
		b[i - 1] = a[n - 1];
		n--;
	}
	m = k;
	//Xuat_b(b, m); 
}///////////////////////////////////////////// 5 8 9 10 7 
void Xoa(int a[], int &n,int k)  // 1 2 3 4 5
{
	for (int i = k; i < n; i++)
	{
		a[i] = a[i+1];
	} 
	n--;
}
void Gop_tangdan(int  a[], int& n, int b[], int& m)
{
	Gopdau(a, n, b, m);// gộp vô mảng a trước 
	int tg;
	for (int i = 0; i < n+m - 1; i++) {
		for (int j = i + 1; j < m+n; j++) {
			if (a[i] > a[j]) {
				// Hoan vi 2 so a[i] va a[j]
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	Xuat_a(a, n);
}
void Tangdan(int a[], int n)
{
	int tg;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j <  n; j++) {
			if (a[i] > a[j]) {
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
void Giamdan(int a[], int n)
{
	int tg;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}
void Tach(int a[], int &n,int b[] , int &m)
{
	Nhap_a(a, n);
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			Them(b, m, j, a[i]);
			Xoa(a, n, i);
			i--;
			j++;
		}
	}
	Xuat_a(a, n);
	Xuat_b(b, m);
}
void Cau5(int a[], int &n)
{
	Nhap_a(a, n);
	int Mangphu[MAX];
	int Mp = 0;
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= 0)
		{
			Them(Mangphu,Mp, j, a[i]);
			Xoa(a, n, i);
			i--;
			j++;
		}
	}

	Tangdan(Mangphu, Mp);
	Giamdan(a, n);
	Gopdau(Mangphu, Mp, a, n);
	Xuat_a(Mangphu, Mp);
}
void Cau6(int a[], int n)
{
	Nhap_a(a, n);
	int k;
	cout << "\n Nhap phan tu thu k : "; cin >> k;
	Tangdan(a, n);
	cout << "\n Phan tu thu k la : " << a[k]<< endl;

}
void Cau7(int a[], int n)
{
	int ucln = 0;
	int temp = 0;
	Nhap_a(a, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < a[i]; j++)
		{
			if (a[i] % j == 0)
			{
				ucln = j;
			}
		}
		if (i == 0)
		{
			temp = ucln;
			continue;
			i = 1;
		}
		if (ucln != temp)
		{
			if (a[i] % temp == 0 && a[i] != temp)
			{
				continue;
			}
			else
			{
				for (int k = temp - 1; k > 0; k--)
				{
					if (a[i] % k == 0 && a[i - 1] % k == 0)
					{
						ucln = k;
						break;
					}
				}		
			}
		}
		temp = ucln;
	}
	cout << temp << " la uoc chung lon nhat : " << endl;
}
int Min(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
int  Max(int a[], int n)
{
	int max = a[0];
		for (int i = 0; i < n; i++)
		{
			if (max < a[i])
			{
				max = a[i];
			}
		}
	return max;
}
void Cau8(int a[], int n)
{
	Nhap_a(a, n);
	int x; cout << "Hay nhap gia tri x : " << endl; cin >> x;
	Tangdan(a, n);
	int max = Max(a, n);
	int min = Min(a, n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			break;
		}
	}
	int kiemtra = n - i;
	if (x > kiemtra)
	{
		cout << "Gia tri gan " << x << " nhat la:  " << max << endl;
	}
	else
	{
		cout << "Gia tri gan " << x << " nhat la:  " << min << endl;
	}
	if (i == kiemtra)
	{
		cout << "Co 2 giia tri gan " << x << " nhat la:  " << min  << "  " << max << endl;
	}
}
void Cau9(int a[], int n)
{
	Nhap_a(a, n);
	int temp = 0;
	for (int i = 0; i < n; i++)
	{
		if (temp % 2 == 0 && a[i] % 2 == 0)
		{
			cout << "Gia tri chan ke nhau : " << temp << "  " << a[i] << endl;
		}
		temp = a[i];
	}
}
void Daonguoc(int a[], int n)
{
	int b[MAX];
	int m = n;
	Nhap_a(a, n);
	int k = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = k ; j >= 0; j--)
		{
			b[i] = a[j];
			break;
		}
		k--;
	}
	Xuat_a(b,m);
}
void Cau11(int a[], int &n)
{
	Nhap_a(a, n);
	int b[MAX];
	int m = 0;
	int k; cout << "Nhap k : " << endl; cin >> k;
	int j = 0;
	bool kiemtra = true;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == k)
		{
			kiemtra = false;
		}
		if (kiemtra == false)
		{
			Them(b, m, j, a[i]);
			Xoa(a, n, i);
			j++;
			i--;
		}
	}
	Xuat_a(a, n);
	Xuat_b(b, m);
	Gopdau(b, m, a, n);
	Xuat_a(b,m);
}