#include <stdio.h>

void insertionSort(int data[], int dataSize);

int main(void){

	int data[] = {3,2,8,4,7};
	int dataSize = sizeof(data)/sizeof(data[0]);
	insertionSort(data,dataSize);

	return 0;
}

void insertionSort(int data[], int dataSize){
	int i,j,temp;
	for(i = 1; i < dataSize; i++){
		temp = data[i];
		for(j = i - 1; j >= 0 && data[j] > temp; j--){
			data[j+1] = data[j];
		}
		data[j+1] = temp;
	}
	for(i = 0; i < dataSize; i++){
		printf("%d ", data[i]);
	}
}