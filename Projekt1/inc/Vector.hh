#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <fstream>
using namespace std;




class Vector
{
  int *Column;
  int Y_Dime;
  int *CurrentElement = NULL;

public:
  int &operator [] (int i)      {return CurrentElement[i];}
  int operator [] (int i)const {return CurrentElement[i];}
  int* ReturnWsk(){return CurrentElement;}
  void AddWsk(int value){CurrentElement+=value;}
  Vector();
  Vector(int Y_Dime);
  ~Vector();
  Vector(const Vector &Wek);    
  void CreateColumn(int Y_Dime);
  void RandomTables();
  void PercentSortTables(double Percent);
  void ToScreen();
  void InvertSort();
  bool CheckCorrect();
  int GetY_Dime(){return Y_Dime;}

};





























/* 
template <int Y_Dime>
class Vector
{
   int Column[Y_Dime];
   public:
   int &operator [] (int i)      {return Column[i];}
   int operator [] (int i)const {return Column[i];}
   bool SaveToFile(string NameFile);



   Vector(double PercentOfSort=25)
   {
       int NumberElemSort = static_cast<int>(0.01*PercentOfSort * (double)Y_Dime);
       int i;
       for(i=0;i<Y_Dime;i++)
       {
            if(i<NumberElemSort)
            {
                Column[i] = i;
            }
            else
            {
                srand((int)time(NULL));
                int RandNumber = rand()%(Y_Dime+i);
                Column[i] = RandNumber;
            }

       }

   }
   Vector(const  Vector &Wek) 
   {
        for (int i = 0; i < Y_Dime; ++i) 
        {
        Column[i] = Wek[i];
        }
    }    
   
};



template <int Y_Dime>
ostream& operator << (ostream &Strm, const Vector <Y_Dime> &Wek)
{
  int i;
  for(i = 0;i<Y_Dime;i++)
  {
    Strm<<Wek[i]<<" ";
  }
  Strm<<endl<<endl;
  return Strm;
}


template<int Y_Dime>
bool Vector<Y_Dime>::SaveToFile(string NameFile)
{
  ofstream  StrmFile;

  StrmFile.open(NameFile);
  if (!StrmFile.is_open())  {
    cerr << ":(  Open operation  to saving  \"" << NameFile << "\"" << endl
	 << ":(  is not done." << endl;
    return false;
  }
  StrmFile<<Column;
  return !StrmFile.fail();
}
*/