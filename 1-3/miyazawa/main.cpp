#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(int argc , char** argv){

	//整数２つ宣言
	int i1 , i2;

	//整数読み込み
	cout<<"please input"<<endl;
	cout<<"integer1	integer2"<<endl;
	cin>>i1>>i2;

	//答えを計算
	double ans;
	if(i1 == 0){
		//０乗はできない
		cout<<"please i1 is not 0!!"<<endl;
		return 0;
	}
	else if(i2 == 0){
		//０のとき
		ans = 1;
	}else if (i2 > 0){
		//正のとき
		ans = pow((double)i1 , (double)i2);
	}else{
		//負のとき
		ans = pow((double)i1 , (double)i2 * -1);
		ans = 1/ans;
	}

	//答え出力
	cout<<"ans:"<<ans<<endl;

}