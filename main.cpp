#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>
#include <sculptor.h>

using namespace std;
//Exemplo que contém todos as funções
int main()
{
    string arqOFF="arqOFF";
    string arqVECT = "arqVECT";
    Sculptor ProjetoSculptor(100,100,100);


//                OBJETO 1
// Cubo mágico
    //Cor inicial do Cubo
    ProjetoSculptor.cutBox(0,0,0,0,0,0);
    ProjetoSculptor.setColor(0.3,0.8,1,1);
    ProjetoSculptor.putBox(60,60,60,63,63,63);

    //Face de cima
        //Vermelho
    ProjetoSculptor.setColor(0.9,0.2,0.1,1);
    ProjetoSculptor.putVoxel(60,60,62);
    ProjetoSculptor.putVoxel(62,62,62);
        //Verde
    ProjetoSculptor.setColor(0.1,0.9,0.2,1);
    ProjetoSculptor.putVoxel(60,62,62);
    ProjetoSculptor.putVoxel(62,60,62);

    //Face de baixo
        //Vermelho
    ProjetoSculptor.setColor(0.9,0.2,0.1,1);
    ProjetoSculptor.putVoxel(60,60,60);
    ProjetoSculptor.putVoxel(62,62,60);
        //Verde
    ProjetoSculptor.setColor(0.1,0.9,0.2,1);
    ProjetoSculptor.putVoxel(60,62,60);
    ProjetoSculptor.putVoxel(62,60,60);

    //Cor Preta
    ProjetoSculptor.setColor(0.1,0.1,0.1,1);
    ProjetoSculptor.putVoxel(60,61,61);
    ProjetoSculptor.putVoxel(61,60,61);
    ProjetoSculptor.putVoxel(62,61,61);
    ProjetoSculptor.putVoxel(61,62,61);
    ProjetoSculptor.putVoxel(61,61,62);
    ProjetoSculptor.putVoxel(61,61,60);


//                    OBJETO 2

//Editar Ellipsoid
    //Construindo a estrutura da nave
    ProjetoSculptor.setColor(0.001,0.001,0.3,1);
    ProjetoSculptor.putEllipsoid(50,50,50,35,10,35);
    ProjetoSculptor.setColor(0.99,0.99,0.99,1);

    //Construindo a cabine da nave
    ProjetoSculptor.cutSphere(50,57,50, 13);
    ProjetoSculptor.setColor(0.99,0.99,0.99,1);
    ProjetoSculptor.putSphere(49,54,49, 13);

    //Construindo a turbina da nave
    ProjetoSculptor.setColor(0,1,0,1);
    ProjetoSculptor.putEllipsoid(50,70,35,18,10,10);
    ProjetoSculptor.cutSphere(50,70,15,10);
    ProjetoSculptor.cutSphere(50,70,15,10);

    //Fazendo a chama
    ProjetoSculptor.setColor(0.9,0.1,0.1,1);
    ProjetoSculptor.putSphere(50,70,15,10);
    ProjetoSculptor.cutSphere(48,68,13,9);

    // Armas frontais
    ProjetoSculptor.setColor(0,0,1,1);
    ProjetoSculptor.putSphere(50,70,55,4);
    ProjetoSculptor.putVoxel(46,66,51);


    ProjetoSculptor.writeVECT(arqVECT);
    ProjetoSculptor.writeOFF(arqOFF);
    return 0;
}


