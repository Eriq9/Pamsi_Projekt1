#include "Vector.hh"
#include "Quicksort.hh"
#include "Matrix.hh"
#include "Mergesort.hh"
#include "Heapsort.hh"
#include "Introsort.hh"
#include <fstream>
#include <chrono>
#include <cmath>
using namespace std;
#define SIZE_OF_VECTOR 1000000
#define SIZE_OF_MATRIX 100
#define PERCENT_OF_SORT 99.7





int main()
{
  Matrix QM1(SIZE_OF_MATRIX,10000,Hazard,1);
  Matrix QM2(SIZE_OF_MATRIX,10000,Sort,25);
  Matrix QM3(SIZE_OF_MATRIX,10000,Sort,50);
  Matrix QM4(SIZE_OF_MATRIX,10000,Sort,75);
  Matrix QM5(SIZE_OF_MATRIX,10000,Sort,95);
  Matrix QM6(SIZE_OF_MATRIX,10000,Sort,99);
  Matrix QM7(SIZE_OF_MATRIX,10000,Sort,99.7);
  Matrix QM8(SIZE_OF_MATRIX,10000,AntySort,99);
  ExecutionQuickSort(QM1);
  ExecutionQuickSort(QM2);
  ExecutionQuickSort(QM3);
  ExecutionQuickSort(QM4);
  ExecutionQuickSort(QM5);
  ExecutionQuickSort(QM6);
  ExecutionQuickSort(QM7);
  ExecutionQuickSort(QM8);
  cout<<endl;


  Matrix MM1(SIZE_OF_MATRIX,10000,Hazard,1);
  Matrix MM2(SIZE_OF_MATRIX,10000,Sort,25);
  Matrix MM3(SIZE_OF_MATRIX,10000,Sort,50);
  Matrix MM4(SIZE_OF_MATRIX,10000,Sort,75);
  Matrix MM5(SIZE_OF_MATRIX,10000,Sort,95);
  Matrix MM6(SIZE_OF_MATRIX,10000,Sort,99);
  Matrix MM7(SIZE_OF_MATRIX,10000,Sort,99.7);
  Matrix MM8(SIZE_OF_MATRIX,10000,AntySort,99);
  ExecutionMergeSort(MM1);
  ExecutionMergeSort(MM2);
  ExecutionMergeSort(MM3);
  ExecutionMergeSort(MM4);
  ExecutionMergeSort(MM5);
  ExecutionMergeSort(MM6);
  ExecutionMergeSort(MM7);
  ExecutionMergeSort(MM8);
  cout<<endl;
  

  Matrix IM1(SIZE_OF_MATRIX,10000,Hazard,1);
  Matrix IM2(SIZE_OF_MATRIX,10000,Sort,25);
  Matrix IM3(SIZE_OF_MATRIX,10000,Sort,50);
  Matrix IM4(SIZE_OF_MATRIX,10000,Sort,75);
  Matrix IM5(SIZE_OF_MATRIX,10000,Sort,95);
  Matrix IM6(SIZE_OF_MATRIX,10000,Sort,99);
  Matrix IM7(SIZE_OF_MATRIX,10000,Sort,99.7);
  Matrix IM8(SIZE_OF_MATRIX,10000,AntySort,99);
  ExecutionIntroSort(IM1);
  ExecutionIntroSort(IM2);
  ExecutionIntroSort(IM3);
  ExecutionIntroSort(IM4);
  ExecutionIntroSort(IM5);
  ExecutionIntroSort(IM6);
  ExecutionIntroSort(IM7);
  ExecutionIntroSort(IM8);
  cout<<endl;


//////////////////////////////////////////////////////////////////////////////////////////////
  Matrix QQM1(SIZE_OF_MATRIX,50000,Hazard,1);
  Matrix QQM2(SIZE_OF_MATRIX,50000,Sort,25);
  Matrix QQM3(SIZE_OF_MATRIX,50000,Sort,50);
  Matrix QQM4(SIZE_OF_MATRIX,50000,Sort,75);
  Matrix QQM5(SIZE_OF_MATRIX,50000,Sort,95);
  Matrix QQM6(SIZE_OF_MATRIX,50000,Sort,99);
  Matrix QQM7(SIZE_OF_MATRIX,50000,Sort,99.7);
  Matrix QQM8(SIZE_OF_MATRIX,50000,AntySort,99);
  ExecutionQuickSort(QQM1);
  ExecutionQuickSort(QQM2);
  ExecutionQuickSort(QQM3);
  ExecutionQuickSort(QQM4);
  ExecutionQuickSort(QQM5);
  ExecutionQuickSort(QQM6);
  ExecutionQuickSort(QQM7);
  ExecutionQuickSort(QQM8);
  cout<<endl;


  Matrix MMM1(SIZE_OF_MATRIX,50000,Hazard,1);
  Matrix MMM2(SIZE_OF_MATRIX,50000,Sort,25);
  Matrix MMM3(SIZE_OF_MATRIX,50000,Sort,50);
  Matrix MMM4(SIZE_OF_MATRIX,50000,Sort,75);
  Matrix MMM5(SIZE_OF_MATRIX,50000,Sort,95);
  Matrix MMM6(SIZE_OF_MATRIX,50000,Sort,99);
  Matrix MMM7(SIZE_OF_MATRIX,50000,Sort,99.7);
  Matrix MMM8(SIZE_OF_MATRIX,50000,AntySort,99);
  ExecutionMergeSort(MMM1);
  ExecutionMergeSort(MMM2);
  ExecutionMergeSort(MMM3);
  ExecutionMergeSort(MMM4);
  ExecutionMergeSort(MMM5);
  ExecutionMergeSort(MMM6);
  ExecutionMergeSort(MMM7);
  ExecutionMergeSort(MMM8);
  cout<<endl;


  Matrix IIM1(SIZE_OF_MATRIX,50000,Hazard,1);
  Matrix IIM2(SIZE_OF_MATRIX,50000,Sort,25);
  Matrix IIM3(SIZE_OF_MATRIX,50000,Sort,50);
  Matrix IIM4(SIZE_OF_MATRIX,50000,Sort,75);
  Matrix IIM5(SIZE_OF_MATRIX,50000,Sort,95);
  Matrix IIM6(SIZE_OF_MATRIX,50000,Sort,99);
  Matrix IIM7(SIZE_OF_MATRIX,50000,Sort,99.7);
  Matrix IIM8(SIZE_OF_MATRIX,50000,AntySort,99);
  ExecutionIntroSort(IIM1);
  ExecutionIntroSort(IIM2);
  ExecutionIntroSort(IIM3);
  ExecutionIntroSort(IIM4);
  ExecutionIntroSort(IIM5);
  ExecutionIntroSort(IIM6);
  ExecutionIntroSort(IIM7);
  ExecutionIntroSort(IIM8);
  cout<<endl;


//////////////////////////////////////////////////////////////////////////////////////////////////////
  Matrix QQQM1(SIZE_OF_MATRIX,100000,Hazard,1);
  Matrix QQQM2(SIZE_OF_MATRIX,100000,Sort,25);
  Matrix QQQM3(SIZE_OF_MATRIX,100000,Sort,50);
  Matrix QQQM4(SIZE_OF_MATRIX,100000,Sort,75);
  Matrix QQQM5(SIZE_OF_MATRIX,100000,Sort,95);
  Matrix QQQM6(SIZE_OF_MATRIX,100000,Sort,99);
  Matrix QQQM7(SIZE_OF_MATRIX,100000,Sort,99.7);
  Matrix QQQM8(SIZE_OF_MATRIX,100000,AntySort,99);
  ExecutionQuickSort(QQQM1);
  ExecutionQuickSort(QQQM2);
  ExecutionQuickSort(QQQM3);
  ExecutionQuickSort(QQQM4);
  ExecutionQuickSort(QQQM5);
  ExecutionQuickSort(QQQM6);
  ExecutionQuickSort(QQQM7);
  ExecutionQuickSort(QQQM8);
  cout<<endl;


  Matrix MMMM1(SIZE_OF_MATRIX,100000,Hazard,1);
  Matrix MMMM2(SIZE_OF_MATRIX,100000,Sort,25);
  Matrix MMMM3(SIZE_OF_MATRIX,100000,Sort,50);
  Matrix MMMM4(SIZE_OF_MATRIX,100000,Sort,75);
  Matrix MMMM5(SIZE_OF_MATRIX,100000,Sort,95);
  Matrix MMMM6(SIZE_OF_MATRIX,100000,Sort,99);
  Matrix MMMM7(SIZE_OF_MATRIX,100000,Sort,99.7);
  Matrix MMMM8(SIZE_OF_MATRIX,100000,AntySort,99);
  ExecutionMergeSort(MMMM1);
  ExecutionMergeSort(MMMM2);
  ExecutionMergeSort(MMMM3);
  ExecutionMergeSort(MMMM4);
  ExecutionMergeSort(MMMM5);
  ExecutionMergeSort(MMMM6);
  ExecutionMergeSort(MMMM7);
  ExecutionMergeSort(MMMM8);
  cout<<endl;


  Matrix IIIM1(SIZE_OF_MATRIX,100000,Hazard,1);
  Matrix IIIM2(SIZE_OF_MATRIX,100000,Sort,25);
  Matrix IIIM3(SIZE_OF_MATRIX,100000,Sort,50);
  Matrix IIIM4(SIZE_OF_MATRIX,100000,Sort,75);
  Matrix IIIM5(SIZE_OF_MATRIX,100000,Sort,95);
  Matrix IIIM6(SIZE_OF_MATRIX,100000,Sort,99);
  Matrix IIIM7(SIZE_OF_MATRIX,100000,Sort,99.7);
  Matrix IIIM8(SIZE_OF_MATRIX,100000,AntySort,99);
  ExecutionIntroSort(IIIM1);
  ExecutionIntroSort(IIIM2);
  ExecutionIntroSort(IIIM3);
  ExecutionIntroSort(IIIM4);
  ExecutionIntroSort(IIIM5);
  ExecutionIntroSort(IIIM6);
  ExecutionIntroSort(IIIM7);
  ExecutionIntroSort(IIIM8);
  cout<<endl;


  //////////////////////////////////////////////////////////////////////////////////////////////////////
  Matrix QQQQM1(SIZE_OF_MATRIX,500000,Hazard,1);
  Matrix QQQQM2(SIZE_OF_MATRIX,500000,Sort,25);
  Matrix QQQQM3(SIZE_OF_MATRIX,500000,Sort,50);
  Matrix QQQQM4(SIZE_OF_MATRIX,500000,Sort,75);
  Matrix QQQQM5(SIZE_OF_MATRIX,500000,Sort,95);
  Matrix QQQQM6(SIZE_OF_MATRIX,500000,Sort,99);
  Matrix QQQQM7(SIZE_OF_MATRIX,500000,Sort,99.7);
  Matrix QQQQM8(SIZE_OF_MATRIX,500000,AntySort,99);
  ExecutionQuickSort(QQQQM1);
  ExecutionQuickSort(QQQQM2);
  ExecutionQuickSort(QQQQM3);
  ExecutionQuickSort(QQQQM4);
  ExecutionQuickSort(QQQQM5);
  ExecutionQuickSort(QQQQM6);
  ExecutionQuickSort(QQQQM7);
  ExecutionQuickSort(QQQQM8);
  cout<<endl;


  Matrix MMMMM1(SIZE_OF_MATRIX,500000,Hazard,1);
  Matrix MMMMM2(SIZE_OF_MATRIX,500000,Sort,25);
  Matrix MMMMM3(SIZE_OF_MATRIX,500000,Sort,50);
  Matrix MMMMM4(SIZE_OF_MATRIX,500000,Sort,75);
  Matrix MMMMM5(SIZE_OF_MATRIX,500000,Sort,95);
  Matrix MMMMM6(SIZE_OF_MATRIX,500000,Sort,99);
  Matrix MMMMM7(SIZE_OF_MATRIX,500000,Sort,99.7);
  Matrix MMMMM8(SIZE_OF_MATRIX,500000,AntySort,99);
  ExecutionMergeSort(MMMMM1);
  ExecutionMergeSort(MMMMM2);
  ExecutionMergeSort(MMMMM3);
  ExecutionMergeSort(MMMMM4);
  ExecutionMergeSort(MMMMM5);
  ExecutionMergeSort(MMMMM6);
  ExecutionMergeSort(MMMMM7);
  ExecutionMergeSort(MMMMM8);
  cout<<endl;


  Matrix IIIIM1(SIZE_OF_MATRIX,500000,Hazard,1);
  Matrix IIIIM2(SIZE_OF_MATRIX,500000,Sort,25);
  Matrix IIIIM3(SIZE_OF_MATRIX,500000,Sort,50);
  Matrix IIIIM4(SIZE_OF_MATRIX,500000,Sort,75);
  Matrix IIIIM5(SIZE_OF_MATRIX,500000,Sort,95);
  Matrix IIIIM6(SIZE_OF_MATRIX,500000,Sort,99);
  Matrix IIIIM7(SIZE_OF_MATRIX,500000,Sort,99.7);
  Matrix IIIIM8(SIZE_OF_MATRIX,500000,AntySort,99);
  ExecutionIntroSort(IIIIM1);
  ExecutionIntroSort(IIIIM2);
  ExecutionIntroSort(IIIIM3);
  ExecutionIntroSort(IIIIM4);
  ExecutionIntroSort(IIIIM5);
  ExecutionIntroSort(IIIIM6);
  ExecutionIntroSort(IIIIM7);
  ExecutionIntroSort(IIIIM8);
  cout<<endl;


   //////////////////////////////////////////////////////////////////////////////////////////////////////
  Matrix QQQQQM1(SIZE_OF_MATRIX,1000000,Hazard,1);
  Matrix QQQQQM2(SIZE_OF_MATRIX,1000000,Sort,25);
  Matrix QQQQQM3(SIZE_OF_MATRIX,1000000,Sort,50);
  Matrix QQQQQM4(SIZE_OF_MATRIX,1000000,Sort,75);
  Matrix QQQQQM5(SIZE_OF_MATRIX,1000000,Sort,95);
  Matrix QQQQQM6(SIZE_OF_MATRIX,1000000,Sort,99);
  Matrix QQQQQM7(SIZE_OF_MATRIX,1000000,Sort,99.7);
  Matrix QQQQQM8(SIZE_OF_MATRIX,1000000,AntySort,99);
  ExecutionQuickSort(QQQQQM1);
  ExecutionQuickSort(QQQQQM2);
  ExecutionQuickSort(QQQQQM3);
  ExecutionQuickSort(QQQQQM4);
  ExecutionQuickSort(QQQQQM5);
  ExecutionQuickSort(QQQQQM6);
  ExecutionQuickSort(QQQQQM7);
  ExecutionQuickSort(QQQQQM8);
  cout<<endl;


  Matrix MMMMMM1(SIZE_OF_MATRIX,1000000,Hazard,1);
  Matrix MMMMMM2(SIZE_OF_MATRIX,1000000,Sort,25);
  Matrix MMMMMM3(SIZE_OF_MATRIX,1000000,Sort,50);
  Matrix MMMMMM4(SIZE_OF_MATRIX,1000000,Sort,75);
  Matrix MMMMMM5(SIZE_OF_MATRIX,1000000,Sort,95);
  Matrix MMMMMM6(SIZE_OF_MATRIX,1000000,Sort,99);
  Matrix MMMMMM7(SIZE_OF_MATRIX,1000000,Sort,99.7);
  Matrix MMMMMM8(SIZE_OF_MATRIX,1000000,AntySort,99);
  ExecutionMergeSort(MMMMMM1);
  ExecutionMergeSort(MMMMMM2);
  ExecutionMergeSort(MMMMMM3);
  ExecutionMergeSort(MMMMMM4);
  ExecutionMergeSort(MMMMMM5);
  ExecutionMergeSort(MMMMMM6);
  ExecutionMergeSort(MMMMMM7);
  ExecutionMergeSort(MMMMMM8);
  cout<<endl;


  Matrix IIIIIM1(SIZE_OF_MATRIX,1000000,Hazard,1);
  Matrix IIIIIM2(SIZE_OF_MATRIX,1000000,Sort,25);
  Matrix IIIIIM3(SIZE_OF_MATRIX,1000000,Sort,50);
  Matrix IIIIIM4(SIZE_OF_MATRIX,1000000,Sort,75);
  Matrix IIIIIM5(SIZE_OF_MATRIX,1000000,Sort,95);
  Matrix IIIIIM6(SIZE_OF_MATRIX,1000000,Sort,99);
  Matrix IIIIIM7(SIZE_OF_MATRIX,1000000,Sort,99.7);
  Matrix IIIIIM8(SIZE_OF_MATRIX,1000000,AntySort,99);
  ExecutionIntroSort(IIIIIM1);
  ExecutionIntroSort(IIIIIM2);
  ExecutionIntroSort(IIIIIM3);
  ExecutionIntroSort(IIIIIM4);
  ExecutionIntroSort(IIIIIM5);
  ExecutionIntroSort(IIIIIM6);
  ExecutionIntroSort(IIIIIM7);
  ExecutionIntroSort(IIIIIM8);
  cout<<endl;


}



