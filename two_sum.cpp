#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool two_sum(int [], int,int); // array parameter passed
bool two_sum2(vector<int>&a, int); // vector parameter passed

int main(){
	int A[] = {1,2,3,9};
	int B[] = {1,2,4,4};
	vector<int> a = {1,2,3,9};
	int sum = 8;
  int N = 4;
	cout<<two_sum(A,N,sum);
	cout<<two_sum(B,N,sum);
	cout<<two_sum2(a,sum);

}
bool two_sum(int A[], int N, int sum){
	for(int i = 0, j = N-1; i < j; ){
		int res = A[i] + A[j];
		if(res==sum){
			cout<<A[i]<<" "<<A[j]<<endl;
			return true;
		}
		if(res < sum)
			i++;
		if(res > sum)
			j--;
	}
	return false;
}

bool two_sum2(const vector<int> data, int sum){
	unordered_set <int> comp = {};
	for(int value : data){
		if(comp.find(value)!=comp.end)
			return true;
		comp.insert(sum-value);
	}
	return false;
}

