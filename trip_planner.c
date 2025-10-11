#include<stdio.h>
#include<string.h>
void gujrat();
void UP();
void UK();

int main(){
    char state[9]; 
    printf("Enter state from UP ,UK ,gujrat for a trip plan: ");
    scanf ("%s" , state );
   if(strcmp(state , "gujrat")==0)
   {
    gujrat();
   }
  else if(strcmp(state , "UP")==0)
   {
    UP();
   }
   else if(strcmp(state , "UK")==0)
   {
    UK();
   }
   else 
   printf( "invalid state for us");
   return 0;
}
void gujrat(){
    printf("place for visit \n");
    printf("Statue of Unity, Kevadiya \n");
    printf("Gir National Park \n");
    printf("Somnath Temple \n");
    printf("Dwarka \n");
    printf("Ambaji Mata Temple \n");
    printf("Rann of Kutch \n");
    printf("Cost of trip per person for 6 days = 15000/Rs");
}
void UP(){
    printf("place for visit \n");
    printf("Ayodhya Ram Mandir \n");
    printf("Kashi Vishwanath Temple (Varanasi) \n");
    printf("Mathura Vrindavan \n");
    printf("Prayagraj (Allahabad) Triveni Sangam \n");
    printf("Vindhyacha \n");
    printf("Agra Taj Mahal & Agra Fort \n");
    printf("Cost of trip per person for 6 days = 17000/Rs");
}
void UK(){
    printf("place for visit \n");
    printf("Haridwar \n");
    printf("Rishikesh \n");
    printf("Mussoorie \n");
    printf("Nainital \n");
    printf("Jim Corbett National Park \n");
    printf("Badrinath / Kedarnath \n");
    printf("Cost of trip per person for 6 days = 19000/Rs");
}
