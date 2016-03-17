#include <iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
#include<windows.h>


using namespace std;


struct PLANSZA{

    char POLE;
    bool B;
};

const int N=50, M=50;
int main()

{
     srand(time(0));
    PLANSZA T[N][N];

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            T[i][j].POLE=219;
            T[i][j].B=1;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<T[i][j].POLE<<" ";
        }
        cout<<endl;
    }
cout<<endl<<endl<<endl;

int h=0;int l=0;


for(int i=0;i<5;i++){


    h=((double)rand() / RAND_MAX)*N;
    l=((double)rand() / RAND_MAX)*N;

    T[h][l].POLE=179;
    T[h][l].B=0;

}

for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cout<<T[i][j].POLE<<" ";
    }
    cout<<endl;
}
cout<<endl<<endl;
    int a=7,b=8;
    T[a][b].B=0;

    if(T[a][b].B==1){
        T[a][b].B=0;
        b+=1;
    }
    if(T[a][b].B!=1){
        T[a][b].B=1;
        b=b-1;
    }

    int licznik=0;

    bool GORA=1;
    bool DOL=0;
    bool PRAWO=0;
    bool LEWO=0;

    for(int K=0;K<100000;K++){


        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<T[i][j].POLE;
            }
            cout<<endl;
        }
        cout<<"KROK:"<<licznik;
        Sleep (0);
        system("CLS");


        licznik++;

        if(a==N){
            a=0;
        }
        if(b==N){
            b=0;
        }

        if(a==-1){
            a=N-1;
        }
        if(b==-1){
            b=N-1;
        }

        if(T[a][b].B==1&&GORA==1){
            T[a][b].B=0;
            T[a][b].POLE=179;
            b=b-1;
            GORA=0;
            DOL=0;
            LEWO=1;
            PRAWO=0;
            continue;

        }

        if(T[a][b].B==0&&GORA==1){
            T[a][b].B=1;
            T[a][b].POLE=219;
            b=b+1;
            GORA=0;
            DOL=0;
            LEWO=0;
            PRAWO=1;
            continue;

        }

        if(T[a][b].B==1&&DOL==1){
            T[a][b].B=0;
            T[a][b].POLE=179;
            b=b+1;
            GORA=0;
            DOL=0;
            LEWO=0;
            PRAWO=1;
            continue;

        }

        if(T[a][b].B==0&&DOL==1){
            T[a][b].B=1;
            T[a][b].POLE=219;
            b=b-1;
            GORA=0;
            DOL=0;
            LEWO=1;
            PRAWO=0;
            continue;

        }

        if(T[a][b].B==1&&PRAWO==1){
            T[a][b].B=0;
            T[a][b].POLE=179;
            a=a-1;
            GORA=1;
            DOL=0;
            LEWO=0;
            PRAWO=0;
            continue;

        }

        if(T[a][b].B==0&&PRAWO==1){
            T[a][b].B=1;
            T[a][b].POLE=219;
            a=a+1;
            GORA=0;
            DOL=1;
            LEWO=0;
            PRAWO=0;
            continue;

        }

        if(T[a][b].B==1&&LEWO==1){
            T[a][b].B=0;
            T[a][b].POLE=179;
            a=a+1;
            GORA=0;
            DOL=1;
            LEWO=0;
            PRAWO=0;
            continue;

        }

        if(T[a][b].B==0&&LEWO==1){
            T[a][b].B=1;
            T[a][b].POLE=219;
            a=a-1;
            GORA=1;
            DOL=0;
            LEWO=0;
            PRAWO=0;
            continue;

        }



   }



//    for(int i=0;i<N;i++){
//        for(int j=0;j<N;j++){
//            cout<<T[i][j].POLE;
//        }
//        cout<<endl;
//    }





    return 0;
}

//    for(int i=0;i<8;i++){
//        if(a==10){
//            a=0;
//        }
//        if(b==10){
//            b=0;
//        }
//        if(T[a][b].B==1){
//            T[a][b].B=0;
//            T[a][b].POLE='u';
//            b=b+1;
//            continue;
//        }
//        if(T[a][b].B==0){
//            T[a][b].B=1;
//            T[a][b].POLE='a';
//            b=b-1;
//            continue;
//        }
//    }

