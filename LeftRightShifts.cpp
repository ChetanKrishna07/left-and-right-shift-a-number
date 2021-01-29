#include <stdio.h>
#include <math.h>

int leftShift(int n);
int rightShift(int n);
int getLength(int n);

int main() {
	
	int n, lS, rS;
	scanf("%d", &n);
	
	lS = leftShift(n);
	rS = rightShift(n);
	printf("Right Shift of %d is %d.\nLeft Shift of %d is %d.", n, rS, n, lS);
	return 0;
	
}

int leftShift(int n) {
	
	int count, result, mul;
	count = getLength(n);
	mul = pow(10, count - 1);
	result = (n%mul)*10 + (n/mul);
	return result;
	
}

int rightShift(int n) {
	
	int count, result, mul;
	count = getLength(n);
	mul = pow(10, count - 1);
	result = (n%10)*mul + (n/10);
	return result;
	
}

int getLength(int n) {
	
	int count = 0;
	while(n!=0) {
		n/=10;
		++count;
	}
	return count;
	
}
