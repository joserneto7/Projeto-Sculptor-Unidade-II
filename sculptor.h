#ifndef SCULPTOR_H
#define SCULPTOR_H

#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

//estrutura para os blocos.
struct Voxel{
    float red,green,blue; //Cores.
    float alpha;          //Transparência.
    bool isOn;            //incluir ou não.
};

//classe para moldar.
class Sculptor{
private:
    Voxel ***v;//Matriz 3D.
    int nl,nc,np;//Dimensões.
    float r,g,b,a;//Cores.

public:
    //Alocação da Matriz 3D.
    Sculptor(int _nx=0, int _ny=0, int _nz=0);
    /**
    * @brief Função para alocar a matriz necessária para esculpir os desenhos.
    */

    //Liberar a memória utilizada.
    ~Sculptor();

    void setColor(float _r, float _g, float _b, float alpha);
    /**
     * @brief Atribuição das cores do objeto que está sendo desenvolvido.
     * @param _r,_g,_b são os parâmetros para definir a quantidade de vermelho, verde e azul, respectivamente, do que está
     * sendo desenhado.O usuário pode digitar um número float no intervalo de zero à um, representando, nessa ordem, a ausência
     * completa da cor e o máximo da da cor.
     * @param alpha define a transparência do objeto, variando também de zero à um, conforme exposto acima.
      */

    void putVoxel(int x, int y, int z);
    /**
     * @brief Adiciona um Voxel (Um bloco construtor) dentro da matriz
     * @param x,y,z representam as cordenadas espaciais de onde você quer inserir esse voxel dentro da matriz.
      */

    void cutVoxel(int x, int y, int z);
    /**
     * @brief Essa função tem por finalidade desconstruir um voxel, já explicado de dentro da matriz.
     * @param x,y,z são as coordenadas espaciais do voxel que se quer cortar
       */

    void putBox(int x0, int y0, int z0, int x1, int y1, int z1);
    /**
      * @brief Cria uma sequência de Voxels em forma de um cubo.
      * @param x0,y0,z0 são as coordenadas iniciais de onde será construído.
      * @param x1,y1,z1 delimitam até qual coordenada o cubo será construído
      */

    void cutBox(int x0, int y0, int z0, int x1, int y1, int z1);
    /**
      * @brief Corta uma sequência de Voxels em forma de cubo.
      * @param Os parâmetros possuem o mesmo significado dos encontrados na função @sa putBox, mas dessa vez para desconstruir.
      */

    void putSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
      * @brief Criar uma sequência de Voxels em forma de esfera.
      * @param xcenter é o centro da esfera na coordenada x;
      * @param ycenter é o centro da esfera na coordenada y;
      * @param zcenter é o centro da esfera na coordenada z;
      * @param radius é o raio da esfera.
      */

    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
    /**
      * @brief Cortar uma sequência de Voxels em forma de esfera.
      * @param são os mesmos da @sa putSphere
      */

    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
      * @brief Criar uma sequência de Voxels em forma de elipsóide.
      * @param xcenter,ycenter,zcenter representam o centro da elipsóide nas componentes x, y e z da matriz
      * @param rx,ry,rz representam o raio do elipsóide nas componentes x, y e z da matriz
      */

    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
      @brief Cortar uma sequência de Voxels, Em forma de elipsóide.
      @param são os mesmo da @sa putEllipsoid
        */

    void writeOFF(string filename);
    /**
      @brief Criar arquivo para leitura do desenho, contendo as dimensões e as cores.
      */

    void writeVECT(string filename);
    /**
      @brief Criar arquivo para armazenar quantidades de poligonos,vertices e posições.
      */
};
#endif // SCULPTOR_H
