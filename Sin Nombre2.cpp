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
cout<<"Pascal era un cerdito que vivia en una granja junto a sus amigos, hasta que un dia un terrible remolino arras� con todo a su paso y lo dejo varado en un desierto, Pascal decicio regresar a la granja con la esperanza de reencontrarse con sus amigos,  \n Ahora elige que har� Pascal \n 1:ir al pueblo \n 2:Espear que pase alguien \n 3:Ir al pueblo abandonado \n 4:ir a la bahia \n5.Salir del programa"<<endl;
std::cout << "Barras disponibles:"<<barras << endl;
cin>>opcionesn;
cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
    switch(opcionesn)
    {
    case 1:
    barras-=2;
    cout<<"fue al pueblo en donde encontr� gente tratando de atraparlo y otro ni�o que le prometio ayudarlo. \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta \n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
        //menu1.1
        switch(opcionesn)
        {       
        case 1:
        barras-=1;
        cout<<"Fue con el ni�o y este le di� alimento \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Seguir confiando en el ni�o \n2.Esperar el momento e irse \n3.Tomar mas comida con la posibilidad que se enoje\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            switch(opcionesn)
            {
            barras-=2;
            case 1:
            cout<<"El ni�o te explico que el plan que era escapar un dia de su casa y empezar el viaje a tu granja. \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Aceptar el trato \n2.Decirle que no y que lo har�s solo \n3.Robar su comida e irte\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.1.1
                switch(opcionesn)
                {
                barras-=2;
                case 1:
                cout<<"Aceptaste el trato y el dia del escape sus papas los descubrieron \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Ayudar al ni�o y salvarlo \n2.Irse al momento \n3.Esperar para robarle dinero para ir a la granja \n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.1.1
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Lo ayud� y lo salv�!, El cumpli� y lo llev� a la granja donde se reuni� con sus amigos\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue rapido pero se le acabron las barras de energia y, �No logr� llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Se fue y pidi� un taxi hacia la granja, �Lo logr�! Lleg� a la granja, pero, �qu� se sinti� traicionarlo?"<<endl;
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 2:
                cout<<"Le dij� que no, y el ni�o le dijo que en verdad queria ayudarlo \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Confiar en �l \n2.Que se vaya aun as� \n3.Decirle que s� pero que si tambien podia llevarle comida a sus amigos" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.1.2
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Confi� en �l, cumpli� y lo llev� a la granja donde se reuni� con sus amigos\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Se fue pero se le acabron las barras de energia y, �No logr� llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Le dijo que s� pero qur solo poquita, te llev�, �Lo logr�! Lleg� a la granja y les diste comida a tus amigos"<<endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                case 3: 
                cout<<"Recargaste energia y te fuiste, encontraste a lo lejos la granja \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Ir corriendo sin detenerse a la granja \n2.Ir pero haciendo una parada a ver que puede encontrar \n3.Esperar a reunir mas energia para irse\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    switch(opcionesn)
                    {
                    barras-=2;    
                    case 1:
                    cout<<"Corri� pero le falt� energia y, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                    break;
                    case 2:
                    cout<<"Hiz� la parada y encontro agua que le di� la suficiente energia para llegar y, �Logr� llegar a la granja!" << std::endl;
                    break;
                    case 3:
                    cout<<"Esper� mucho y no reunio la suficiente energia, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                    break;
                    default:
                    cout<<"Elige una opcion correcta"<<endl;
                    }
                break;
                default:
                cout<<"Elige una opci�n correcta"<<endl;
                }
            break;    
            case 2:
            cout<<"Te fuiste y te perdiste, solo recuerdas el camino de regreso al ni�o \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Regresar con el ni�o \n2.Seguir caminando hasta encontrar algo \n3.Buscar en la basura algo de comida\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.12
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Regresaste con el ni�o pero te dijo que solo te podia decir el camino ya que no podia acompa�arte \n Qued� con "<< (barras)-float(2); cout << " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"El cumpli� y le dijo el camino a la granja, lleg� y se reuni� con sus amigos\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se fue rapido pero se le acabron las barras de energia y, �No logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Se fue y pidi� un taxi hacia la granja, �Lo logr�! Lleg� a la granja, pero, �qu� se sinti� traicionarlo?"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Encontr� un se�or de un sombrero en una esquina que le ofreci� ayuda \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguirlo \n2.Ignorarlo \n3.Morderlo\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Lo sigui� y resulto ser malo\n �No logr� regresar a la  granja y qued� hecho chicharr�n!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"�Lo ignor� y ya cuando se iba, el se�or lo captur� y, �No logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Lo mordi� y resulto ser una persona mala asi que por ayudar a atraparlo lo llevaron a la granja, �Lo logr�! Lleg� a la granja y se reuni� con sus amigos, que feliz!"<<endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3: 
                    cout<<"Encontraste comida pero parece un poco pasada \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Guardarla en su bolsa y usarla solo en caso de ser necesaria en el camino \n2.Comerla e irse\n3.Tirarla otra vez e ir a la granja\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu 1.1.1.1
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Inici� el recorrido a la granja y comi� lo que habia recogido y eso le ayud� a llegar a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se fue rapido y, �Logr� llegar a la granja!\n�Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 3:
                        cout<<"Tiro la comida y fue a la granja pero no le bast� la energia y, \n �No logr� llegar!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                
                    break;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl;
                    }
            break;
            case 3:
            cout<<"El ni�o se enoj� y te rega�o porque sus papas cuentan la comida y se pueden dar cuenta \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Aceptar el rega�o del ni�o \n2.Enojarte o sentirte mal e irte \n3.Pedirle disculpas al ni�o y decirle que te vas a ir\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.13
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Acepto el rega�o del ni�o y el ni�o le dijo que esta bien que lo ayduara \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir con el ni�o \n2.Salirse de su casa \n3.Robar comida e irse\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
  					     	switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Sigui� con el ni�o y este lo llevo a la granja, �Lo logr�!\n �Ahora vuelve a ser feliz en la granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue, pero se quedo sin energia y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Con la comida que robo si pudo llegar a la granja \n �Logr� llegar!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Le dij� que no, y el ni�o le dijo que en verdad queria ayudarlo pero que cooperara \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Acepta el trato \n2.Buscar dinero en su casa \n3.Pedirle nadamas un mapa y una verdura\n4.Salir del programa" << std::endl;
       				  cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
  					     	switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Sigui� con el ni�o y este lo llevo a la granja, �Lo logr�!\n �Ahora vuelve a ser feliz en la granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Busco dinero pero lo vio el ni�o y de consecuencia lo durmio �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le brindo las heramientas el ni�o y Pascal muy facilemnte llego a la granja \n �S� logr� llegar!\n �Sus amigos estaban muy contentos de verlo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Le dijo que si se queria ir estaba bien pero que saliendo no podia regresar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Quedarse \n2.Esperar a que se vaya y robarle su celular \n3.Tomar agua de su casa e irse\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
           				    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
  					     	switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Sigui� con el ni�o y este lo llevo a la granja, �Lo logr�!\n �Ahora vuelve a ser feliz en la granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Le robo el celular y con el mapa tomo la ruta mas corta y cambio el celular por comida �Si logr� llegar a la granja!\n�Les llevo comida a sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Tomo agua pero no lo hidrato lo suficiente y quedo desmayado en el camino \n �No logr� llegar!\n �Falto muy poco!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
            break;
            case 4:
            	return 0;
            default: 
            cout<<"Elige una opci�n correcta"<<endl;
            }
        
            
        break;
        case 2:
        cout<<"Sigui� buscando y encontr� un mapa \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Revisar el mapa \n2.Guardar el mapa \n3.Comerse el mapa\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.2
                switch(opcionesn)
                {
                case 1: 
                cout<<"Revisaste el mapa y si esta la granja dentro de el \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Seguir el mapa \n2.Guardarlo y seguir buscando algo que le pueda ayudar\n3.Buscar comida para llevarles a sus amigos de la granja\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Sigui� el  mapa pero a mitad de camino le ofrecieron mucha comida a cambio de el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Cambiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio \n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Acept� el trato y ya con la comida Inici� el viaje, �S� logr� llegar a la granja!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Rechaz� la oferte y no tuvo suficiente energia para llegar y, �No logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Lo estaf�, el que le propuso el cambio le di� la comida y Pascal se iba a escapar pero lo atrapo el chico, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Encontr� un carrito prendido abandonado \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Subirse, extender el mapa e ir a la granja \n2.Apagarlo y esperar al due�o \n3.Ignorarlo e irse a la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Manej� hasta la granja con ayuda del mapa �S� logr� llegar a la granja!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Esper� al due�o y este le agradeci� llevandolo y dandole dinero para comida \n�Logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Ignor� el carro pero no tuvo la suficiente energia para llegar a la granja, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Solo encontr� agua para sus amigos \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir solo con el agua \n2.Cambiar m�s de la mitad del agua por poca comida \n3.Tomar un poco de agua e irse corriendo a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corri� pero le falt� energia y tuvo que beber el agua, �S� logr� llegar a la granja!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Cambi� el agua por la comida y lleg� a la granja, �Logr� llegar a la granja!, les di� la comida a sus amigos" << std::endl;
                        break;
                        case 3:
                        cout<<"No tom� el agua suficiente y no reunio la suficiente energia, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default: cout<<"elige una opci�n correcta"<<endl;
                    }
                break;
                case 2:
                cout<<"Guard� el mapa y comi� de un plato abandonado al lado de la basura \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Abrir el mapa \n2.Tirar el mapa porque siente que le estorba \n3.Comer mas comida de la basura\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegise -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Abri� el mapa y vio que estaba un poco lejos de la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse sin comer nadamas \n2.Buscar agua y despues intentar llegar a la granja \n3.Descansar antes de partir a la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corri� pero le falt� energia y, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Encontro agua que le di� la suficiente energia para llegar y, �Logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Se qued� dormid y le robaron el mapa, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Tir� el mapa y se qued� sin saber en donde estaba \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Decirle a un perro si sabe donde esta \n2.Buscar el mapa \n3.Intentar robar dinero de un ni�o\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"El perro le dijo que si sabia pero que era en otro estado, lo cual era imposible, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Busc� el mapa pero no lo encontr� y se acab� sus barras de energia, �No lgr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Le rob� dinero a un ni�o pero no le alcanz� para nada y lo atraparon, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Comi� m�s comida y le hiz� da�o \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Avanzar hacia la granja \n2.Comer verduras e intentar llegar a la granja \n3.Tomar agua de un charco muy grande e intentar ir a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"No avanz� mucho cuando la comida hizo que se desmayara�No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Comi� las verduras y le dieron justo la energia para llegar, �Logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Tom� agua del charco pero termino intoxicado, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opci�n correcta"<<endl;
                    }
                    
                break;
                case 3:
                cout<<"Se comi� el mapa y ahora no sabe donde esta \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Intentar vomitarlo \n2.No hacer nada \n3.Subirse a una camioneta que tiene animales dentro\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu penultimo
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Intent� vomitarlo pero solo escupi� pedazos del mapa pero muy importantes \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Cambaiar el mapa e intentar llegar sin el \n2.Rechazar la oferta y seguir el camino \n3.Estafar al que le propuso el cambio\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Corri� pero le falt� energia y, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Hiz� la parada y encontro agua que le di� la suficiente energia para llegar y, �Logr� llegar a la granja!" << std::endl;
                        break;
                        case 3:
                        cout<<"Esper� mucho y no reunio la suficiente energia, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        	return 0;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"No hiz� nada y pas� un carro que lo atropell�\n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Levantarse e irse \n2.Dejar que lo lleve al veterinario el del carro \n3.Cerrar los ojos\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Se levant� pero no llego mu lejos, se quedo sin energia, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Lo llev� al veterinario pero se encari�o con el que lo atropell� y, �Conoci� a su neuvo mejor amigo!" << std::endl;
                        break;
                        case 3:
                        cout<<"Cerr� los ojos y lamentablemente, muri�, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        	return 0;
                       	break;
                        default:
                        cout<<"Elige una opcion correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Subi� a la camioneta y al subir habl� con los demas animales, al parecer van a una granja\n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Bajarse de la camioneta \n2.Quedarse arriba de la camioneta \n3.Seguir preguntando a los otros animales aunque sienta que los estresa\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        barras-=2;    
                        case 1:
                        cout<<"Se baj� de la granja y se perdi�, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 2:
                        cout<<"Se qued� arriba de la camioneta y se dio cuenta que iba para su granja, eran animales nuevos , �Logr� llegar a la granja y reunirse con sus amigos!" << std::endl;
                        break;
                        case 3:
                        cout<<"Les sigui� preguntando pero los estres� y estos lo aventaron fuera de la camioneta, �No logr� llegar a la granja!\n �Ni modo!\n Qued� con "<<barras<< " barras" << std::endl;
                        break;
                        case 4:
                        	return 0;
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
                cout<<"Elige una opci�n correcta"<<endl;
                }
        break;
        case 3:
        cout<<"Entro a la casa abierta y se di� cuenta que era de un carnicero cuando vi� los cuchillos y la carne \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Esconderse \n2.Tomar comida que hay en la mesa e irse \n3.Esperar al carnicero e intentar hablar con el\n4.Salir del programa" << std::endl;
        cin>>opcionesn;
        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu 1.1.3
                switch(opcionesn)
                {
                case 1:
                cout<<"Se escondio y lleg� el carnicero a dormir a su casa \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Salir de la casa \n2.Despertarlo e intentar hablar con el \n3.Hablar con el, el dia siguiente\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Sali� de la casa y cuando estaba caminando solo, un policia lo subi� a su patrulla para entregarlo a protecci�n animal \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Dejarse llevar hasta all� \n2.En cuanto lo bajen tratar de huir \n3.Durante el recorrido en la patrulla hablar con los policias\n4.Salir del programa" << std::endl;
    			        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Lo llevaron a protecci�n animal y ah� se va a quedar �No lo logr�!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Huy� cuando lo bajaron pero no tenia las suficientes barras de energia, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le cont� a los policias y dijeron que ibas a estar mejor en esa granja que al lugar que te van a llevar \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Lo despert� y aunque al principio el carcnicero se espant�, logr� hablar con el, el carnicero le dijo que le podia dar comida y agua o llevarlo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Decirle que lo lleve \n2.Decidir por la comida y agua \n3.Tomar toda su comida e irse\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Confi� en el pero el carnicero lo traicion� y no lo llevo a la granja, �No lo logr�!\n �Lo hizo carnitas!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Te comiste la comida en su casa pero result� estar envenedada, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Comi� su comida y se dirigi� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Al principio el carcnicero se espant� y fue tras el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Dejar que lo alcance \n2.Esconderse en su casa \n3.Huir y robar su comida\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Lo alcanz� y no termino nada bien, �No lo logr�!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escondi�, pero lo encontr� y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Rob� su comida y llego a la granja con la energia que le di� \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 4:
                    	return 0;
                    	break;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl; 
                    }
                break;
                case 2:
                cout<<"Tom� un poco de comida y se fue sin dejar rastro \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Entrar a otra casa \n2.Regresar en la noche a robarle al carnicero dinero \n3.Caminar direcci�n a la granja a ver si la ve\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Entr� a otra casa y encontro un bebe solito en peligro \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Cuidar al ni�o hasta que llegue alguien \n2.Dejar al ni�o y buscar dinero en la casa \n3.Robar su auto e irte a la granja\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Cuid� al ni�o y llegaron los papas y le agradecieron y a cambio lo llevaron a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"No encontr� dinero y se salio a la calle pero se perdi� y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Rob� el carro y no tenia gasolina \n �No logr� llegar!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Regreso pero el carnicero lo estaba esperando, el s� sabia que habia ido \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse antes que se de cuetnta \n2.Enfrentar al carnicero \n3.Intentar volver a entrar por agua\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se estaba yendo pero el carnicero lo atrap�, �No lo logr�!\n �Termino hecho carnitas!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Peleo con el carnicero y perdi�, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Entr� por el agua y logr� salir de la casa \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Camino y camino y no logro verla pero sabia que estaba cerca porque unas personas se lo dijeron \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Pedirles un poco de comida a las personas \n2.Seguir caminando y probar suerte \n3.Rendirse\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Les pidio comida y se la dieron, y aparte lo llevaron a la granja �Lo logr�!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Dio muchas vueltas pero jamas logro encontrar la granja, y se le acabo la energia �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se rindio y no encontro la granja \n �No logr� llegar!\n �Sus amigos se quedaron esperandolo!\n Qued� con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opci�n correcta"<<endl; 
                    }
                break;
                case 3:
                cout<<"El carnicero lo vi� y luego luego fue por el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Correr \n2.Quedarse quieto y exlicarle la situaci�n \n3.Atacarlo\n4.Salir del programa" <<endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                     //menu1.1.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Corri� y escap�, gast� mucha energia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Dejarse atrapar por el carnicero \n2.Meterse a un restaurante a buscar comida \n3.Gritarle al carnicero la situacion en lo que lo persigue\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
				        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El carnicero lo atrap� y conversaron y termino llevandol� a la granja a cambio de decirle quien era el due�o de la granja �Lo logr�!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Encontro mucha comida que se devoro y pudo tener energia para �llegar a la granja!\n�Qu� buena suerte que haya habido comida en ese restaurante abandonado no?!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se lo grito y el carnicero le dijo que parara que lo ayudaria, pero no fue asi, lo capturo y lo hizo chicharron\n �No logr� llegar a la granja!\n �No confies en todo lo que te dicen!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 2:
                    cout<<"Le explic� la situaci�n y el carnicero lo entendi�, el dijo que conocia la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Pedirle si lo puede llevar \n2.Pedirle que le realice un mapa \n3.Pedirle dinero prestado para irse\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El carnicero lo llevo ya que de ahi, podia hacer trato con el due�o, �Lo logr�!\n �Estuvo feliz con sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"No le dio tiempo al carnicero de hacer el mapa, asi que se fue y se perdio entre las calles �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le presto el dinero pero le dijo que si no se lo devolvia, iria por el \n �Logr� llegar a la granja!\n �Mas le vale pagarle al carnicero!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                    break;
                    case 3: 
                    cout<<"Lo atac� pero el carnicero lo amarr� y le dio oportunidad de explciarle \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Inventar una historia de que esta enfermo para que no le haga nada \n2.Contarle la verdad \n3.Intentar zafarse\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El carnicero llamo un veterianrio para revisarlo, el veterinario le dijo que estaba bien, y el carnicero se enojo porque le mintio, asi que lo mando para el otro mundo �No lo logr�!\n �La verdad siempre sale a la luz!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"El carnicero entendio su caso y lo llevo a la granja y le dio de comer verduras, se hicieron buenos amigos �S� logr� llegar a la granja!\n�Ahora tiene un nuevo amigo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No pudo zafarse y el carnicero ald arse cuenta, lo hizo carnitas \n �No logr� llegar a la granja!\n �El dialogo es muy importante!\n Qued� con "<<barras<< " barras" << std::endl;
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
                    cout<<"Elige una opci�n correcta"<<endl; 
                    }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opci�n correcta"<<endl;
                }
              
        break;
        case 4:
        	return 0;
        default:
        cout<<"Elige una opci�n correc"<<endl;
        }
        
    break;        
    case 2:
    cout<<"Esper� y paso un carro que lo subi� a su maletero y lo llev� a otra granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Estar dispuesto a conocer la nueva granja \n2.Morder al que lo recogio en cuanto lo agarre \n3.Hacer desastres en la nueva granja\n4.Salir del programa" << endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            
            //menu 1.2
            switch(opcionesn)
            {   
            case 1:
            cout<<"Conociste la nueva granja y es mejor que la otra en comodidad \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir acoplandose a la granja \n2.Idear un plan para escapar \n3.Hablarle a los demas animales\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu1.2.1
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Le gust� mucho la nueva granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Intentar hacer nuevos amigos \n2.Espiar al due�o \n3.Relajarse m�s" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Intent� hacer nuevos amigos y lo consigui� aunque le adivirtieron que no era tan buen lugar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Quedarse en la granja \n2.Intentar irse \n3.Preguntarles porqu�\n4.Salir del programa" << std::endl;
 								   cin>>opcionesn;
			   			   		   cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
		   				   		   switch(opcionesn)
      		   			   		   {
             		   		   	   barras-=2;    
	                               case 1:
	                               cout<<"Se qued� en la nueva granja, �Tiene nuevo hogar!\n �Que le vaya bien!\n Qued� con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 2:
	                               cout<<"Intent� irse pero justo antes de salir lo agarraron, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 3:
	                               cout<<"Les pregunt� porqu� y ellos le dijeron que protno lo averiguaria \n �Qued� atrapado!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
	                               break;
	                               case 4:
	                               return 0;
	                               default:
	                               cout<<"Elige una opcion correcta"<<endl;
	                               }
                        break;
                        case 2:
                        cout<<"Espi� al due�o y result� no ser tan buen lugar, el due�o era malo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir a contarle a los otros animales \n2.Intentar huir solo inmediatamente \n3.Quedarse aun as�\n4.Salir del programa" << std::endl;
           					 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a los otros animales pero ellos le contestaron que ya sabian y qued� atrapado Pascal, �Espera el fin!\n �Atrapado qued�!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intento huir y lo logr� aunque se le acabaron las barras de energia y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se qued� en la nueva granja a pesar de las advertencias, �Tiene nuevo hogar!\n �Que le vaya bien...!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Se relaj� m�s y se qued� dormido hasta el otro dia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Hablarle a los dem�s animales \n2.Comer e irse a su granja \n3.Quedarse\n4.Salir del programa" << std::endl;
           				  cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le hablo a los demas animales y estos le dijeron que ya se quedaria ahi para siempre �No llego con sus amigos!\n �Lo llevaron a su prision!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Comi� pero cuando quiso salir de la granja ya no se lo permitieron �No logr� llegar a la granja!\n�Quedo atrapado!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se qued� en su nuevo hogar \n �Ahora tiene amigos nuevos!\n �Quedo atrapado en esa granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Ide� el plan para escapar pero mientras lo hacia se dio cuenta que aqu� tenia mejor lugar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir con el plan \n2.Probar que mas tiene la granja \n3.Hablarle al nuevo cerdo que llevaron\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Sigui� con el plan y ya tenia todo listo para irse a su granja pero los demas animales lo trataron de convencer que se quedara \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse a su granja \n2.Quedarse en esa granja \n3.Preguntar por que deberia quedarse a los otros animales" << std::endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El sigu� con su plan y se fue a su granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se dej� llevar por la nueva granja y termino decidiendo quedarse �No logr� llegar a la granja!\n�Tiene un nuevo hogar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Pregunt� a los otros animales y se di� cuenta que nadamas fue puro cuento, y descubri� la verdad de esa granja \n �No logr� llegar con sus amigos!\n �Lo atraparon en la nueva granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Prob� todas las funciones de la granja y es la mejor granja que ha conocido y no sabe si extra�a a sus amigos \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Quedarse en la nueva granja \n2.Empezar a hablarle a los demas animales \n3.Irse a su granja con sus amigos\n4.Salir del programa" <<endl;
                		cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se dej� envovler por todo lo que tiene la nueva granja y ahi se qued� �No lo logr�!\n �Lo habian enga�ado en su nueva granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Al momento de hablarle a los demas animales se di� cuenta de su error pues todos querian salir de ahi �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Intent� salir de la granja pero se di� cuetna que es casi imposible, ya que las entradas estan revisadas siempre \n �No logr� llegar!\n �Qued� atrapado!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Le habl� al nuevo cerdo que llevaron y este le dijo que no era nuevo que el habia escapado de ahi porque no es un buen lugar y ahora no hay escape \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Resignarse \n2.Hacer un plan con el cerdo \n3.Intentar escapar solo\n4.Salir del programa" <<endl;
            				 cin>>opcionesn;
            				 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            				 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se resigno y acepto que jamas saldria de ahi, �No lo logr�!\n �Le habian lavado la mente!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intentaron escapar por medio de un tunel y, �Lo lograron, llegaron a la superficie!\n�Pero Pascal no tuvo la suficiente energia para ir con sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Iba a escapar solo pero al momento de atravesar las peurtas lo atraparon \n �No logr� escapar!\n �Ahora esta atrapado!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Le habl� a los animales y lo ignoraron \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Volver a intentarlo \n2.Hacerles una groseria y escapar \n3.Salir de la granja por un tunel\n4.Salir del programa" <<endl;
                    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Esta vez si contestaron y dijeron que no querian contestar para no decirle que en realidad la granja era terrible \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.No creerles y seguir normal \n2.Quedarse a pesar de las advertencias \n3.Intentar salir para comprobar lo que le dijeron\n4.Salir del programa" << std::endl;
    					    cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
							switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"No les crey� y sigui� disfrutando de su nuevo hogar �No logr� llegar a la granja!\n �Ahora tiene un nuevo hogar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se qued�, aunque preocupado por las advertencias, pero ya habia tomado la decisi�n �No logr� llegar a la granja!\n�Esta atrapado y no lo sabe!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Intent� salir pero rapidamente lo capturaron y volvieron a meter a la granja \n �Era verdad!\n �Ha quedado atrapado!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Les hizo la groseria y se fue a esconder hasta que lleg� un gallo que intento hablar con el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Hablar con el gallo \n2.Ignorar al gallo \n3.Atacar al gallo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
							switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Habl� con el gallo, quien le cont� que ahora no iba a pdoer salir de la granja y es por eso que los otros animales no querian decirselo, �No lo logr�!\n �Result� ser una estafa!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Decici� ignorar al gallo y poder seguir disfrutando de su nuevo hogar, �No logr� llegar a la granja!\n�Que disfrute su nuevo hogar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Atac� al gallo y lo metieron a un pozo, al parecer en esa granja habia castigos \n �No ogr� llegar con sus amigos!\n �Esa granja no era lo que parecia!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Sali� de la granja y desde afuera le dieron ganas de volver a entrar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse a su granja \n2.Volver a entrar a la granja \n3.Ir por comida adentro de la granja y salir para irse con sus amigos\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
          			  		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
							switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Sali� de la granja pero se qued� sin energia a mitad del camino, �No logr� llegar a la granja!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Volvi� entrar a la granja y esta vez ya no pudo salir, �No logr� llegar a la granja!\n�Que disfrute su nuevo hogar?!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Entro por comida, tomo toda la que pudo, se sali� y fue hacia su granja \n �Logr� llegar con sus amigos!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 4:
                    return 0;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl; 
                    }
            break;
            case 2:
            cout<<"Mordi� al que lo recogi� y este le peg� pero Pascal alcanz� a escapar \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Seguir corriendo hasta encontrar algo \n2.Escapar y meterse a la granja de infiltrado \n3.Volver con el que lo recogi�\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.2
                    switch(opcionesn)
                    {
                    case 1: 
                    cout<<"Corri� y encontr� una chica que tenia intenciones de recogerlo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Dejarse recoger por la chica \n2.Morderla igual\n3.Huir de ella\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        //menu1.1.1
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Lo recogi� y le curo el golpe que habia tenido \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Dejarse de la chica y decirle lo que pasa\n2.En cuanto vea una puerta abierta intentar escapar \n3.Comer la comida que tenia en el suelo e intentar encontrar la salida\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu finaL
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"La mordi� pero aun asi lo agarr� y acarici� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ya dejarse \n2.Volverla morder \n3.Explicarle su situaci�n\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se dej� y se encari�o con la chava, �No logr� llegar a la granja!\n �Conoci� su nueva due�a y hogar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"La volvi� a morder y se escapo, no llego muy lejos por falta de energia �No logr� llegar a la granja!\n�Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le explico su situaci�n y la chica le di� los cuidados y lo llevo a la granja \n �S� logr� llegar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Huy� de ella pero su herida le doli� mucho \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Regresar y explicarse su caso \n2.Seguir caminando y buscar comida en los botes de basura \n3.Rendirse\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            //menu final
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Regres� arrepentido y la chava lo not� y lo ayudo a reunirse con sus amigos, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Busco comida pero no encontr� y termino por quedarse sin energia �No logr� llegar a la granja!\n�Que mala onda!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No aguanto mas el dolor y decidio dormirse y, \n �No logr� llegar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 4:
                        return 0;
                        default: cout<<"elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 2:
                    cout<<"Se meti� a la granja de infiltrado y vi� muchos cerditos como el \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Hablarle a los demas cerditos \n2.Alejarse de ellos y esconderse \n3.Irse a otra zona de la granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Los demas cerditos lo miraban raro \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir a preguntarles que pasa \n2.Ingorarlos y comer la comida tan rica que dan ah� \n3.Comer e intentar irse a su granja\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Los cerdos le contaron lo que pasa en esa granja, y fue cuadno se di� cuenta que habia cometido un error �No logr� ir con sus amigos!\n �Qued� atrapado en esa comoda granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Decidi� quedarse y comer toda la comida que le ponen �No logr� llegar a la granja!\n�Esta muy contento con la nueva granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Una vez que acab� de comer, vi� una puerta abierta y se subi� a otra camienta que lo llevo a la granja \n �Logr� llegar con sus amigos!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Se alej� de ellos, y ellos continuaron normal \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Compartir de su comida a los demas cerdos \n2.Comer solito en su lugar \n3.Irse a la granja con sus amigos\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le comparti� a los otros cerditos ya que vi� que ellos no tenian comida, y estos le contaron que asi es al pricnipio y despues los empiezan a maltratar �No logr� llegar a la granja!\n �En que lugar se metio!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Comio solito y nadie mas le hablo, pero el disfruta su estancia �No logr� llegar a la granja!\n�Esta contento con su nuevo hogar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Ya se iba de la granja cuando fue sorprendido, y vi� que no seria tan facil, mordi� al que lo trato de agarrar y escapo \n �Logr� llegar a la granja con sus amigos!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Se fue a otra zona en donde los animales lo miraban raro \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Preguntarles que pasa \n2.Irse de la granja ya que se sinti� incomodo \n3.Seguir comiendo y en su rollo\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Les pregunt� y estos le dijeron la verdad sobre todo el lugar y que al final los ocupan paora cosas malas �No logr� llegar a la granja!\n �Ya no hay forma de salir!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se siente tan agusto en su nueva granja \n �Nuevo hogar!\n �Que le dure mucho el gusto...!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Volvi� con el que lo recogi� y este lo levant� e hizo todo el papeleo para dejarlo ah� \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Aceptarlo y actuar bien portado \n2.Soltarse y buscar su carro \n3.Morderlo y escapar\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Actuo muy bien portado y al entrar a la granja qued� fascinado, era tan increible \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Quedarse a vivir ah� mejor \n2.Comer lo suficiente para irse a su granja con sus amigos \n3.Intentar hacer nuevos amigos y si no irse de ahi\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se qued� a disfrutar de la comida y la comdidad que le brinda, �No logr� llegar a la granja!\n �Ahora es mas feliz!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Comi� mucho y se fue, encontr� la salida y nadie lo vi� salir y se fue a la granja, �S� logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le habl� a otros animales y le revelaron que la granja era mu mala, que con el pasar del tiempo los van maltratando y haciendo cosas raras con ellos \n �Ya no pudo escapar!\n �Qued� atrapado!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Busc� el carro del que lo recogi� y se subio, ya estaba encendido \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse a la granja \n2.Robarle las llaves e irse \n3.Echarlas adentro del carro y cerrarlo\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue a la granja y aunque ya asi llegando se qued� sin gasolina pudo ontinuar a pata �Lo logr�, llego con sus amigos!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap� con las llaves, pero se quedo sin energia y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Eso fue muy malvado pero a Pascal no le sirvi� de nada ya que no tenia la energia suficiente y se perdi� en el bosque \n �No logr� llegar a la granja!\n �No seas tan rencoroso!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Lo mordi� y escap�, encontro muchas botellas de agua y unas verduras, solo puede llevar una \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Llevarse las aguas para mantenerse hidratado y llegar a la granja \n2.Llevarse las verduras para tener la suficiente energia \n3.Comerse unas cuantas verduras y llevarse las aguas\n4.Salir del programa" << std::endl;
                        cin>>opcionesn;
                        cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                            switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se hidrato muy bien pero no le alcanzaron las calorias para continuar, �No lo logr�!\n �Sus amigos se quedaron esperandolo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Las verduras no le aportaron la suficiente energia y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Bien pensado, tuvo energia de sobra para poder correr hacia la granja \n �Logr� llegar a la granja con sus amigos!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 4:
                        	return 0;
                        	break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    return 0;
                        	break;
                    default:
                    cout<<"Elige una opcion correcta"<< endl;
                    }
            break;
            case 3:
            cout<<"Hizo desastres en la nueva granja pero derrepente se dio cuenta que era muy buena la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguirlos haciendo \n2.Relajarse m�s y ver que sucede \n3.Comer y actuar bien\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    //menu 1.1.3
                    switch(opcionesn)
                    {
                    case 1:
                    cout<<"Los sigui� haciendo  y le llamaron al que lo fue a dejar para que fuera por el, asi que fue por el pero not� que lo iba a abandonar en el camino \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Intentar hablar con el \n2.Dejar que lo abandone \n3.Pedirle comida de la que tiene en los aientos de atras\n4.Salir del programa" << std::endl;
                    cin>>opcionesn;
                    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                         //menu
                        switch(opcionesn)
                        {
                        case 1:
                        cout<<"Intent� hablar con el y le pidio que mejor lo llevara a la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir hacia la granja \n2.Pedirle otra oportunidad en la granja que lo habia llevado \n3.Pedirle un poco de comida\n4.Salir del programa" << std::endl;
		   				    cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Siguieron la ruta y lo llevo a la granja, �Lo logr�!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Le dijo que ya no lo iban a aceptar asi que lo fue a dejar a la granja �S� logr� llegar a la granja!\n�No era lo que queria!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le pidio un poco de comida pero el se la neg�, se enojaron y Pascal de bajo del carro, ya no pudo conitnuar, se quedo sin energia \n �No logr� llegar!\n �Estuvo tan cerca!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Lo abandono en la carretera \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Meterse al bosque a buscar algo util \n2.Seguir caminando hacia la granja \n3.Tomar agua de una fuente misteriosa" << std::endl;
                    	cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"No encontro algo y solo le salio un animal que lo persiguio hasta araparlo, �No lo logr�!\n �Sus amigos se quedaron esperando!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Siguio caminando, pero se quedo sin energia y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"El agua era muy buena y le dio mucha energia, asi que corrio hacia la granja \n �S� logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3: 
                        cout<<"Le pidio la comida y se la dio y lo dejo en la carretera \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Antes de bajarse del carro robarle mas y correr \n2.Bajarse con la comida que le dio \n3.Pedirle que le dibuje un mapa\n4.Salir del programa" << std::endl;
                    	cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le robo la comida y junto la suficiente energia para correr y lelgar a la granja, �Lo logr�!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se bajo del auto y empez� a caminar pero le hizo falta energia �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le dibujo el mapa con la ruta mas corta y si alcanzo a llegar \n �Logr� llegar!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl; 
                        }
                    break;
                    case 2:
                    cout<<"Se relaj� y le gust� de mas la nueva granja, es muy comoda y espaciosa \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Espiar al due�o \n2.Salirse e irse \n3.Empezar a conocer animales\n4.Salir del programa" << endl;
					    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
						switch(opcionesn)
                        {
                        case 1:
                        cout<<"Espi� al due�o y descubrio que tramaba algo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Decirle a los demas animales \n2.Salvarse solo \n3.Quedarse en la granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se lo conto a los demas animales y estos iniciaron una revolucipn, el due�o termino huyendo �Lo logr�, salvo la nueva granja!\n �Hurra!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Sus amigos se quedaron esperandolo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se quedo en la granja, apesar de lo que escucho, ya despues se las arreglara \n �No logr� llegar a la granja!\n �Ahora tiene nuevo hogar!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Se salio y se fue, ahora tiene que buscar la forma de llegar a la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Cruzar el bosque \n2.Rodear el rio \n3.Seguir la carretera\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Ese era un camino incorrecto, intento cruzar el bosque pero no salio vivo �No lo logr�!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Ese era un camino incorrecto, intento rodear el rio pero se termino cayendo al agua �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Ese era el camino correcto, la energia apenas y le alcanzo \n �Logr� llegar!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Le hablo a unos animales y se hicieron buenos amigos \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Quedarse en la granja \n2.Invitarlos a su granja con sus amigos \n3.Comer e irse de ahi\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se sintio muy agusto y se quedo a dsifrutar esa granja �Tiene hogar nuevo!\n �Los cambios tambien son buenos!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Los invito pero no quisieron ir y lo obligaron a quedarse en la suya �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se fue y tomo el camino correcto \n �Logr� llegar!\n �Esta muy feliz con sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 3:
                    cout<<"Actu� muy bien y quedo bien alimentado \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Aprovechar para comer mas y salirse a la calle para buscar su granja \n2.Hablarle a los otros cerdos \n3.Intentarrecoelctar cosas para llevarle a sus amigos\n4.Salir del programa" << std::endl;
	     			    cin>>opcionesn;
                		cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
						switch(opcionesn)
                        {
                        case 1:
                        cout<<"Se fue y quedo en la calle, ahora tiene que averiguar que direccion es la correcta \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir a un lugar con niebla \n2.Seguir al desierto \n3.Seguir la carretera\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue por el camino con niebla y cayo en un pozo muy grande �No lo logr�!\n �Quedo atrapado!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue por el desierto pero hacia mucho calor y se quedo sin energia  �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La carretera era la ruta perfecta \n �Logr� llegar!\n �Se volvio a reunir con sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Hablo con los otros cerdos y se lelvaron muy bien \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Decirles que luego vendra a visitarlos y que se va a su granja \n2.Quedarse con ellos \n3.Decirles que lo acompa�en a su granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue y no volvera a verlos, llego a la granja �Lo logr�!\n �Sus amigos lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se quedo con ellos y olvido a sus amigos de la otra granja �No logr� llegar a la granja!\n�Pobre de sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Aceptaron acompa�arte y se quedaron contigo, les presentaste los nuevos animales a tus amigos \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Busco y encontro muchas cosas que pueden hacerle la vida mas comoda a sus amigos \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Averiguar si le alcanza la energia para llevarles las cosas \n2.Seguir buscando cosas \n3.Irse sin las cosas pero corriendo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
                    	    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    	    switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Si le alcanzo la energia y les hizo mucho mejor la vida a sus amigos �Lo logr�!\n �Todos estan muy contentos!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Siguio buscando cosas y no logr� encontrar mas, quedo sin alimento y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se fue corriendo y llego muy rapido a la granja \n �Si ogr� llegar!\n �Lo que improta es la amistad!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                    break;
                    case 4:
                    	return 0;
                    default:
                    cout<<"Elige una opci�n correcta"<<endl;
                    }
                  
            break;
            case 4:
            	return 0;
            default:
            cout<<"Elige una opci�n correc"<<endl;
            }
                
                
    break;
    case 3: 
    cout<<"fue al pueblo abandonado en donde encontr� una television prendida y en las noticias sali� la granja afectada de donde el venia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Buscar comida en la casa \n2.Buscar en la cochera \n3.Ver como se llama bien la granja y tdoso los datos para pdoer llegar\n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.3
            switch(opcionesn)
            {
            case 1:
            cout<<"Busco comida en la casa pero encontr� mucho dinero \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Caminar hacia otro lugar para poder comprar comida y un taxi hacia la granja \n2.Dejar el dinero ah� (no vaya a estar maldito) y seguir buscando comida \n3.Guardar el dinero y buscar comida\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Camin� a otro lugar y se le cay� la mitad del dinero, aun asi tiene mucho \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Comprar verduras para sus amigos \n2.Buscar el dinero perdido \n3.Ir yendo a la avenida para pedir el taxi\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"La verdura que compr� estaba podrida \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Tirarla y emprender el viaje a la granja \n2.Guardarla por si la ocupa durante el camino a la granja \n3.Tomar pura agua durante el camino a la granja\n4.Salir del programa" << std::endl;
    							  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Tir� la verdura y no logro encontrar la granja, �No lo logr�!\n �Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"La guard� y la ocupo mas adelante, esas verduras lo ayudaron a encontrar la granja, �S� logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"El agua fue suficiente para pdoer encontrar la granja, apenas y lleg� \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Busc� pero no lo encontr�, y le ofrecieron una tarjeta de debito \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ya irse a la granja en taxi \n2.Aceptar la tarjeta de debido \n3.Irse caminando para poder pasar a comprar cosas para sus amigos en el camino\n4.Salir del programa" << std::endl;
       					 			 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue a la granja y lleg� sin problemas, aun le sobr� dinero, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Los tramites son muy largos y cansados �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se fue caminando y paso por comida para el, para sus amigos, les llevo juguetes y monton de cosas m�s \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Se subi� al taxi y justo cuando arranc�, los chocaron \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Pagarle el choque al taxista para que no se pare \n2.Apoyarlo y atacar al que los choc� \n3.Bajarse e irse en otro\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le pago casi el carro al taxista pero este lo llevo y hasta pasaron por comida, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se pelearon contra el que los choc� y Pascal quedo en muy mal estado, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se bajo y dejo el problema atr�s, el nuevo taxi lo llevo sin problema a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Encontr� comida! Pero el dinero no estaba maldito, ya no lo puede tomar porque se desapareci� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Comerse toda la comida \n2.Solo se come una parte y era alergic� a un componente \n3.Cay� sobre un charco que lo llevo a otra dimensi�n\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Busc� mas comida y encontr� un celular con bateria \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Abrir el mapa en el celular \n2.Guadarlo y buscar agua o bebidas \n3.Ignorar el celular\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
           			  		 cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
              			  	 switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Abr� el mapa en el celular y con este se gui� para llegar a la granja, mientras comia lo que habia guardado, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Guard� el celular que en un momento se le cay� y no se fijo, por estar buscando bebidas se qued� sin energia y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Ignor� el celular y con la comida que tenia se fue a buscar la granja, al parecer estaba muy lejos para ir caminando \n �No logr� llegar!\n �Es mejor usar ruedas!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Esper� a que se le pasara la reacci�n y qued� con hambre y enfermo de un ojo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Buscar zanahorias y agua \n2.Ir en bicicleta que estaba afuera de una casa a la granja \n3.Ir al veterinario abandonado y curarse para ir a la granja\n4.Salir del programa" << std::endl;
              					  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Qued� muy tocado por la alergia y facilmente se desmaya y no puede continuar con el recorrido �No lo logr�!\n �Qu� mala surte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue en la bicicleta, fue mas rapido,  �Logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Fue al veterinario pero no habia las suficientes cosas para curarse, asi que termina por quedarse dormid \n �No ogr� llegar!\n �Qu� mal plan:(!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Ahora debe ir a salvar a sus amigos de un incendi� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Buscar un celular \n2.Correr a una ciudad habitada para buscar ayuda \n3.Creer que no es real lo que esta viviendo\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Encontr� el celular y llamo a los bomberos, llegaron y resulto que no ahbai ningun incendio, �Todo fue una imaginaci�n!\n �Ten cuidado donde caes!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intent� llegar a una ciduad habitada pero ya no podia salir del pueblo abandonado �Se qued� atrapado en el!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Logr� despertar del sue�o pero se qued� en el mismo lugar donde estaba \n �No logr� llegar!\n �No tomes sue�os tan profundos!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"Encontr� muchas verduras pero casualmente estan frescas \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Comerlas \n2.Salir a bsucar a un supermercado que hay \n3.Guardarlas" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Las comi� y no le paso nada y hasta le dieron mas energia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Empezar el viaje a la granja \n2.Ir a la tienda de tecnologia \n3.Ir a la avenida y pelearse con un condutor por el carro\n4.Salir del programa" << std::endl;
         				   cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Con la energia que le dieron las verduras encontr� rapidamente la granja �Lo logr�!\n �Las verduras eran magicas!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Fue a latienda y encontr� un patin electrico en el que se fue pero se acab� la bateria y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se dirigi� a la avenida a atacar a un conductor para quitarle el carro e irse a la granja pero termino atropellado \n �No logr� llegar!\n �No te aloques tanto!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"En el supermercado encontr� muchas aguas \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Ponerlas dentro de una mochila para llevarle a sus amigos \n2.Tomarse dos y dejar las demas \n3.Salir del supermercado e irse a la granja\n4.Salir del programa" << std::endl;
          				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Comenz� el viaje pero se gasto todas las aguas porque la granja quedaba muy lejos, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Al dejar las dem�s no tuvo la suficiente energia para seguir y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No tuvo la suficiente energia para llegar a la granja \n �No logr� llegar!\n �Hay que planear bien los viajes!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Las guard� y empez� a ir a la granja, pero en un momento le di� demasiada hambre \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Comer solo una verdura y guardar las demas  \n2.Revisar la comida antes de comerla \n3.Intentar llegar sin consumir las verduras\n4.Salir del programa" << std::endl;
         				   cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Eran verduras magicas y la unica que comi� le basto para llenar su barra de energia y llegar a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Reviso las verduras y vio que brillaban, fue ah� cuando descubri� que eran magicas pero se espant� y las tir� lo que provoco que no tuviera energia para llegar a la granja, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Intento llegar sin consumir las verduras pero no tenia energia y cuando quis� comer una se di� cuenta que se le habian caido \n �No logr� llegar!\n �Aprovecha la comida cuando la tienes enfrente!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4:
               	return 0;
                default:
                cout<<"Elige una opci�n correc"<<endl; 
                }
            break;
            case 2:
            cout<<"En la chochera encontr� una bicicleta vieja que le hace falta aceite \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Salir a la carretera para poder encontrar alguien y que arregle la bicicleta \n2.Dejar la bicicleta ah� y seguir alimentandose para irse \n3.Buscar el aceite\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"sali� a la carretera y logro que un adolescente se parar�, le cont� la situaci�n y este accedi� a ayudarlo\n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Confiar en el adolescente \n2.Decirle que mejor ya no \n3.Pedirle que si lo llevaria el\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"COnfi� en el adolescente y este le dej� un mapa y la bicicleta arreglada \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Darle las gracias y darle su unica botella de agua \n2.Mientras lo hacia, alejarse de el \n3.Preguntarle porqu� le ayud�\n4.Salir del programa" << std::endl;
	  							  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Con la bicileta arreglada y el mapa fue mas facil llegar �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se alej� de el pero no encontr� nadamas y sin energia no hizo nada y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le pregunt� porque le ayudo y el adolescente solo contesto que hay que ahcer el bien, Pascal lelgo en la bicicleta a la grajna \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"El adolescente le dice que confie en el, que le ayudara en verdad \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Confiar en el \n2.Rechazarlo y decirle que se fuera \n3.Morderlo sin raz�n alguna" << std::endl;
                				  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Confi� en el y el chico le dio todo lo necesario para llegar a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Lo rechaz� y como venganza el chico le quit� toda la comida, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Lo mordi� y el chico por querer empujarlo termino por dejarlo caer sobre una esquina filosa y Pascal muri� \n �No logr� llegar!\n �Por qu� atacarlo?!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Le pidi� que lo llevara pero el adolescente le dijo que no podia, que solo podia ayudarlo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Preguntarle por qu� no podia \n2.Correrlo \n3.Aceptar su ayuda y ponerle gasolina a la motoicleta que estaba estacionada afuera de la casa\n4.Salir del programa" << std::endl;
      				  			  cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Le pregunt� y el adolescente respondi� que tenia otras cosas que hacer pero que ahora por eso lo iba a dejar solo, Pascal no pudo hacer nada, �No logr� llegar!\n �Se m�s paciente!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Lo corri� y el adolescente se fue por lo que Pascal qued� desamparado, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Acepto la ayuda y se fue en la moto a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Dej� la bicicleta y ya cuando se iba se di� cuenta que el aceite estaba arriba de un mueble \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Apilar cosas hasta alcanzarlo \n2.Tirar el mueble para que caiga el aceite \n3.Irse a buscar comida\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Apil� las cosas y cuando lo iba alcanzar se derribaron las cosas y Pascal cay� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Levantarse y actuar como si nada \n2.Reposar y curarse el golpe \n3.Ponerse una crema y seguir poniendo el aceite\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se levanto pero solo duro un segundo de pie y cay�,Pascal no pudo m�s �No logr� llegar a la granja!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se curo del golpe pero al ver que no tenia la suficiente energia para irse decidi� quedarse en el pueblo, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Le puso el aceite a la bici y alcanz� a lelgar con la energia que tenia \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Tir� el mueble pero le cayo encima, ahora le duele mucho el cuerpo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Intentar levantarse \n2.Quedarse tirado hasta que pase el dolor para poder aplicar el aceite e irse \n3.Levantarse e ir por comida para ir a la granja\n4.Salir del programa" << std::endl;
           					cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se levant� pero no tuvo la sigueinte fuerza para seguir adelnate, �No logr� llegar a la granja!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Espero, se le paso el dolor y ya con la bicicleta arreglada en el camino se di� cuenta que no tenia frenos y ya no resisiti� otro golpe�No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se levanto y consigui� mucha comida y le alcanz� para ir por la bicicleta y llegar a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Busc� comida y encontro solo agua unas cuantas frutas y azucar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Hacer un jugo que dar� mucha energia \n2.Tomarse el agua y guardar las frutas para sus amigos \n3.Guardarlo e iniciar el viaje\n4.Salir del programa" << std::endl;
          					 cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Con el jugo que se tomo le di� energia para encontrar la granja �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Tom� el agua y despues de estar caminando comi� las frutas pero �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No reparti� bien su comida y se quedo varado en el camini \n �No logr� llegar a la granja!\n �Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"Busc� el aceite y lo encontr� arriba de un mueble \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Intentar bajar el aceite \n2.Buscar la comida para irse a la granja \n3.Buscar las llaves de la moto estacionada afuera\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Baj� el aceite y se lo coloc� a la bicicleta, ahora puede rodar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir a la granja as� \n2.Buscar comida e irse en la bici \n3.Revisar la bicicleta antes de irse\n4.Salir del programa" << std::endl;
           					cin>>opcionesn;
                    			  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    			  switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Se fue a la granja en la bici pero no se percato que no tenia frenos y choc� �No lo logr�!\n �La granja se qued� esperandolo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue a la granja en la bici pero no se percato que no tenia frenos y choc� pero con la comida que llevaba resisti� el golpe �S� logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Revis� la bicicleta, se di� cuenta que no tenia frenos asi que los arreglo y se fue a la granja despues \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Encontr� la comida y comi� un poco \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Guardar la demas comida e irse a la granja \n2.Comer toda de un jal�n \n3.Irse asi a la granja" << std::endl;
	   							cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Racion� bien su alimento y le alcanz� para llegar a la granja �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"No racion� bien su alimento y no le alcanz� para llegar a la granja, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se qued� con falta de energia en el camino \n �No logr� llegar a la granja!\n �Sus amigos se quedaran esperandolo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Encontr� las llaves de la moto y tomo agua para hidratarse\n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Revisar la moto antes de irse \n2.Buscar el casco de seguridad e irse \n3.Irse as� a la granja\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
  			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
   			  				switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"La moto estaba muy buen estado, asi que se fue y el camino estuvo muy facil �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Busc� y busc� el casco pero no lo encontr�, asi que decidio irse a pie y no le alcanzo la energia �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Se arriesgo a irse sin revisar la moto y sin casco pero todo le salio bien y no paso nada \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4:
                	return 0;
                default:
                cout<<"Elige una opci�n correc"<<endl; 
                }
            break;
            case 3:
            cout<<"Se qued� viendo la tele y ahora sabe bien los datos de la granja, pero tambien sali� que el due�o de la granja era malo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir queriendo ir a la granja para informarle a sus amigos \n2.Apresurarse a ir para salvar a sus amigos \n3.Ya no ir y pasearse en el pueblo\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.3.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Para regresar a la granja busca recolectar cosas que le sirvan \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Buscar preferentemente comida \n2.Buscar preferentemente medio de transporte rapido \n3.Buscar cosas al azar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Busc� y encontr� mucha comida enlatada que meti� dentro de una mochila que carga \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Dejar un poco de comida para que no gaste tanta energia \n2.Llevarse toda la comida que pueda\n3.Comer la mitad\n4.Salir del programa" << std::endl;
			 			cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"La poquita que dejo fue lamque le hizo falta para llegar a la granja �No logr� llegar a la granja!\n �Que mala elecci�n!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se llev� toda y la fue comiendo durante el camino, hasta que un oso que salio derrepene se la quito y lo dejo sin nada �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Comi� la mitad al empezar el viaje y la otra mitad cuando ya faltaba poco \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Encontr� una patineta en la recamara de un ni�o \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Usar esa patineta para ir con sus amigos \n2.Mejor irse caminando y ver si la energia alcanza \n3.Dejarla y buscar otro metodo\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Intent� llegar con la patineta y le result� mas facil de lo que pensaba �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se fue, pero se quedo sin energia y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Dej� la patineta y no encontr� otro metodo, buscando por los callejones del pueblo sali� una rata que lo asust� y provoco un paro cardiaco \n �No logr� llegar a la granja!\n �Muri� del susto!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Encontr� una resortera y agua \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Guardarlo y buscar piedras \n2.Dejarlo tirado \n3.Tomarse el agua y guardar la resortera" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Encotr� las piedras y fue a la granja a sacar al due�o a resorterazos y si pudo hacerlo, �Lo logr�!\n �Salvo a sus amigos y les di� la granja!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Lo dej� tirado y al llegar a la granja no pudo hacer nada y solo le cont� a los demas animales lo que vi� �S� logr� llegar a la granja!\n�Qu� mala suerte que no pudo hacer nada!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Tom� el agua y busco piedras en la granja para lanzarle al due�o, lograron ahuyentarlo \n �Logr� llegar y salvarlos!\n �Sus amigos se lo agradecieron!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Se pone a buscar cosas para salvar a sus amigos y un plan \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Buscar un transporte para sacar a sus amigos \n2.Buscar mucha comida para llenarlos de energia \n3.Buscar una cuerda con un gancho\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Encontr� un cami�n muy grande pero con la mitad de gasonlina \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Arriesgarse e ir por sus amigos \n2.Desviarse del camino para cargar gasolina tomando el riesgo de no poder llegar a tiempo por sus amigos \n3.Buscar otro transporte\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"El cami�n si llego a la granja y Pascal ayudo a todos sus amigos a subir al cami�n �Lo logr�!\n �Los salvo Pascal!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Paso a ponerle gasolina pero cuando lleg� a la granja fue muy tarde �No logr� llegar a tiempo a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Busco otro transporte y encontro una camioneta mas chica, donde solo pudo salvar a los mas peque�os y los grandes hicieron desastres para poder salir \n �Logr� llegar!\n �Les aviso y los salvo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Fue a un supermercado y empac� toda la comida enlatada que habia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse de una vez siguiendo la brujula \n2.Buscar un mapa en el supermercado \n3.Abrir una lata de comida y comerla\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Con la comida y la brujula, Pascal llego facilemnte a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"No encontr� el mapa y a pesar de toda la comida que tenia, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"La lata estaba echada a perder y le dio una infecci�n en el estomago, Pascal no resisti� \n �No logr� llegar!\n �Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"En el supermercado encontr� la cuerda y el gancho junto con colchones inflables \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Llevarse todo \n2.Buscar el inflador para los colchones \n3.Dejar los colchones para ahorrar energia al cargar\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Llevo todo y al llegar a la granja les conto lo que vi� en las noticias a sus amigos y los ayudo a escapar con las cosas, solo que se hicieron da�o por no tener con que inflar los colchones, �Lo logr�!\n �Los salvo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Lo encontr� y fue rapido a la granja a ayduar a sus amigos y se fueron a vivir a otra granja�S� logr� llegar a la granja!\n�Los salvo del due�o malo!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Llevo todo y al llegar a la granja les conto lo que vi� de las noticias a sus amigos y los ayudo a escapar con las cosas que guardo, �Lo logr�!\n �Los salvo!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3:
                cout<<"Ya no quiere ir y se va a un parque del pueblo abandonado \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Subirse a los juegos \n2.Buscar algo de comer \n3.Ir a la granja abandonada del pueblo\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Se subi� a los juegos pero vi� que adentro habia fantasmas \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Abrir y cerrar los ojos \n2.Huir \n3.Atacarlos" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Los abrio y cerro y ya no habia nada, �El pueblo estaba maldito!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Intent� escapar pero siempre volvia al mismo lugar �No logr� llegar a la granja!\n�El peublo estaba maldito!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Los atac� pero sus golpes los atravesaban, no podia hacer nada \n �Qued� atrapado!\n �No logr� ir con sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 2:
                        cout<<"Vi� un puesto de helados viejo al fondo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir a los helados \n2.Buscar otro puesto, ese se ve muy tenebroso \n3.Quedarse en los juegos\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Fue a los helados y al llegar el puesto lo absrobi� y no se supo nada mas �No logr� reunirse con sus amigos!\n �Qu� lastima!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Busc� otro puesto y tom� su helado pero se qued� atrapado en ese lugar �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"Sigui� jugando en los juegos y asi se di� cuenta que ahi estaria para siempre \n �No Logr� llegar!\n �Qu� fue lo que paso?!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 4:
                            return 0;
                            default:
                            cout<<"Elige una opcion correcta"<<endl;
                            }
                        break;
                        case 3:
                        cout<<"Fue a la granja abandonada y not� que era igual a comparaci�n de la que venia el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Revisar si esta el mismo hoyo que el habia hecho una vez \n2.No darle importancia y salirse de la granja \n3.Quedarse ahi a hablar con los animales que estan\n4.Salir del programa" << std::endl;
                		cin>>opcionesn;
      			  				cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
          			  			switch(opcionesn)
                            {
                            barras-=2;    
                            case 1:
                            cout<<"Lo reviso y s� era, �Estaba en un mudno alterno derrepente!\n �com� sucedi�?!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 2:
                            cout<<"Se sali� de la granja pero por andar paseandose no cumpli� su misi�n, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            break;
                            case 3:
                            cout<<"No habia ningun animal, todo fue parte de sus alucinaciones \n �Qued� atrapado en sus sue�os!\n �Que raro!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4:
               	return 0;
                default:
                cout<<"Elige una opci�n correc"<<endl; 
                }
            break;
            case 4:
            return 0;
            default:
            cout<<"Elige una opci�n correc"<<endl;
            }
            
    break;
    case 4:
    cout<<"fue a la bahia y solo vio pasar un pescador que lo observ� un rato \n Qued� con "<< (barras)-float(3); cout << " barras \n Elige su proxima acci�n \n1.Esperar a que regrese el pescador \n2.Seguir buscando en la bahia una pista \n3.Agarrar el bote que dejo el pescador\n4.Salir del programa" << std::endl;
    cin>>opcionesn;
    cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
            //menu 1.4
            switch(opcionesn)
            {
            case 1:
            cout<<"Esper� al pescador y este regres� y se le acerco, le dijo que por qu� estaba ah� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Contestarle y placticarle el asunto \n2.Contarle una historia falsa para ver que hace el pescador \n3.Ignorarlo y correr\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Le platic� y entendi� su caso pero dijo que el no podia ayudarlo porque tenia que pescar pero le podia ofrecer comida y agua y decirte como irse \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Aceptar la comida y el agua  \n2.Rechazarlo e irse \n3.Robarle su dinero y escapar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Acept� la comida y el agua y cree estar listo para ir a la granja aunque sea un camino muy largo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse \n2.Esperar a reunir comida para el camino \n3.Preguntarle otra vez al pescador cuando podria llevarlo\n4.Salir del programa" << std::endl;
     					  		  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se fue y lleg� a la granja sin problemas �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Reuni� mas comida, lleg� sin problemas a la granja y hasta le sobr� comida para sus amigos, �S� logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"El pescador se estres� y ya no lo llev� y qued� sin energia \n �No logr� llegar!\n �S� m�s paciente!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Lo rechaz� y se fue, no logr� encotrar mas comida \n Qued� con "<< barras<<" barras \n Elige su proxima acci�n \n1.Regresar con el pescador \n2.Seguir buscando por los alrededores \n3.Ir rodeando el mar para encontrar la granja\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Regres� con el pescador y este lo rechaz�, �No lo logr�!\n �Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"No encontr� nada y se rompi� la pata en una caida, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Rode� el mar y estaba luego luego la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
            			cout<<"Rob� el dinero y le alcanza para el taxi, solo debe seguir caminando \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir caminando hacia la carretera \n2.Arrepentirse y regresarle su dinero al pescador \n3.Buscar comida en el camino\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Lleg� a la carretera y par� un taxi que lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Le devolvi� el dinero al pescador y este solo tom� el dinero y se fue, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Por estar buscando la comida cay� en una zanja y, \n �No logr� llegar!\n �Qu� malo!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        default:
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Le cont� y el pescador lo dudo un poco pero le ofreci� alimento y decirle el camino \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Aceptar la ayuda del pescador \n2.Decirle que s� pero planear robarle \n3.Rechazarlo e irse\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Acept� la ayuda del pescador y le di� la comida solo tiene que esperar a que le digan el camino \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.No esperar m�s y preguntarle al pescador \n2.Ser paciente \n3.Pedirle m�s agua para el camino\n4.Salir del programa" << std::endl;
                					  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"El pescador por decirle rapido las instrucciones se las dijo mal y Pascal se perdi�, �No lo logr�!\n �S� mas paciente!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Fue paciente y el pescador le trazo un mapa que seguir y lleg� a la granja sin problemas , �S� logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le di� mas agua el pescador y Pascal lleg� biem hidratado a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"El dia del robo te descubri� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Simular y arreglarlo \n2.Aceptarlo y escaparse \n3.Terminar de robarle y huir" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Simul� y arreglo la escena, tom� el dinero y se fue a la granja �Lo logr�!\n �Robando, pero lleg�!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Lo alcanz� antes de subirse al taxi y le quit� el dinero y lo vendi� a un carnicero \n �No logr� llegar!\n �Cada acto tiene su consecuencia!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Lo rechaz� y se fue, se perdi� pero encontr� agua \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Volver con el pescador \n2.Empezar a caminar lo que cree que es el camino a la granja \n3.Rendirse\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"El pescador lo ignor� y Pascal se fue y perdi� en un bosque, �No lo logr�!\n �Qu� mal plan!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Camino y s� le atin�, era el camino hacia la granja , �Lo logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Se rindi� y hasta ah� lleg� \n �No logr� llegar!\n �Se mas perseverante!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Corriste pero te alcanz� y quiere que le digas que hacias en su zona \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Decirle que esta perdido y quiere volver a su granja \n2.Pedirle comida y agua \n3.Deirle que no tiene hogar\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Le pregunta cual es su granja y le responde, el le dice que puede darle unas monedas para irse si le ayuda a pescar \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ayudarle a pescar \n2.Pescar pero escapar con los peces \n3.Rechazarlo y pedirle nadamas el camino\n4.Salir del programa"<<endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Le ayud� al pescador y este se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escap�, pero se quedo sin barras y los peces no sirvieron de mucho, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le dijo el camino pero a falta de energia, Pascal fue derribado por una enorme roca de la que no pudo escapar \n �No logr� llegar!\n �Muy mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Le dij� que s�, y que te te tienes que ir lo mas pronto \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Tomar la comida y agua e irse \n2.Tomarlo como insulto y no aceptar nada \n3.Pedirle mas comida para sus amigos\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se fue con la comida y agua y llev� a la granja donde les di� las sobras a sus amigos �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se fue pero por culpa de su orgullo se qued� sin energia �No logr� llegar \n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le di� un poco mas de comida y se fue a darsela a sus amigos \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Le dice que el esta muy solo y que podrias ser su acompa�ante \n Qued� con "<< barras << " barras \n Elige su proxima acci�n \n1.Aceptar ser su acompa�ante \n2.Decirle que puede visitarlo muy seguido si le ayuda \n3.Rechazarlo\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se qued� con el y ahora hacen un rgan equipo �Encontr� un nuevo hogar!\n �Que feliz!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"El pescador acepta y lo aydua a llegar a la granja, �S� logr� llegar a la granja!\n�Qu� buena onda!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Lo rechaza y el pescador no le ayuda, Pascal ve que hay lluvia acida y no encuentra donde esconderse \n �No logr� llegar!\n �Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opci�n correcta"<<endl; 
                }
            break;
            case 2:
            cout<<"Encontr� unas monedas del pescador en un baul \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Tomar las monedas e irse \n2.Dejarlas ah� y esperar mas tiempo \n3.Esconderse enfrente del baul" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Tom� las monedas y le alcanza para comprar comida y agua para sus amigos o pagar el taxi a la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Pagar el taxi a la granja \n2.Ir caminando para poder comprarles alimentos a tus amigos \n3.Ahorrar el dinero\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Elige pagar el taxi pero se da cuenta que se le cay� una parte del dinero \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Va caminando pero ve que le hace falta alimento a �l \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Ya le falta poco para lograr juntar para los dos \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el ni�o \n2.Seguir escapandode la gente y buscar en el pueblo \n3.Entrar a una casa abierta\n4.Salir del programa" << std::endl;
                        		  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Le cont� a la chica y esta se conmovi� y lo llevo a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se escap�, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"La chica al principio se enoj� por el desastre que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Las dej� ah� y el pescador fue y echo m�s monedas \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Tomarlo y huir \n2.En cuanto lo vuelva a ver decirle lo mal de su escondite \n3.Esperar a que se junte m�s\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Lo toma y se va pero lo ve a lo lejos y lo alcanza en su moto vieja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Le explica que es para regresar con sus amigos \n2.No dice nada y lo ataca para poder escapar otra vez \n3.Devolverle el dinero y pedirle perd�n\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"El pescador le dice que se suba a la moto y lo lleva a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Lo atac� pero no sirvio de nada, este lo capturo , �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le devolvi� el dinero y este lo perdon� pero no lo llevo a la granja \n �No logr� llegar!\n �Pero es de sabios arrepentirse!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Le dice el pescador que qu� hacia ah� \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Le dice que estaba planeando robarle pero que decidi� no hacerlo \n2.Decirle que lo iban siguiendo y que por eso te escondiste ah� \n3.Contarle la verdad\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"El pescador lo corri� de su casa y Pascal termino sin nada, �No lo logr�!\n �Intenta m�s para la otra!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Result� el plan y por lastima lo llev� a la granja, �S� logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"El pescador al principio se enoj� por las mentiras que hizo pero al saber la historia lo comprendi� y lo llev� a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"No ha ido a ponerle m�s \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Esperar m�s tiempo \n2.Tomar lo que hay hasta el momento e irse \n3.Ir a otro lado de la casa a buscar comida o agua" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Esper� demasiado y nunca lleg� a nada, �No lo logr�!\n �Intenta m�s para la otra!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se fue con lo que habia y se baj� antes del taxi pero camino y lleg�, �S� logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Se acab� su energia tratando de encontrar m�s energia \n �No logr� llegar!\n �Sera para la proxima!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Se escondi� pero se le veia la cola y el pescador lo descubri�  "<< barras<< " barras \n Elige su proxima acci�n \n1.Voltear y morderlo para agarrar su moto e irse \n2.Hacerse el muerto \n3.Decirle la situaci�n que esta pasando\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Gana tiempo mordiendolo pero la moto no arranca \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Irse a pata \n2.Seguir intentando hasta que arranque \n3.Dejarse atrapar\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Lo mordi� y tomo su moto, arranco hasta la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"No arranc� la moto nunca, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Se dej� atrapar y de castigo se qued� como acompa�ante del pescador \n �Logr� un nuevo compa�ente!\n �Que no sea un castigo!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Se hace el muerto y funciona, lo pone sobre su sill�n para pensar que hacer con el \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Esperar a que se vaya para tomar todo lo que pueda e irse \n2.Seguir haciendose el muerto \n3.Cuando lo termine de acomodar atacarlo y correr\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se fue el pescador y no logr� conseguir muchas cosas pero apenas y pudo llegar, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se sigui� haciendo el muerto pero el pescador le hizo una prueba y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Lo atac� pero no lleg� mu lejos, el pescador lo secuestro \n �No logr� llegar!\n �Qu� mal plan!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Le dijo la situaci�n y lo entiendo, le ofreci� llevarlo en su moto pero diciendole que tardaria y el tendria que bsucar su comida \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Aceptar el trato \n2.Rechazarlo y robarle su comida \n3.Robarle su moto y ver si tiene gasolina\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Acepto el trato y consigui� su propia comida �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Lo rechaz� y rob� su comida con la que pudo llegar a la granja �S� logr� llegar a la granja!\n�Qu� buena suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le rob� su moto y si le alcanz� para llegar a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4: return 0;
                default:
                cout<<"Elige una opci�n correcta"<<endl; 
                }
            break;
            case 3:
            cout<<"Agarr� el bote y vi� que si servia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir con el bote al otro lado del mar \n2.Quedarse en el bote esperando \n3.Bajarse y esperar al siguiente dia para irse en el\n4.Salir del programa" << std::endl;
            cin>>opcionesn;
            cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                //menu1.4.1
                switch(opcionesn)
                {
                case 1:
                cout<<"Lleg� al otro lado y vi� muy cerca la granja, solo tiene que cruzar un rio \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir con el plan \n2.Parar el barco para buscar comida \n3.Continuar a pie para explorar cruzando el rio con el puente de un tronco de un arbol\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Cruz� el rio, pero lo vio el pescador que fue con el due�o de la granja  \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Desviarse \n2.Continuar con direcci�n a la granja \n3.Intentar llamar a sus amigos por se�as para que le ayuden\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se desvi� y esper� a que se fuera, cuando vi� que se fue regreso a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Continu� hacia la granja y �S� lleg�!\n�Qu� buena onda!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Los amigos le ayudaron y desviaron la atenci�n del pescador para que pudiera llegar Pascal \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Par� el barco pero se lo llevo la marea \n Qued� con "<<barras<< " barras \n Elige su proxima acci�n \n1.Buscar la comida \n2.Intentar recuperar el bote jalando la cuerda que tiene atada \n3.Ver si con la energia que tiene le alcanza para llegar a la granja\n4.Salir del programa" << std::endl;
                					cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Busc� la comida y la encontr�, le di� suficiente energia para llegar a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"La jal� con todas sus fuerzas pero se termino cayendo al mar, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Apenitas y le alcanz� la energia para llegar \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Va cruzando el puente pero se cae \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Nada con todas sus fuerzas a la orilla \n2.Dejarse llevar por la corriente \n3.Sostenerse del tronco e intentar subir\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Nado hasta la orilla pero lamentablemente no pudo avanzar m�s, �No lo logr�!\n �Pobrecito!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se dej� llevar por la corriente y le ayud� mucho solo tuvo que caminar unos metros a la granja, �Lo logr� llegar a la granja!\n�Por fin se reuni� con sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Por mas que intent� subir no pudo y se dej� caer al rio \n �No logr� llegar!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 2:
                cout<<"Esper� mucho y vio que venia el pescador \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Esperar a que llegue al bote el pescador \n2.Empezar a mover el bote al instante \n3.Bajarse y correr\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Habl� con el pescador y este se subi� y lo acerc� a la granja \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Pedirle que lo lleve hasta donde se pueda a la granja \n2.Preguntarle si no tiene un poco de comida \n3.Bajarse y agradecerle\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se lo pidi� y el granjero accedi�, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Le pregunt� si no tenia comida y el pescador le dijo que no, asi que se qued� sin energia, �No logr� llegar a la granja!\n�Falt� muy poco!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Se baj� y el pescador lo acompa�o hsta la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Lo movi� y el pescador corri� y empezo a jalar de la cuerda, al final gano Pascal y se llev� el bote \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Detener el bote y devolverselo al pescador \n2.Continuar hasta llegar a la orilla de la granja \n3.Parar a buscar comida\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Detuv� el bote y al devolverselo al pescador, este lo llev� a la granja, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Continu� y en la orilla corri� hacia la granja y, �S� logr� llegar a la granja!\n�Que feliz estaba con sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"No encontr� m�s comida y se qued� varado en el camino \n �No logr� llegar!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Se baj� y corrio pero se alento por falta de energia \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Parar y esperar al pescador que lo seguia \n2.Aventarse al mar \n3.Comer algo que se encontr� en el suelo y seguir corriendo hsta perderlo\n4.Salir del programa" << std::endl;
                				  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Lo esper� y el pescador no tuvo piedad, �No lo logr�!\n �Eso debi� doler!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se avento al mar y la corriente lo empujo hasta la orlla de la granja �S� lleg�!\n�Se reuni� con sus amigos!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Lo que comi� del suelo solo le di� energia para perder al pescador pero no para llegar a la granja \n �No lr� llegar!\n �Que mala suerte!Qued� con"<<barras<<"barras"<<std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 3: 
                cout<<"Esper� al siguiente dia y el pescador se habia llevado el bote \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Seguir esperando \n2.En lo que no esta el pescador, saquear su alacena \n3.Irse en su moto hasta el momento en el que tenga que cruzar el rio\n4.Salir del programa" << std::endl;
                cin>>opcionesn;
                cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                switch(opcionesn)
                        {
                        case 1:
                        cout<<"Espero y apareci� el bote otra vez pero no tiene la suficiente energia para manejarlo \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Ir a la casa a buscar comida \n2.Buscar la comida en la caba�a \n3.Tomar agua e intentar lograrlo con eso\n4.Salir del programa" << std::endl;
                					  cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Fue a la casa y si encontr� comida, la comi� e inmediatamente se fue al bote, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"En la caba�a solo habian herramientas de trabajo y de tanto buscar, gast� su energia, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Tom� suficiente agua como para llegar a la granja \n �Logr� llegar!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 2:
                        cout<<"Recolect� mucha comida \n Qued� con "<< barras<< " barras \n Elige su proxima acci�n \n1.Caminar hacia la granja, guiandose a trav�s del cartel \n2.Irse en el bote \n3.Quedarse a vivir con el pescador\n4.Salir del programa" << std::endl;
                						 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Se gui� a trav�s del cartel pero era otra granja, �No lo logr�!\n �Que mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Se fue en el bote, pero se quedo sin barras y, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Le ofreci� su compa�ia y el pescador la acepto \n �Encontr� un nuevo hogar!\n �Que vivan felices!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 4:
                            	  return 0;
                           	   	  default:
                         		  cout<<"Elige una opcion correcta"<<endl;
                         	   	  }
                        break;
                        case 3:
                        cout<<"Lleg� al cruce del rio pero no hay con que cruzarlo \n Qued� con "<< barras<<" barras \n Elige su proxima acci�n \n1.Intentar cruzarlo nadando \n2.Buscar una tabla con la que pueda cruzarlo \n3.Buscar otro camino mas lejano\n4.Salir del programa" << std::endl;
                					 cin>>opcionesn;
                    		  	  cout<<"Elegiste -"<<opcionesn<<"- \nBarras disponibles:"<<barras<< endl;
                    		  	  switch(opcionesn)
                            	  {
                            	  barras-=2;    
                            	  case 1:
                            	  cout<<"Nado y nado, y con sus ultimos suspiros, �Lo logr�!\n �Lo habian extra�ado mucho!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 2:
                            	  cout<<"Busc� la tabla pero no la encontr� y se agot� su energia, �No logr� llegar a la granja!\n�Qu� mala suerte!\n Qued� con "<<barras<< " barras" << std::endl;
                            	  break;
                            	  case 3:
                            	  cout<<"Encontr� el camino pero no lleg�, se quedo a metros \n �No logr� llegar!\n �Energia agotada!\n Qued� con "<<barras<< " barras" << std::endl;
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
                        cout<<"Elige una opci�n correcta"<<endl;
                        }
                break;
                case 4:
                return 0;
                default:
                cout<<"Elige una opci�n correcta"<<endl; 
                }
            break;
            case 4:
            	return 0;
            default:
            cout<<"Elige una opci�n correcta"<<endl;
            
            }
    break;
    case 5:
    return 0;
    break;
    default:
    cout<<"Elige una opci�n correcta"<<endl;
    }
        
    
    
  
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    
}
    return 0;

}
