#pragma once
#include <chrono>
#include "Vector.hh"


enum Action
{
    Hazard,
    Sort,
    AntySort
};

enum TypeOfSort
{
    QuickType,
    MergeType,
    IntroType,
};

class Matrix
{
    Vector *Row;
    int X_Dime;
    double PercentOfSort;
    Action Act;
    public:
    Vector operator [] (int i) const {return Row[i];}
    Vector &operator [] (int i) {return Row[i];}
    Matrix(int X_Dime,int Y_Dime,Action What, double PercentOfSort);
    void ToScreen();
    int GetX_Dime(){return X_Dime;}
    double GetPercentOfSort(){return PercentOfSort;}
    Action GetAct(){return Act;}
    ~Matrix();

};

void ShowStatistic(TypeOfSort Type,Matrix &Mat,std::chrono::duration<double> &Time_delay);
