#include <cstdio>

int findMaxValue(int a[], int len) {
	int maxVal = a[0];

	for (int i = 1;i < len;i++) {
		if (maxVal < a[i]) {
			maxVal = a[i];
		}
	}
	return 0;
}

int findMaxPixel(int a[][5], int h, int w) {
	int maxVal = 0;
	//h는 영상의 height, w는 영상의 width
	for (int i = 0;i < h;i++) {
		for (int j = 0;j < w;j++) {
			if (maxVal < a[i][j]) {
				maxVal = a[i][j];
			}
		}
	}
	return maxVal;
}

int main() {
	int arr[10] = { 3,24,82,12,34,7,53,17,26,51 };
	int img[4][5] = { {3,24,82,12,22},
		{23,122,34,54,67},
		{43,54,67,34,23},
		{24,64,34,54,68} };
	int maxVal = findMaxValue(arr, 10);
	printf("배열의 최대 값=%d\n", maxVal);

	return 0;
}