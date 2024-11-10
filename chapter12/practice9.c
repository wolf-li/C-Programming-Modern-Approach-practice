#include<stdio.h>
// python3 -c "import random; l1 = random.sample(range(1,400),10);l2 = random.sample(range(1,400),10);l3 = [i*j for i,j in zip(l1,l2)];print(l1,l2);print('res: ',sum(l3))"

double inner_product(const double *a, const double *b, int n);

int main(){
    double n1[] = {374, 79, 184, 104, 64, 298, 10, 52, 264, 55};
    double n2[] = {244, 172, 134, 10, 292, 90, 282, 271, 122, 381};
    int length = sizeof(n1)/sizeof(n1[0]);
    printf("inner product: %lf\n",inner_product(n1, n2, length));
}

double inner_product(const double *a, const double *b, int n){
    double res = 0.0;
    for ( const double *p = a, *q = b; p < a + n ; p++, q++)
    {
        res += ((*p) * (*q));
    }
    return res;
}
