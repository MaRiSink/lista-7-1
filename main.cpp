#include <iostream>

using namespace std;

int main()
{
    //1
      /*int tablica[3];

      cout << tablica[0] << endl;
      cout << tablica[1] << endl;
      cout << tablica[2] << endl;*/


      //2
      /*int tablica[3];

      tablica[0] = 4;
      tablica[1] = 2;
      tablica[2] = 0;

      cout << tablica[0] << endl;
      cout << tablica[1] << endl;
      cout << tablica[2] << endl;*/


      //3
     /* int tablica[5] = {0};

      cout << tablica[0] << endl;
      cout << tablica[1] << endl;
      cout << tablica[2] << endl;
      cout << tablica[3] << endl;
      cout << tablica[4] << endl;*/



      //4
      /*int tablica[10];

      tablica[0] = -1;
      tablica[1] = -1;
      tablica[2] = -1;
      tablica[3] = -1;
      tablica[4] = -1;
      tablica[5] = -1;
      tablica[6] = -1;
      tablica[7] = -1;
      tablica[8] = -1;
      tablica[9] = -1;


      cout << tablica[0] << endl;
      cout << tablica[1] << endl;
      cout << tablica[2] << endl;
      cout << tablica[3] << endl;
      cout << tablica[4] << endl;
      cout << tablica[5] << endl;
      cout << tablica[6] << endl;
      cout << tablica[7] << endl;
      cout << tablica[8] << endl;
      cout << tablica[9] << endl;*/



      //5

      /*bool tablica[100];


      for ( int i = 0; i < 100; i++)
      {
          if ( i % 2 == 0)
      {
          tablica[i] = 1;
          cout << tablica[i]<< endl;

      }
      else
      {
        tablica[i] = 0;
          cout << tablica[i]<< endl;

      }
      }*/






      //6
     /* int tablica[100];

      for ( int i = 0; i < 100; i++)
      {
          tablica[i] = i;
          cout << tablica[i]<< endl;
      }*/




      //7
     /* long long tablica[63];
      long long m = 1;

      for ( int i = 0; i < 63; i++)
      {
          m = m*2;
         tablica[i] = m;
         cout << tablica[i]<< endl;
      }*/




      //8
        float b=0;
      int l;
      cout << "Ile liczb chcesz wpisacz ";
      cin >> l;

      float tablica[l];
       for ( int i = 0; i < l; i++)
      {

          float a;
          cin >> a;
          b+=a;
          cout << endl;
          tablica[l] = a;
         cout << tablica[l]<< endl;
      }
      cout<<b/l;




    return 0;
}
