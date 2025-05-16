long long sum(int *a, int n) {
	long long ans = 0;
    //a = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        ans += *a++;
    }
    //free(a);
	return ans;
}
