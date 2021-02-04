#include <iostream>
using namespace std;
int maxArea(vector<int>& height) ；
int maxArea(vector<int>& height) {
    int l = 0, r = height.size() - 1;
    int ans = 0;
    while (l < r) {
        int area = min(height[l], height[r]) * (r - l);
        ans = max(ans, area);
        if (height[l] <= height[r]) {
            ++l;
        }
        else {
            --r;
        }
    }
    return ans;
}


int main()
{
	int a[] = { 0,1,2,3,4,5,0,3,0 };
	int j = 0;
	for (int i = 0; i < 9; i++) {
		if (a[i] != 0) {
			a[j] = a[i];
			if (i != j)
				a[i] = 0;
			j++;
		}
	}
	for (int i = 0; i < 9; i++) {
		cout << a[i] << endl;
	}
}
