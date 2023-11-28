#include <iostream>
#include <string.h>
#include <limits>

using namespace std;

int main()
{
int barras=6, decision=0, opcionesn=0, salir=0;

while(opcionesn != 1 && opcionesn != 2 && opcionesn != 3 && opcionesn != 4 && opcionesn != 5)   
    {
cout<<"Hola! Hoy decidiras el rumbo de la historia de un cerdito llamado pascal y contaras con un contador de barras de comida \n"<<endl;
//menu 1
cout<<"Pascal era un cerdito que vivia en una granja junto a sus amigos, hasta que un dia un terrible remolino arrasó con todo a su paso y lo dejo varado en un desierto, Pascal decicio regresar a la granja con la esperanza de reencontrarse con sus amigos,  \n Ahora elige que hará Pascal \n 1:ir al pueblo \n 2:Espear que pase alguien \n 3:Ir al pueblo abandonado \n 4:ir a la bahia \n5.Salir del programa"<<endl;
std::cout << "Barras disponibles:"<<barras << endl;
cin>>opcionesn;
cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
    switch(opcionesn)
    {
    case 1:
    barras-=2;
    cout<<"fue al pueblo en donde encontró gente tratando de atraparlo y otro niño que le prometio ayudarlo. \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
        //menu1.1
        switch(opcionesn)
        {       
        case 1:
        barras-=1;
        cout<<"Fue con el niño y este le dió alimento \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Seguir confiando en el niño \n2.Esperar el momento e irse \n3.Tomar mas comida con la posibilidad que se enoje" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            switch(opcionesn)
            {
            barras-=2;
            case 1:
            cout<<"El niño te explico que el plan que era escapar un dia de su casa y empezar el viaje a tu granja. \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Aceptar el trato \n2.Decirle que no y que lo harás solo \n3.Robar su comida e irte" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.1.1
                switch(opcionesn)
                {
                barras-=2;
                case 1:
                cout<<"Aceptaste el trato y el dia del escape sus papas los descubrieron \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ayudar al niño y salvarlo \n2.Irse al momento \n3.Esperar para robarle dinero para ir a la granja \n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.1.1
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Lo ayudó y lo salvó!, El cumplió y lo llevó a la granja donde se reunió con sus amigos\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue rapido pero se le acabron las barras de energia y, ¡No logró llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Se fue y pidió un taxi hacia la granja, ¡Lo logró! Llegó a la granja, pero, ¿qué se sintió traicionarlo?"<<endl;
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 2:
                cout<<"Le dijó que no, y el niño le dijo que en verdad queria ayudarlo \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Confiar en él \n2.Que se vaya aun así \n3.Decirle que sí pero que si tambien podia llevarle comida a sus amigos" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.1.2
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Confió en él, cumplió y lo llevó a la granja donde se reunió con sus amigos\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue pero se le acabron las barras de energia y, ¡No logró llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Le dijo que sí pero qur solo poquita, te llevó, ¡Lo logró! Llegó a la granja y les diste comida a tus amigos"<<endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 3: 
                cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ir corriendo sin detenerse a la granja \n2.Ir pero haciendo una parada a ver que puede encontrar \n3.Esperar a reunir mas energia para irse" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Corrió pero le faltó energia y, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Hizó la parada y encontro agua que le dió la suficiente energia para llegar y, ¡Logró llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Esperó mucho y no reunio la suficiente energia, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                default:
                cout<<"Elige una opción correcta"<<endl;
                }
            break;    
            case 2:
            cout<<"Te fuiste y te perdiste, solo recuerdas el camino de regreso al niño \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Regresar con el niño \n2.Seguir caminando hasta encontrar algo \n3.Buscar en la basura algo de comida" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.12
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Regresaste con el niño pero te dijo que solo te podia decir el camino ya que no podia acompañarte \n Quedó con "<< (barras)-float(2); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"El cumplió y le dijo el camino a la granja, llegó y se reunió con sus amigos\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se fue rapido pero se le acabron las barras de energia y, ¡No logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Se fue y pidió un taxi hacia la granja, ¡Lo logró! Llegó a la granja, pero, ¿qué se sintió traicionarlo?"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Encontró un señor de un sombrero en una esquina que le ofreció ayuda \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguirlo \n2.Ignorarlo \n3.Morderlo" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Lo siguió y resulto ser malo\n ¡No logró regresar a la  granja y quedó hecho chicharrón!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"¡Lo ignoró y ya cuando se iba, el señor lo capturó y, ¡No logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Lo mordió y resulto ser una persona mala asi que por ayudar a atraparlo lo llevaron a la granja, ¡Lo logró! Llegó a la granja y se reunió con sus amigos, que feliz!"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3: 
                    cout<<"Encontraste comida pero parece un poco pasada \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Guardarla en su bolsa y usarla solo en caso de ser necesaria en el camino \n2.Comerla e irse\n3.Tirarla otra vez e ir a la granja" <<endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Inició el recorrido a la granja y comió lo que habia recogido y eso le ayudó a llegar a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se fue rapido y, ¡Logró llegar a la granja!\n¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 3:
                        cout<<"Tiro la comida y fue a la granja pero no le bastó la energia y, \n ¡No logró llegar!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                
                    break;
                    default:
                    cout<<"Elige una opción correcta"<<endl;
                    }
            break;
            case 3:
            cout<<"El niño se enojó y te regaño porque sus papas cuentan la comida y se pueden dar cuenta \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Aceptar el regaño del niño \n2.Enojarte o sentirte mal e irte \n3.Pedirle disculpas al niño y decirle que te vas a ir" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.13
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                        cout<<"Le dijó que no, y el niño le dijo que en verdad queria ayudarlo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                        cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
            break;
            default: 
            cout<<"Elige una opción correcta"<<endl;
            }
        
            
        break;
        case 2:
        cout<<"Siguió buscando y encontró un mapa \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Revisar el mapa \n2.Guardar el mapa \n3.Comerse el mapa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.2
                switch(opcionesn)
                {
                case 1: 
                cout<<"Revisaste el mapa y si esta la granja dentro de el \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Seguir el mapa \n2.Guardarlo y seguir buscando algo que le pueda ayudar\n3.Buscar comida para llevarles a sus amigos de la granja" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Siguió el  mapa pero a mitad de camino le ofrecieron mucha comida a cambio de el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cambiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio \n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Aceptó el trato y ya con la comida Inició el viaje, ¡Sí logró llegar a la granja!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Rechazó la oferte y no tuvo suficiente energia para llegar y, ¡No logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Lo estafó, el que le propuso el cambio le dió la comida y Pascal se iba a escapar pero lo atrapo el chico, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Encontró un carrito prendido abandonado \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Subirse, extender el mapa e ir a la granja \n2.Apagarlo y esperar al dueño \n3.Ignorarlo e irse a la granja" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Manejó hasta la granja con ayuda del mapa ¡Sí logró llegar a la granja!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Esperó al dueño y este le agradeció llevandolo y dandole dinero para comida \n¡Logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Ignoró el carro pero no tuvo la suficiente energia para llegar a la granja, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Solo encontró agua para sus amigos \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir solo con el agua \n2.Cambiar más de la mitad del agua por poca comida \n3.Tomar un poco de agua e irse corriendo a la granja" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corrió pero le faltó energia y tuvo que beber el agua, ¡Sí logró llegar a la granja!\n ¡Sus amigos lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Cambió el agua por la comida y llegó a la granja, ¡Logró llegar a la granja!, les dió la comida a sus amigos" << std::endl;
                        break;
                        case 3:
                        cout<<"No tomó el agua suficiente y no reunio la suficiente energia, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default: cout<<"elige una opción correcta"<<endl;
                    }
                break;
                case 2:
                cout<<"Guardó el mapa y comió de un plato abandonado al lado de la basura \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Abrir el mapa \n2.Tirar el mapa porque siente que le estorba \n3.Comer mas comida de la basura" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Abrió el mapa y vio que estaba un poco lejos de la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Irse sin comer nadamas \n2.Buscar agua y despues intentar llegar a la granja \n3.Descansar antes de partir a la granja" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corrió pero le faltó energia y, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Encontro agua que le dió la suficiente energia para llegar y, ¡Logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Se quedó dormid y le robaron el mapa, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Tiró el mapa y se quedó sin saber en donde estaba \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Decirle a un perro si sabe donde esta \n2.Buscar el mapa \n3.Intentar robar dinero de un niño" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"El perro le dijo que si sabia pero que era en otro estado, lo cual era imposible, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Buscó el mapa pero no lo encontró y se acabó sus barras de energia, ¡No lgró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Le robó dinero a un niño pero no le alcanzó para nada y lo atraparon, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Comió más comida y le hizó daño \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Avanzar hacia la granja \n2.Comer verduras e intentar llegar a la granja \n3.Tomar agua de un charco muy grande e intentar ir a la granja" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"No avanzó mucho cuando la comida hizo que se desmayara¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Comió las verduras y le dieron justo la energia para llegar, ¡Logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Tomó agua del charco pero termino intoxicado, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opción correcta"<<endl;
                    }
                    
                break;
                case 3:
                cout<<"Se comió el mapa y ahora no sabe donde esta \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Intentar vomitarlo \n2.No hacer nada \n3.Subirse a una camioneta que tiene animales dentro" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Intentó vomitarlo pero solo escupió pedazos del mapa pero muy importantes \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Cambaiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corrió pero le faltó energia y, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Hizó la parada y encontro agua que le dió la suficiente energia para llegar y, ¡Logró llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Esperó mucho y no reunio la suficiente energia, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"No hizó nada y pasó un carro que lo atropelló\n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Levantarse e irse \n2.Dejar que lo lleve al veterinario el del carro \n3.Cerrar los ojos" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Se levantó pero no llego mu lejos, se quedo sin energia, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Lo llevó al veterinario pero se encariño con el que lo atropelló y, ¡Conoció a su neuvo mejor amigo!" << std::endl;
                        break;
                        case 3:
                        cout<<"Cerró los ojos y lamentablemente, murió, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Subió a la camioneta y al subir habló con los demas animales, al parecer van a una granja\n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Bajarse de la camioneta \n2.Quedarse arriba de la camioneta \n3.Seguir preguntando a los otros animales aunque sienta que los estresa" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Se bajó de la granja y se perdió, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se quedó arriba de la camioneta y se dio cuenta que iba para su granja, eran animales nuevos , ¡Logró llegar a la granja y reunirse con sus amigos!" << std::endl;
                        break;
                        case 3:
                        cout<<"Les siguió preguntando pero los estresó y estos lo aventaron fuera de la camioneta, ¡No logró llegar a la granja!\n ¡Ni modo!\n Quedó con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opcion correcta"<< endl;
                    }
                break;
                case 4:
                cout<<"Salir del programa"<<endl;
                default:
                cout<<"Elige una opción correcta"<<endl;
                }
        break;
        case 3:
        cout<<"Entro a la casa abierta y se dió cuenta que era de un carnicero cuando vió los cuchillos y la carne \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.3
                switch(opcionesn)
                {
                case 1:
                cout<<"Se escondio y llegó el carnicero a dormir a su casa \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Salir de la casa \n2.Despertarlo e intentar hablar con el \n3.Hablar con el, el dia siguiente" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Salió de la casa y cuando estaba caminando solo, un policia lo subió a su patrulla \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Lo despertó y aunque al principio el carcnicero se espantó, logró hablar con el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Al principio el carcnicero se espantó, logró hablar con el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    default:
                    cout<<"Elige una opción correcta"<<endl; 
                    }
                break;
                case 2:
                cout<<"Tomó un poco de comida y se fue sin dejar rastro \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Entrar a otra casa \n2.Regresar en la noche a robarle al carnicero dinero \n3.Caminar dirección a la granja a ver si la ve" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Entró a otra casa y encontro un bebe solito en peligro \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Regreso pero el carnicero lo estaba esperando, el sí sabia que habia ido \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Camino y camino y no logro verla pero sabia que estaba cerca porque unas personas se lo dijeron \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opción correcta"<<endl; 
                    }
                break;
                case 3:
                cout<<"El carnicero lo vió y luego luego fue por el \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Correr \n2.Quedarse quieto y exlicarle la situación \n3.Atacarlo" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Corrió y escapó, gastó muchas barras \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Le explicó la situación y el carnicero lo entendió, el dijo que conocia la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Lo atacó pero el carnicero lo amarró y no le dio oportunidad de explciarle \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opción correcta"<<endl; 
                    }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opción correcta"<<endl;
                }
              
        break;
        default:
        cout<<"Elige una opción correc"<<endl;
        }
        
    break;        
    case 2:
    cout<<"Esperó y paso un carro que lo subió a su maletero y lo llevó a otra granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Estar dispuesto a conocer la nueva granja \n2.Morder al que lo recogio en cuanto lo agarre \n3.Hacer desastres en la nueva granja" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            
            //menu 1.2
            switch(opcionesn)
            {   
            case 1:
            cout<<"Conociste la nueva granja y es mejor que la otra en comodidad \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir acoplandose a la granja \n2.Idear un plan para escapar \n3.Hablarle a los demas animales" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.2.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Le gustó mucho la nueva granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Intentar hacer nuevos amigos \n2.Espiar al dueño \n3.Relajarse más" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Intentó hacer nuevos amigos y lo consiguió aunque le adivirtieron que no era tan buen lugar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Quedarse en la granja \n2.Intentar irse \n3.Preguntarles porqué" << std::endl;
 								   cin>>opcionesn;
			   			   		   cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
		   				   		   switch(opcionesn)
      		   			   		   {
             		   		   	   barras-=2;    
	                               case 1:
	                               cout<<"Se quedó en la nueva granja, ¡Tiene nuevo hogar!\n ¡Que le vaya bien!\n Quedó con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 2:
	                               cout<<"Intentó irse pero justo antes de salir lo agarraron, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 3:
	                               cout<<"Les preguntó porqué y ellos le dijeron que protno lo averiguaria \n ¡Quedó atrapado!\n ¡Que mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 4:
	                               return 0;
	                               default:
	                               cout<<"Elige una opcion correcta"<<endl;
	                               }
                        break;
                        case 2:
                        cout<<"Espió al dueño y resultó no ser tan buen lugar, el dueño era malo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir a contarle a los otros animales \n2.Intentar huir solo inmediatamente \n3.Quedarse aun así" << std::endl;
           					 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a los otros animales pero ellos le contestaron que ya sabian y quedó atrapado Pascal, ¡Espera el fin!\n ¡Atrapado quedó!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intento huir y lo logró aunque se le acabaron las barras de energia y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se quedó en la nueva granja a pesar de las advertencias, ¡Tiene nuevo hogar!\n ¡Que le vaya bien...!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Se relajó más y se quedó dormido hasta el otro dia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Hablarle a los demás animales \n2.Comer e irse a su granja \n3.Quedarse" << std::endl;
           				  cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Ideó el plan para escapar pero mientras lo hacia se dio cuenta que aquí tenia mejor lugar \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Seguir con el plan \n2.Probar que mas tiene la granja \n3.Hablarle al nuevo cerdo que llevaron" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
            				 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Le habló a los animales y lo ignoraron \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Volver a intentarlo \n2.Hacerles una groseria y escapar \n3.Salir de la granja por un tunel" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opción correcta"<<endl; 
                    }
            break;
            case 2:
            cout<<"Mordió al que lo recogió y este le pegó pero Pascal alcanzó a escapar \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Seguir corriendo hasta encontrar algo \n2.Escapar y meterse a la granja de infiltrado \n3.Volver con el que lo recogió" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.2
                    switch(opcionesn)
                    {
                    case 1: 
                    cout<<"Corrió y encontró una chica que tenia intenciones de recogerlo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejarse recoger por la chica \n2.Morderla igual\n3.Huir de ella" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Lo recogió y le curo el golpe que habia tenido \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Dejarse de la chica y decirle lo que pasa\n2.En cuanto vea una puerta abierta intentar escapar \n3.Comer la comida que tenia en el suelo e intentar encontrar la granja" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu finaL
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"La mordió pero aun asi lo agarró y acarició \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ya dejarse \n2.Volverla morder \n3.Explciarle su situación" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Inició el recorrido a la granja y comió lo que habia recogido y eso le ayudó a llegar a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue rapido y, ¡Logró llegar a la granja!\n¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Tiro la comida y fue a la granja pero no le bastó la energia y, \n ¡No logró llegar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Huyó de ella pero su herida le doliá mucho \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Regresar y explicarse su caso \n2.Seguir caminando y buscar comida en los botes de basura \n3.SAASF" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Inició el recorrido a la granja y comió lo que habia recogido y eso le ayudó a llegar a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue rapido y, ¡Logró llegar a la granja!\n¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Tiro la comida y fue a la granja pero no le bastó la energia y, \n ¡No logró llegar!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 4:
                        return 0;
                        default: cout<<"elige una opción correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Se metió a la granja de infiltrado y vió muchos cerditos como el \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Hablarle a los demas cerditos \n2.Alejarse de ellos y esconderse \n3.Irse a otra zona de la granja" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Volvió con el que lo recogió y este lo levantó e hizo todo el papeleo para dejarlo ahí \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le contó a la chica y esta se conmovió y lo llevo a la granja, ¡Lo logró!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escapó, pero se quedo sin barras y, ¡No logró llegar a la granja!\n¡Qué mala suerte!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enojó por el desastre que hizo pero al saber la historia lo comprendió y lo llevó a la granja \n ¡Logró llegar!\n ¡Lo habian extrañado mucho!\n Quedó con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<< endl;
                    }
            break;
            case 3:
            cout<<"Entro a la casa abierta y se dio cuenta que era de un carnicero cuando vió los cuchillos y la carne \n Quedó con "<< (barras)-float(2); cout << " barras \n Elige su proxima acción \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.3
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"fue al pueblo en donde encontró gente tratando de atraparlo y otro niño que le prometio ayudarlo. \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                         //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        case 2:
                    
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        case 3: 
                    
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                    
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl; 
                        }
                    case 2:
                    cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    
                    break;
                    
                    case 3:
                    cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
    
                    break;
                    default:
                    cout<<"Elige una opción correcta"<<endl;
                    }
                  
            break;
            default:
            cout<<"Elige una opción correc"<<endl;
            }
                
                
    break;
    case 3: 
    cout<<"fue al pueblo abandonado en donde encontró una television prendida y en las noticias salio la granja afectada de donde el venia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Buscar comida en la casa \n2.Buscar en la cochera \n3.Ver como se llama bien la granja y tdoso los datos para pdoer llegar" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.3
            switch(opcionesn)
            {
            case 1:
            cout<<"Busco comida en la casa pero encontró mucho dinero \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Caminar hacia otro lugar para poder comprar comida y un taxi hacia la granja \n2.Dejar el dinero ahí (no vaya a estar maldito) y seguir buscando comida \n3.Guardar el dinero y buscar comida" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Caminó a otro \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Encontró comida! Pero el dinero no estaba maldito, ya no lo puede tomar porque se desapareció \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"Encontrste muchas verduras pero casualmente estan frescas \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                default:
                cout<<"Elige una opción correc"<<endl; 
                }
            break;
            case 2:
            cout<<"En la chochera encontró una bicicleta vieja que le hace falta aceite \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Salir a la carretera para poder encontrar alguien y que arregle la bicicleta \n2.Dejar la bicicleta ahí y seguir alimentandose para irse \n3.Buscar el aceite" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"salió a la carretera y logro que un adolescente se parará, le contó la situación y este accedió a ayudarlo\n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Confiar en el adolescente \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                default:
                cout<<"Elige una opción correc"<<endl; 
                }
            break;
            case 3:
            cout<<"Se quedó viendo la tele y ahora sabe bien los datos de la granja, pero tambien salió que el dueño era malo \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                default:
                cout<<"Elige una opción correc"<<endl; 
                }
            break;
            case 4:
            return 0;
            default:
            cout<<"Elige una opción correc"<<endl;
            }
            
    break;
    case 4:
    cout<<"fue a la bahia y solo vio pasar un pescador que lo observó un rato \n Quedó con "<< (barras)-float(3); cout << " barras \n Elige su proxima acción \n1.Esperar a que regrese el pescador \n2.Seguir buscando en la bahia una pista \n3.Agarrar el bote que dejo el pescador" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.4
            switch(opcionesn)
            {
            case 1:
            cout<<"Esperó al pescador y este regresó y se le acerco, le dijo que por qué estaba ahí \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Contestarle y placticarle el asunto \n2.Contarle una historia falsa para ver que hace el pescador \n3.Ignorarlo y correr" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Le platicó y entendió su caso pero dijo que el no podia ayudarlo porque tenia que pescar pero le podia ofrecer comida y agua y decirte como irse \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<<" barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Le contó y el pescador lo dudo un poco pero le ofreció alimento y decirle el camino \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Corriste pero te alcanzó y quiere que le digas que hacias en su zona \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras << " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opción correcta"<<endl; 
                }
            break;
            case 2:
            cout<<"Encontró unas monedas del pescador en un baul \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Tomar las monedas e irse \n2.Dejarlas ahí y esperar mas tiempo \n3.Esconderse enfrente del baul" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Tomó las monedas y le alcanza para comprar comida y agua para sus amigos o pagar el taxi a la granja \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                        
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Las dejó ahí y el pescador fue y echo más monedas \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Se escondió pero se le veia la cola y el pescador lo descubrió  "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4: return 0;
                default:
                cout<<"Elige una opción correcta"<<endl; 
                }
            break;
            case 3:
            cout<<"Agarró el bote y vió que si servia \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el bote al otro lado del mar \n2.Quedarse en el bote esperando \n3.Bajarse y esperar al siguiente dia para irse en el" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Llegó al otro lado y vió muy cerca la granja, solo tiene que cruzar un rio \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<<barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Esperó mucho y vio que venia el pescador \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Esperó al siguiente dia y el pescador se habia llevado el bote \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"A \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 2:
                
                        cout<<"B \n Quedó con "<< barras<< " barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        case 3:
                
                        cout<<"C \n Quedó con "<< barras<<" barras \n Elige su proxima acción \n1.Ir con el niño \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta" << std::endl;
                
                        break;
                        default:
                        cout<<"Elige una opción correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opción correcta"<<endl; 
                }
            break;
            default:
            cout<<"Elige una opción correcta"<<endl;
            
            }
    break;
    case 5:
    return 0;
    break;
    default:
    cout<<"Elige una opción correcta"<<endl;
    }
        
    
    
  
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
}
    return 0;

}