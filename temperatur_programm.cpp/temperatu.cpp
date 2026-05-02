#include <iostream>
#include <string>
using namespace std;

void fürCaseEins(string [12],float [12]);
void fürCaseZwei(float [12]);
void fürCaseDrei(float[12], string[12]);
void fürCaseVier();
float zuFahrenheit(float celsius);


int main(){

    int auswahl;
    string eingabe_monat;
    float temp[]={1,2,6,10,14,17,19,19,15,20,5,2}; 
    string monat[]={"Januar", "Februar", "März", "April","Mai","Juni", "Juli", "August", "September", "Oktober", "November", "Dezember"};
    auswahl=0;

   do
   {
    /* code */
   cout<<"1: Durchschnittstemperatur eines Monats anzeigen"<<endl;
   cout<<"2: Durchschnittstemperatur aller Monate berechnen"<<endl;
   cout<<"3: Den heißesten Monat im Jahr anzeigen"<<endl;
   cout<<"4: Durchschnittstemperaturen aller Monate anzeigen"<<endl;
   cout<<"0: Programm beenden";
   cout<<"Geben Sie Ihre Auswahl ein: "<<endl;
   cin>>auswahl;
   
    switch (auswahl)
    {
    case 1:
    {
    fürCaseEins(monat, temp);
        break;
    }
    case 2:
    {
        fürCaseZwei(temp);
        break;
    }
    case 3:
    {
        fürCaseDrei(temp, monat);
        break;
    }
    case 4:
    {
        fürCaseVier();
        break;
    }
    case 0:{
    cout<<"Vielen Dank und Auf Wiedersehen!"<<endl;
    break;
    
    }
    default:{
        cout<<"Die Auswahl ist falsch, bitte geben Sie eine andere Zahl aus: "<<endl;
        break;
    }
    
   }
  
   }
   while (auswahl>0);
}


void fürCaseEins (string M[], float temp[])

{ string eingabe_monat;
    int i;
 cout<<"Geben Sie den Monat an: ";
    cin>>eingabe_monat;
    
    for (i=0; i<12; i++)
      if (eingabe_monat==M[i])
      {
        cout << "Durchschnittstemperatur: " << temp[i] << "°C (" << zuFahrenheit(temp[i]) << "°F)" << endl;
      }
}

void fürCaseZwei(float temp[])
{
    int i;
    float summe=0;
    float durchschnitt;
    for (i=0;i<12;i++)
    {
    summe=summe+temp[i];
    }
    durchschnitt=summe/12;

    cout<<"Summe: "<<durchschnitt<<endl;
}

void fürCaseVier()
{
    int i;
    int j;
    float zwisch;
    string zwischm;
    float temp[]={1,2,6,10,14,17,19,19,15,20,5,2};
    string monat[]={"Januar", "Februar", "März", "April","Mai","Juni", "Juli", "August", "September", "Oktober", "November", "Dezember"};
    for (j=0; j<12-1;j++)
    {
        for (i=0; i<12-j-1;i++)
        {
            if(
                temp[i]>temp[i+1]
            )
            {
                zwisch=temp[i];
                temp[i]=temp[i+1];
                temp[i+1]=zwisch;
                zwischm=monat[i];
                monat[i]=monat[i+1];
                monat[i+1]=zwischm;

            }
        }

    }
    cout<<"Sortierte Temperaturen:  ";
    int k;
    for( k=0; k < 12; k++)
    {
        cout<<monat[k]<<": "<<temp[k]<<"  ";
    }
    
}

void fürCaseDrei(float temp[], string monat[])
{
    int i;
    int j;
    int max;
    string heiß;
    max=temp[0];
    for (i = 0; i < 12; i++)
    {
        if (temp[i]>max)
        {
            max=temp[i];
            heiß=monat[i];
        }
        

     }

     cout<<"Der heißeste Monat ist "<<heiß<<" mit der Durschschnittstemperatur von "<<max<<endl;
     

        
 }
    

float zuFahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}
