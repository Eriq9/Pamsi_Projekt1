#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <fstream>
#include <chrono>
#include "Vector.hh"
#include "Matrix.hh"

void Merge(Vector &Vec, int i_Left, int m, int i_Right);
void MergeSort(Vector &Vec, int i_Left, int i_Right);
void ExecutionMergeSort(Matrix &Mat);