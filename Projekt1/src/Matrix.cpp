#include "Matrix.hh"



Matrix::Matrix(int X_Dime,int Y_Dime,Action What, double PercentOfSort)
{
    this->X_Dime = X_Dime;
    Row = new Vector[X_Dime];
    this->Act = What;
    this->PercentOfSort = PercentOfSort;
    int i;
    switch (What)
    {
        case Hazard:

            for(i=0;i<X_Dime;i++)
            {
                Row[i].CreateColumn(Y_Dime);
                Row[i].RandomTables();
            }
        break;

        case Sort:

            for(i=0;i<X_Dime;i++)
            {
                Row[i].CreateColumn(Y_Dime);
                Row[i].PercentSortTables(PercentOfSort);
            }
        break;

        case AntySort:

            for(i=0;i<X_Dime;i++)
            {
                Row[i].CreateColumn(Y_Dime);
                Row[i].InvertSort();
            }
        break;
        default:
        break;
    }  
}


Matrix::~Matrix()
{
    int i;
    for(i=0;i<X_Dime;i++)
    {
        Row[i].~Vector();
    }
}

void Matrix::ToScreen()
{
    int i;
    for(i=0;i<X_Dime;i++)
    {
        cout<<i<<"wiersz  ";
        Row[i].ToScreen();
        cout<<endl;
    }
}

void ShowStatistic(TypeOfSort Type,Matrix &Mat,std::chrono::duration<double> &Time_delay)
{
    int DimMatrix = Mat.GetX_Dime();
    int DimVector = Mat[0].GetY_Dime();
    switch (Type)
    {
        case QuickType:
            cout<<"QuickSort ";
            break;
        case MergeType:
            cout<<"MergeSort ";
            break;
        case IntroType:
            cout<<"IntroSort: ";
            break;
        default:
        break;
    }
    switch (Mat.GetAct())
    {

        case Hazard:
            cout<<DimMatrix<<"x"<<DimVector<<" Nieposortowana Czas: "<<Time_delay.count()<<endl;
            break;

        case Sort:
            cout<<DimMatrix<<"x"<<DimVector<<" Posortowana w "<<Mat.GetPercentOfSort()<<"% Czas: "<<Time_delay.count()<<endl;
            break;

        case AntySort:
            cout<<DimMatrix<<"x"<<DimVector<<" Posortowana odwrotnie, Czas: "<<Time_delay.count()<<endl;
            break;
    
    default:
        break;
    }
}