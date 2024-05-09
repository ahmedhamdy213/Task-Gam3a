#include <stdio.h>
//Useing Function to be recrseve
int F(int M, int N) {
    if (M == 0 || (M >= N && N >= 1)) {
        return 1;
    } else {
        return F(M - 1, N) + F(M - 1, N - 1);
    }
}

void main() {
    int M, N;

    printf("Enter the values of M and N: ");
    scanf("%d %d", &M, &N);

    printf("F(%d, %d) = %d\n", M, N, F(M, N));

}
