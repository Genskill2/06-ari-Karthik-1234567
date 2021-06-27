
#include <cs50.h>
string ari(string s){
  

 
  int count =0;
  
  int sentence=0;
  
  int space =0;
  
  char p[]="?!.";
  
  char z[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
  
  for(int x=0; x<strlen(s);x++){
    if(s[x]==' '){
        space++;
        }
    else if(s[x]==p[0]||s[x]==p[1]||s[x]==p[2]){
      sentence++;
    }
        
    for(int y=0;y<strlen(z);y++){
      
      if(s[x]==z[y]){
        count++;
        }
     
      
      }
      
      }
        
   
    
    float k= 4.71*(float)count/space + 0.5*(float)space/sentence -21.43;
    int r = (int)k + 1;
    
    
    switch(r){
   case 1  : 
     char a[] = "Kindergarten";
     return a;
     break;
   case 2 :
     char a[] = "First/Second Grade";
     return a;
     break;
   case 3 : 
     char a[] = "Third Grade";
     return a;
     break;
   case 4 : 
     char a[] = "Fourth Grade";
     return a; 
     break;
   case 5 : 
     char a[] = " Fifth Grade";
     return a;
     break;
   case 6 : 
     char a[] = "Sixth Grade";
     return a;
     break;
   case 7  : 
     char a[] = "Seventh Grade";
     return a;
     break;
   case 8 : 
      char a[] = "Eighth Grade"; 
      return a;
      break;
   case 9 : 
      char a[] = "Ninth Grade";
      return a;
      break;
   case 10 : 
      char a[] = "Tenth Grade";
      return a;
      break;
   case 11 : 
    char a[] = "Eleventh Grade";
    return a;
    break;
   case 12 : 
    char a[] = "Twelfth grade";
    return a;
    break;
   case 13  : 
    char a[] = "College student";
    return a;
    break;
   case 14: 
    char a[] = "Professor";
    return a;
    break;
  
 
    
    }
   
       
       

 

  
  
  
}
