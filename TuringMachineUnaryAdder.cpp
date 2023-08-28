#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <fstream>
#include<graphics.h>




using namespace std;
 

string menu(), Manual(), Aleatorio();
int TuringMachine(string entrada);
void Descripciones(string entrada);
string tab(string entrada);
string Manual(), Aleatorio();
int estado,sig;
char D;
int pos=0,c=0, b=0,h=0,g=0;
string A;
 
 //Tabla de transiciones
string tab(string entrada){
 	
 	//estado actual
 	if(estado==1){	
 		//caracter a evaluar segun la posicion del cabezal
 		//caracter a evaluar segun la posicion del cabezal
 		if(entrada[pos]=='*'){
		
					
				A="X";	//Simbolo a insertar
				entrada.replace(pos,1,A); //inserta el simbolo
				TuringMachine(entrada); //animacion 
				
				pos=pos+1;	//movimiento del cabezal
				D='R';		//movimiento en letra para el archivo
				sig=2;		//cambio de estado para el archivo
				Descripciones(entrada);	//escribe el archivo
				A="";		//vacia A
				estado=2;	//cambio de estado
				return entrada;	//retorno 
			    	}
 		
	 }
 	
 	
	if(estado==2){
 		
 		if(entrada[pos]=='*'){
		
					
				A="*";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='R';
				sig=3;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				estado=3;
			return entrada;
			    	}
			    	
		if(entrada[pos]=='|'){
		
					
				A="|";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='R';
				sig=2;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				estado=2;
				return entrada;
				
			    	}	    	
 		
	 }
 	
 	
	if(estado==3){
 		
 		if(entrada[pos]=='*'){
		
					
				A="X";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='L';
				sig=4;
				Descripciones(entrada);
				A="";
				pos=pos-1;
				estado=4;
				return entrada;
			    	}
			    	
		if(entrada[pos]=='|'){
		
					
				A="|";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='R';
				sig=3;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				estado=3;
				return entrada;
			    	}	    	
 		
	 }
	 
	 
	 	
	if(estado==4){
 		
 		if(entrada[pos]=='*'){
		
					
				A="*";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='L';
				sig=4;
				Descripciones(entrada);
				A="";
				pos=pos-1;
				estado=4;
				return entrada;
			    	}
			    	
		if(entrada[pos]=='|'){
		
					
				A="a";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='R';
				sig=5;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				estado=5;
				return entrada;
			    	}	   
					 	
 			if(entrada[pos]=='X'){
		
					
				A="X";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='R';
				sig=7;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				estado=7;
				return entrada;
			    	}	 
			    	
	 }
	 
	 
	 
	
	
		 	
	if(estado==5){
 		
 		if(entrada[pos]=='-'){
		
					
				A="|";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='L';
				sig=6;
				Descripciones(entrada);
				A="";
				pos=pos-1;
				estado=6;
				return entrada;
				
			    	}
			    	
		if(entrada[pos]=='*'){
				A="*";
				TuringMachine(entrada);
				D='R';
				sig=5;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				return entrada;
				
			    	}
					   
		if(entrada[pos]=='|'){
				A="|";
				TuringMachine(entrada);
				D='R';
				sig=5;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				return entrada;	
		
			    	}	  
					 
					 				 	
 			if(entrada[pos]=='X'){
				A="X";
				TuringMachine(entrada);
				D='R';
				sig=5;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				return entrada;
			
			    	}	 
			    	
	 }
	 
	  
	if(estado==6){
 		
 	
			    	
		if(entrada[pos]=='*'){
		
				A="*";
				TuringMachine(entrada);
				D='L';
				sig=6;
				Descripciones(entrada);
				A="";
				pos=pos-1;
			
				return entrada;
		
			    	}
					   
		if(entrada[pos]=='|'){
				A="|";
				TuringMachine(entrada);
				D='L';
				sig=6;
				Descripciones(entrada);
				A="";
				pos=pos-1;
				return entrada;
		
			    	}	  
					 
					 				 	
 			if(entrada[pos]=='X'){
				A="X";
				TuringMachine(entrada);
				D='L';
				sig=6;
				Descripciones(entrada);
				A="";
				pos=pos-1;
				return entrada;
		
			    	}	 
			    	
			    	
			 if(entrada[pos]=='a'){
		
					
				A="|";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='L';
				sig=4;
				Descripciones(entrada);
				A="";
				pos=pos-1;
				estado=4;
				return entrada;
			    	}
 	    	
			    	
	 }


	if(estado==7){
 		
 	
			    	
		if(entrada[pos]=='*'){
		
				A="*";
				TuringMachine(entrada);
				D='R';
				sig=8;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				estado=8;
				return entrada;
				
			    	}
					   
		if(entrada[pos]=='|'){
				A="|";
				TuringMachine(entrada);
				D='R';
				sig=7;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				return entrada;
		
			    	}	  
					 
		
 	    	
			    	
	 }
	  	  

	if(estado==8){
 		
 		if(entrada[pos]=='-'){
		
					
				A="*";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='L';
				sig=9;
				Descripciones(entrada);
				A="";
				pos=pos-1;
				estado=9;
				return entrada;
			    	}
			    	
		if(entrada[pos]=='X'){
		
				A="*";
				entrada.replace(pos,1,A); 
				TuringMachine(entrada);
				D='R';
				sig=8;
				Descripciones(entrada);
				A="";
				pos=pos+1;
						
				return entrada;
			    	}
					   
		if(entrada[pos]=='|'){
				A="|";
				TuringMachine(entrada);
				D='R';
				sig=8;
				Descripciones(entrada);
				A="";
				pos=pos+1;
				return entrada;
		
			    	}	  
					 
		
 	    	
			    	
	 }	
	 
	 
	 
	 if(estado==9){
 		
 		if(entrada[pos]=='*'){
		
				A="*";	
				TuringMachine(entrada);
				D='L';
				sig=9;
				Descripciones(entrada);
				A="";
				pos=pos-1;
			
				return entrada;
			    	}
			    	
		if(entrada[pos]=='X'){
		
				A="*";
				entrada.replace(pos,1,A); 
				b=0;	
				TuringMachine(entrada);
				D='!';
				sig=9;
				Descripciones(entrada);
				A="";
				
				cout<<"halt";
							
						c=1;
				return entrada;
			    	}
					   
		if(entrada[pos]=='|'){
				A="|";
				TuringMachine(entrada);
				D='L';
				sig=9;
				Descripciones(entrada);
				A="";
				pos=pos-1;
			
				return entrada;
			    	}	  
					 
		
 	    	
			    	
	 }	
 	
 return entrada;	
 }
 
 //Funcion para graficar la maquina de Turing
 int TuringMachine(string entrada){
 if(g==1){
 	 return 0;
 }

 	
	 int x1=50;
	 int y1=500;
	 int tam=170;
	 	
	 	
	char str[3];
	 	
	 //For de posiciones a mostrar	
 	for(int i=0; i<12; i++){
 		
  		
 		rectangle(x1+15,y1,x1+tam,y1-tam);
 	 		
 		sprintf(str,"%c",entrada[i]);	
		outtextxy(x1+75,y1-115,str); 
		
		//cabezal
		if(pos==i){
			
			
			line(x1+15,y1+150,x1+15+85,y1);
			line(x1+tam,y1+150,x1+15+85,y1);
			
			
			rectangle(x1+15,y1+300,x1+tam,y1+150);
			sprintf(str,"%d",estado);	
			
			outtextxy(x1+(tam/2)-30,y1+tam+140,"q");
				outtextxy(x1+(tam/2)+20,y1+tam+140,str);
				
				sprintf(str,"%c",A[0]);
					outtextxy(x1+(tam/2),y1+tam+20,str);
					
					
		}
		
		x1=x1+tam;		               
 		 
	 }
	
 	delay(100);
 	
 	if(b==1)cleardevice();
 }
 	
 	
 	//Funcion para registrar las ID's en el archivo
 void	Descripciones(string entrada){
 		ofstream archivo;
 		
 		//si es la primera vez lo abre al inicio
 		//si no en append
 		 if(!h){
						archivo.open("DescripcionesInstantaneas.txt");		
						h=1;
						
					}
			 else archivo.open("DescripcionesInstantaneas.txt",ios::app);
			 
			 
 		//escribe la descripcion instantanea
 		archivo<<"(q"<<estado<<",	"<<entrada[pos]<<",	"<<A[0]<<" "<<D<<" "<<" q"<<sig<<")\n";
 	
 		
	 }
 
 
main()
{
	srand (time(NULL));
	//obtiene la entrada del menu
	string entrada=menu();
	estado=1;	//estado inicial
	pos=1;		//posicion en cinta inicial
	if(entrada.length()<12){
		
			initwindow(1900,900,"w",900,900);//ventana grafica
	}
	
	else g=1;
	
	
	settextstyle(BOLD_FONT, HORIZ_DIR, 7);
	TuringMachine(entrada); //grafica estado inicial
	b=1;
 
 
 //while para evaluar la cadena mientras no se llegue al estado de halt!
while(c==0){
		
		//la cadena se modifica segun la tabla de transiciones
		entrada=tab(entrada);
		//grafica el cambio
		TuringMachine(entrada);
		//imprime el cambio	
		cout<<"\ncinta: "<<entrada;
			
}


//pausa para ver resultado final
	 bool exit = false;
cout<<"";
    while(exit == false)
    {
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            exit = true;
        }
        delay(10);
    }
 	


}




//Funciones para ingresar la cadena
string Manual(){

	int n,n2;
	cout<<"\n Ingrese los numeros a sumar\n";
	cout<<"\n primer numero\n";
	cin>>n;
	cout<<"\n segundo numero\n";
	cin>>n2;	
	
	int longitud=n+n2;
	
	string cadena="-*";
	for(int i=0; i<n;i++){
		cadena=cadena+"|";		
	}
	cadena=cadena+"*";
	for(int i=0; i<n2;i++){
		cadena=cadena+"|";		
	}
	cadena=cadena+"*";
	
	for(int i=0; i<longitud+1;i++){
		
		cadena=cadena+"-";
	
	}
	

	return cadena;
	
}

string Aleatorio(){
	
	int n=rand() %10 +1;
	int n2=rand() %10 +1;
	
	cout<<"\nn1="<<n<<" n2="<<n2;
	int longitud=n+n2;
	
	string cadena="-*";
	for(int i=0; i<n;i++){
		cadena=cadena+"|";		
	}
	cadena=cadena+"*";
	for(int i=0; i<n2;i++){
		cadena=cadena+"|";		
	}
	cadena=cadena+"*";
	
	for(int i=0; i<longitud+1;i++){
		
		cadena=cadena+"-";
	
	}
	


	return cadena;
	
}





string menu()
{
	

	int opc;
	cout<<"1.Entrada manual (max 20)\n2.Entrada automatica(max 100000)\n3.Salir\n";
	cin>>opc;
	string entrada;
	switch(opc){
					case 1:
							entrada=Manual();
							break;
					case 2:
							entrada=Aleatorio();
							break;
		
     				case 3: exit(-1);
     				break;
     				
     				default: cout<<"opcion no valida"<<endl;		
		
		
		
	}
	
	return entrada;
	
	
}
