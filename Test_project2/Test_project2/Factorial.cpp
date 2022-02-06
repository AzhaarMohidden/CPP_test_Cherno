int factorial(int a) {
	if (a == 1) {
		return 1;
	}
	int result = a * factorial(a - 1);
	return result;
}