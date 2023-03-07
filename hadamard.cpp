#include <iostream>
using namespace std;

char hada[1000][1000];

void solve(int n, int x, int y, int res){
	if(n==1){
		if(res==1) hada[x][y] = '+';
		else if(res==0) hada[x][y] = 'o';
		return;
	}
	solve(n/2, x, y, res);
	solve(n/2, x, y+n/2, res);
	solve(n/2, x+n/2, y, res);
	solve(n/2, x+n/2, y+n/2, 1-res);
}

int main(){
	int n;
	cin >> n;
	
	solve(n, 0, 0, 1);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << hada[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
