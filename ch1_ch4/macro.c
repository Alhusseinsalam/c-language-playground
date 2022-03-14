#include<stdio.h>

#define forever printf("awdadwawdE\n")
#define max(A, B) ((A) > (B) ? (A) : (B))
#define dprint(expr) printf(#expr " = %g\n", expr)
#define paste1(front, back) front##back

// check if the file HDR.h is not defined then define it else do nothing
#if !defined(HDR)
#define HRD
#endif

void main() {

    forever;
    printf("%d\n", max(10,5));

    printf("%d\n", max(0,5));
    
    dprint(22.0/5);

    int xy = 30;
    printf("%d", paste1(x, y));
}