#include <iostream>

using namespace std;
int matrizsuma(int[],int);
//int mult(int[][],int[][],int[][]);
void revers(char[],int,int,int);
void multarra(int[][3],int[][3],int[][3],int);
int lenghht(char[]);
int main()
{
/*--------------------------Ejercicio 1*/
    /*int len=6;
    int ma[]={5,6,4,5,10,20};
    cout<<"La suma de la matriz es : "<<matrizsuma(ma,len);*/
/*--------------------------Ejercico 2*/
   /* int len=3;
    int A[3][3];
    int B[3][3];
    int C[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            A[i][j]=3;
            B[i][j]=6;

        }
    }
    multarra(A,B,C,len);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<C[i][j];
        }cout<<'\n';
    }

*/

/*--------------------------Ejercico 3*/
   /* char cadena[]="marioneta";
    int len;
    len=lenghht(cadena);
    //cout<<len<<endl;
    revers(cadena,0,len/2,len);
    for(int i=0;cadena[i]!='\0';i++){
        cout<<cadena[i];
    }*/
    return 0;

}

int matrizsuma(int arra[],int len){
    if(len==1){
        return arra[len-1];
    }else{
        return arra[len-1]+matrizsuma(arra,len-1);
    }
}
void revers(char cadena[],int i,int lenme,int len){
    char a;
    if(lenme!=len){
        a=cadena[len-1];
        cadena[len-1]=cadena[i];
        cadena[i]=a;
        revers(cadena,i+1,lenme,len-1);
    }
}
int lenghht(char cadena[]){
    int c=0;
     for(int i=0;cadena[i]!='\0';i++){
        c++;
    }
    return c;
}
void multarra(int p1[3][3], int p2[3][3],int resul[3][3],int len){
    int sum=0;
    for(int t=0;t<len;t++){
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                sum=sum+(p1[t][j]*p2[j][i]);
                //resul[t][i]+=sum+(p1[t][j]*p2[j][i]);
            }
            resul[t][i]=sum;
            sum=0;
        }
    }

}
