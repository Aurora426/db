#include<iostream>
using namespace std;



int main()
{
	int rows1, cols1, rows2, cols2 ,i, j, c, d;
	char s;
	int a[100][100], b[100][100];
	cin >> rows1;
	cin >> cols1;
	for (i = 0;i < rows1;i++) {
		for (j = 0;j < cols1;j++)
		{
			cin >> a[i][j];
		}
	}
	cin >> rows2;
	cin >> cols2;
	for (c = 0;c < rows2;c++) {
		for (d = 0;d < cols2;d++)
			cin >> b[c][d];
	}
	cout<<"+ or *?"<<endl;
	cin>>s;
	if(s=='+'){
		for (i = 0;i < rows1;i++) {
		for (j = 0;j <cols1;j++) {
			cout << a[i][j] + b[c][d] ;
		    cout<<" " ;
		}
		cout << endl;
	}
	}
	if(s=='*'){
	   for (i = 0;i < rows1;i++) {
		for (d = 0;d < rows2;d++) {
			cout << a[i][0] * b[0][d] + a[i][1] * b[1][d] + a[i][2] * b[2][d];
		    cout<<" " ;
		}
		cout << endl;
	}
	}
	return 0;
}
