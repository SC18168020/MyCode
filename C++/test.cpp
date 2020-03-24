#include <iostream>

using namespace std;

void Max(int A[], int lo, int hi, int &x1, int &x2)
{
    if(lo + 2 == hi){
        if(A[lo] > A[lo +1]){
            x1 = lo;x2 = lo +1;
        }
        else{
            x1 = lo +1;x2 = lo;
        }
        return ;
    }//左闭右开区间，只有两个元素，进行排序
    if(lo + 3 == hi){
       if(A[lo] >= A[lo + 1]){x1 = lo;x2 = lo +1;}
       else{x1 = lo + 1;x2 = lo;}

       if(A[lo + 2] > A[lo + 1]){
           if(A[lo + 2] > A[lo]){
               x2 = x1;x1 = lo +2;
           }
           else{x2 = lo +2;}       
       }
       return ;
    }//只有三个元素，进行排序
    int mi = (lo + hi)/2;
    int x1L, x2L; Max(A, lo, mi, x1L, x2L);//此处x1L,x2L重复开辟内存
    cout << &x1L << endl;
    int x1R, x2R; Max(A, mi, hi, x1R, x2R);
    cout << &x1L << endl;
    if(A[x1L] > A[x1R]){
        x1 = x1L; x2 = (A[x2L] > A[x1R] ) ? x2L : x1R;
    }
    else{
        x1 = x1R; x2 = (A[x2R] > A[x1L]) ? x2R : x1L;
    }
    return ;
}

int main()
{
    int B[] = {3,1,11,5,3,16,7,8,22,14};
    int m1,m2;
    Max(B, 0, 10, m1, m2);
    
    cout << B[m1] << endl;
    cout << B[m2] << endl;
    return 0 ;
}

