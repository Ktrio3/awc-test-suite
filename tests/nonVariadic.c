#include <stdio.h>

int sum(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10,
        int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19,
        int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28,
        int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37,
        int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46,
        int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55,
        int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63, int a64,
        int a65, int a66, int a67, int a68, int a69, int a70, int a71, int a72, int a73,
        int a74, int a75, int a76, int a77, int a78, int a79, int a80, int a81, int a82,
        int a83, int a84, int a85, int a86, int a87, int a88, int a89, int a90, int a91,
        int a92, int a93, int a94, int a95, int a96, int a97, int a98, int a99, int a100)
{
    return a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12 + a13 + a14 +
           a15 + a16 + a17 + a18 + a19 + a20 + a21 + a22 + a23 + a24 + a25 + a26 + a27 +
           a28 + a29 + a30 + a31 + a32 + a33 + a34 + a35 + a36 + a37 + a38 + a39 + a40 +
           a41 + a42 + a43 + a44 + a45 + a46 + a47 + a48 + a49 + a50 + a51 + a52 + a53 +
           a54 + a55 + a56 + a57 + a58 + a59 + a60 + a61 + a62 + a63 + a64 + a65 + a66 +
           a67 + a68 + a69 + a70 + a71 + a72 + a73 + a74 + a75 + a76 + a77 + a78 + a79 +
           a80 + a81 + a82 + a83 + a84 + a85 + a86 + a87 + a88 + a89 + a90 + a91 + a92 +
           a93 + a94 + a95 + a96 + a97 + a98 + a99 + a100;
}

int main()
{
    printf("Just making sure nonVariadic functions were not messed up.\n");

    printf("Sum(non-variadic): 1+2+3+...+100 = %d\n",
           sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
               22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
               41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
               60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78,
               79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
               98, 99, 100));
}