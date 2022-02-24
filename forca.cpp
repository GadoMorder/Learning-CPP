#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int num,x,y=0,z,win;
    cout<<"         JOGO DA FORCA           \n";
    cout<<"As letras devem ser digitadas uma a uma\n";
    cout<<"Pense na palavra a ser encontrada\n";
    cout<<"Digite o numero de letras da palavra: ";
    cin>>num;
    char palavra[num];
    cout<<"\nDigite a palavra\n";
    for (x=0; x<num; x++){
        cout<<"Digite a "<<x<<" Letra: ";
        cin>>palavra[x];
    }

    for(z=0; z<num; z++){
        cout<<palavra[z];
    }
    cout<<'\n\nPrecione qualquer tecla para começar o jogo\n';
   

    system("pause");
    system("cls");

    cout<<"         JOGO DA FORCA           \n";
    cout<<"A palavra a ser descoberta tem ";
    cout<<num<<" letras\n";
    cout<<"Voce possui 3 vidas, a cada erro vc perde uma\n";

    int vidas=3 ;
    char letra;
    win = num;
    

    while(vidas>0 and win>0){
        bool acerto = false;
        cout<<"Digite uma letra: ";
        cin>>letra;
        for(y=0;y<num;y++){
            if(letra==palavra[y]){
                cout<<"\nVoce acertou a letra "<<letra<<" na posicao "<< y+1<<"\n";
                win-- ;
                acerto = true;}}
        if (acerto == true){
            cout<<"Faltam "<<win<<" letras\n";
        }else{
            vidas--;
            cout<<"Pedeu uma vida lhe restam: "<<vidas<<"\n";
        } 
    }            
    if(win == 0){
            cout<<"Parabens, voce venceuuuuuu!!!!";}

    if(vidas ==0){
        cout<<"Voce perdeu tente novamente";}
    
    return 0;
}