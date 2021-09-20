#include<iostream>
#include<string.h>
using namespace std;

char sustituir(char origen[],char destino[])
{
    int a, b , tam;
    tam =strlen(origen);
    b=0;
    for(a=0; a < tam; a++)
    {
        if(origen[a] == 'j')
        {
            destino[b] = 'i',
        }
        if(origen[a] == 'h')
        {
            destino[b] = 'i';
        }
        if(origen[a] == 'ñ')
        {
            destino[b] = 'n';
        }
        if(origen[a] == 'k')
        {
            destino[b] = 'l';
        }
        if(origen[a] == 'u')
        {
            destino[b] = 'v';
        }
        if(origen[a] == 'w')
        {
            destino[b] = 'v';
        }
        if(origen[a] == 'y')
        {
            destino[b] = 'z'
        }
        b++;     
    return destino[b];  
    }
}



int espacios(char origen[],char destino[])
{
    int a, b , tam,blancos;
    tam =strlen(origen);
    blancos = 0;
    b=0;
    for(a=0; a < tam; a++)
    {
        if(origen[a] == ' ')
        {
            destino[b] = origen[a];
            b++;
        }
        else{
            blancos++;
            destino[b] = '*';
            destino[b+1] = '*';
            b+=2;
        }
    destino[b] = '\0';     
    return blancos;  
    }
}

int main()
{

}