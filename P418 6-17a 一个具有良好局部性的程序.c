int sumvec(int v[n]) {
    int i, sum = 0

    for (i = 0; i < N; i++) {
        sum += v[i];
    }
    return sum;
}