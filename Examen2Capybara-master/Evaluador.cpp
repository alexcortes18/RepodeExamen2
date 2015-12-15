#include "Evaluador.h"

string getPrimerElemento(queue<string> mi_cola);

bool estaEncendido(char byte, int pos)
{
char mascara = 1;
mascara = mascara << pos;
return byte&mascara;
}

bool compareSets(set<string>s1, set<string>s2)
{
    if(s1.size()!=s2.size())
        return false;
    set<string>::iterator j =s2.begin();
    for(set<string>::iterator i=s1.begin();i!=s1.end();i++)
    {
        if(*i!=*j)
            return false;
        j++;
    }
    return true;
}

bool compareSets(stack<char>s1, stack<char>s2)
{
    if(s1.size()!=s2.size())
        return false;
    while(!s1.empty())
    {
        if(s1.top()!=s2.top())
            return false;
        s1.pop();
        s2.pop();
    }
    return true;
}

void evaluar()
{
    int nota = 0;

    escribir("archivo_evaluador1",new Pista("Julian",2001,2,'a',false),1);
    escribir("archivo_evaluador1",new Pista("Julieta",2011,5,'b',true),0);
    escribir("archivo_evaluador1",new Pista("Romea",2015,3,'c',false),2);


    cout<<"Ejercicio escribir() y leer():\t\t";
    bool correcto = true;

    if(  (leer("archivo_evaluador1",0)->autor == "Julieta"
       && leer("archivo_evaluador1",1)->autor == "Julian"
       && leer("archivo_evaluador1",2)->autor == "Romea"
       && leer("archivo_evaluador1",0)->fecha == 2011
       && leer("archivo_evaluador1",1)->fecha == 2001
       && leer("archivo_evaluador1",2)->fecha == 2015
       && leer("archivo_evaluador1",0)->duracion == 5
       && leer("archivo_evaluador1",1)->duracion == 2
       && leer("archivo_evaluador1",2)->duracion == 3
       && leer("archivo_evaluador1",0)->categoria == 'b'
       && leer("archivo_evaluador1",1)->categoria == 'a'
       && leer("archivo_evaluador1",2)->categoria == 'c'
       && leer("archivo_evaluador1",0)->es_buena == true
       && leer("archivo_evaluador1",1)->es_buena == false
       && leer("archivo_evaluador1",2)->es_buena == false
       )==false)
    {
        correcto=false;
    }

    escribir("archivo_evaluador2",new Pista("Tribilin",1743,1,'x',true),0);
    escribir("archivo_evaluador2",new Pista("Dolan",1521,8,'y',true),1);

    if(  (leer("archivo_evaluador2",0)->autor == "Tribilin"
       && leer("archivo_evaluador2",1)->autor == "Dolan"
       && leer("archivo_evaluador2",0)->fecha == 1743
       && leer("archivo_evaluador2",1)->fecha == 1521
       && leer("archivo_evaluador2",0)->duracion == 1
       && leer("archivo_evaluador2",1)->duracion == 8
       && leer("archivo_evaluador2",0)->categoria == 'x'
       && leer("archivo_evaluador2",1)->categoria == 'y'
       && leer("archivo_evaluador2",0)->es_buena == true
       && leer("archivo_evaluador2",1)->es_buena == true
       )==false)
    {
        correcto=false;
    }

    if(correcto)
    {
        nota+=4;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio contarBuenas():\t\t";
    if(contarBuenas("archivo_evaluador1")==1
       &&contarBuenas("archivo_evaluador2")==2
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    multiset<int>s1;
    s1.insert(0);
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);
    s1.insert(4);
    s1.insert(4);
    s1.insert(2);
    s1.insert(1);
    s1.insert(4);
    s1.insert(3);
    s1.insert(3);

    multiset<int>s2;
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    s2.insert(20);
    s2.insert(10);

    multiset<int>s3;
    s3.insert(100);
    s3.insert(200);
    s3.insert(300);
    s3.insert(20);

    multiset<int>s4;
    s4.insert(100);
    s4.insert(100);
    s4.insert(100);
    s4.insert(100);
    s4.insert(100);

    cout<<"Ejercicio contarRepetidos():\t\t";
    if(contarRepetidos(s1)==4
       && contarRepetidos(s2)==2
       && contarRepetidos(s3)==0
       && contarRepetidos(s4)==1
       )
    {
        nota+=4;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    queue<char>q1;
    q1.push('a');
    q1.push('b');
    q1.push('c');
    q1.push('d');

    queue<char>q2;
    q2.push('1');
    q2.push('2');
    q2.push('3');
    q2.push('4');
    q2.push('5');

    stack<char>sq1;
    sq1.push('q');
    sq1.push('w');
    sq1.push('e');
    sq1.push('r');

    stack<char>sq2;
    sq2.push('a');
    sq2.push('s');
    sq2.push('d');

    cout<<"Ejercicio existe():\t\t\t";

    if(existe(q1,sq1,'a')
        && !existe(q1,sq1,'x')
       && existe(q1,sq1,'q')
       && !existe(q1,sq1,'y')
       && existe(q2,sq2,'a')
       && !existe(q2,sq2,'m')
       && existe(q2,sq2,'3')
       && !existe(q2,sq2,'p')
       && existe(q2,sq2,'d')
       && !existe(q2,sq2,'+')
       && existe(q2,sq2,'5')
       && !existe(q2,sq2,'q')
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio getKey():\t\t\t";

    map<string,string>m1;
    m1["x"]="a";
    m1["y"]="b";

    map<string,string>m2;
    m2["A"]="1";
    m2["B"]="2";
    m2["C"]="3";

    map<string,string>m3;
    m3["X"]="q";

    if(getKey(m1,"a")=="x"
       && getKey(m1,"b")=="y"
       && getKey(m2,"1")=="A"
       && getKey(m2,"2")=="B"
       && getKey(m2,"3")=="C"
       && getKey(m2,"4")==""
       && getKey(m3,"q")=="X"
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoBinario*n1 = new NodoBinario(1);
    NodoBinario*n2 = new NodoBinario(2);
    NodoBinario*n3 = new NodoBinario(3);
    NodoBinario*n4 = new NodoBinario(4);
    NodoBinario*n5 = new NodoBinario(5);
    NodoBinario*n6 = new NodoBinario(6);
    NodoBinario*n7 = new NodoBinario(7);
    NodoBinario*n8 = new NodoBinario(8);
    NodoBinario*n9 = new NodoBinario(9);

    n1->hijo_izquierdo=n2;
    n1->hijo_derecho=n3;
    n2->hijo_izquierdo=n4;
    n2->hijo_derecho=n5;
    n5->hijo_izquierdo=n6;

    n3->hijo_derecho=n7;
    n7->hijo_izquierdo=n8;
    n7->hijo_derecho=n9;

    cortarDecendencia(n1,5);
    cortarDecendencia(n3,7);
    cortarDecendencia(n1,3);
    cortarDecendencia(n9,9);
    cortarDecendencia(n9,4);

    cout<<"Ejercicio cortarDecendencia():\t\t";
    if(n1->hijo_izquierdo==n2
       && n1->hijo_derecho==n3
       && n2->hijo_izquierdo==n4
       && n2->hijo_derecho==n5
       && n3->hijo_izquierdo==NULL
       && n3->hijo_derecho==NULL
       && n5->hijo_izquierdo==NULL
       && n5->hijo_derecho==NULL
       && n7->hijo_izquierdo==NULL
       && n7->hijo_derecho==NULL
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio getProfundidad():\t\t";

    n1 = new NodoBinario(1);
    n2 = new NodoBinario(2);
    n3 = new NodoBinario(3);
    n4 = new NodoBinario(4);
    n5 = new NodoBinario(5);
    n6 = new NodoBinario(6);
    n7 = new NodoBinario(7);
    n8 = new NodoBinario(8);
    n9 = new NodoBinario(9);

    n1->hijo_izquierdo=n2;
    n1->hijo_derecho=n3;
    n2->hijo_izquierdo=n4;
    n2->hijo_derecho=n5;
    n5->hijo_izquierdo=n6;

    n3->hijo_derecho=n7;
    n7->hijo_izquierdo=n8;
    n7->hijo_derecho=n9;

    if(getProfundidad(n1,1)==1
        && getProfundidad(n1,1)==1
       && getProfundidad(n1,5)==3
       && getProfundidad(n1,3)==2
       && getProfundidad(n1,2)==2
       && getProfundidad(n1,7)==3
       && getProfundidad(n1,9)==4
       && getProfundidad(n3,9)==3
       )
    {
        nota+=3;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio borrar2Bits():\t\t";
    if(borrar2Bits(5)==4
        && borrar2Bits(7)==4
       )
    {
        nota+=2;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/20"<<endl;
}
