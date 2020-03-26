#include "Vector.hh"



Vector::Vector()
{
    Column = NULL;
    this->Y_Dime = 0;
}

Vector::Vector(int Y_Dime)
{
    Column = new int[Y_Dime];
    this->Y_Dime = Y_Dime;
}

Vector::Vector(const  Vector &Wek) 
{
    for (int i = 0; i < Y_Dime; i++) 
    {
        Column[i] = Wek[i];
    }
}

Vector::~Vector()
{
    delete [] Column;
}
void Vector::RandomTables()				//Funkcja ktora wypelnia tablice losowymi wartosciami
{
    int i;
    for(i=0;i<Y_Dime;i++)
    {
      Column[i]= rand()%(Y_Dime+i);
    }
}

void Vector::ToScreen()
{
    int i;
    for(i=0;i<Y_Dime;i++)
    {
      cout<<Column[i]<<" ";
    }
    cout<<endl;
}

void Vector::PercentSortTables(double Percent)		//Funkcja wypelniajaca tablice w uporzadkowany sposob, czesc wypelniona w n procentach, a reszta losowo
{
    int NumberElemSort = static_cast<int>(0.01*Percent * (double)Y_Dime);
       int i;
       for(i=0;i<Y_Dime;i++)
       {
            if(i<NumberElemSort)
            {
                Column[i] = i;
            }
            else
            {
                Column[i] = rand()%(Y_Dime+i);
            }

       }
}


void Vector::CreateColumn(int Y_Dime)
{
    this->Y_Dime = Y_Dime;
    Column = new int[Y_Dime];
    CurrentElement = Column;
}
					
void Vector::InvertSort()					//Funkcja uzupelniajaca tablice odwrotnie, posortowane malejaco
{
    int i;
    for(i=0;i<Y_Dime;i++)
    {
      Column[i]= Y_Dime - i;
    }
}

bool Vector::CheckCorrect()					//Funkcja sprawdzajaca czy tablica zostala posortowana prawidlowo 
{
    int Counter = 0;
    int i;
    for(i=0;i<Y_Dime-1;i++)
    {
        if(Column[i]<=Column[i+1]){++Counter;}
    }
    if(Counter == Y_Dime-1)
    {
        return true;
    }
    else
    {
        cout<<"Blad na  "<<Counter<<endl;
        return false;
    }
}
