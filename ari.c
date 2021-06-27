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
    
    string a;

    switch(r){
   case 1  : 
      a = "Kindergarten";
     return a;
     break;
   case 2 :
     a  = "First/Second Grade";
     return a;
     break;
   case 3 : 
     a = "Third Grade";
     return a;
     break;
   case 4 : 
     a = "Fourth Grade";
     return a; 
     break;
   case 5 : 
     a = " Fifth Grade";
     return a;
     break;
   case 6 : 
     a = "Sixth Grade";
     return a;
     break;
   case 7  : 
     a = "Seventh Grade";
     return a;
     break;
   case 8 : 
      a = "Eighth Grade"; 
      return a;
      break;
   case 9 : 
      a = "Ninth Grade";
      return a;
      break;
   case 10 : 
      a = "Tenth Grade";
      return a;
      break;
   case 11 : 
    a = "Eleventh Grade";
    return a;
    break;
   case 12 : 
    a = "Twelfth grade";
    return a;
    break;
   case 13  : 
    a = "College student";
    return a;
    break;
   case 14: 
    a = "Professor";
    return a;
    break;
  
 
    
    }
   
       
       

 

  
  
  
}
