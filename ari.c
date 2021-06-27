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
    return "Kindergarten";
   case 2 :
     return "First/Second Grade";
   case 3  : 
     return "Third Grade";
   case 4 : 
     return "Fourth Grade";
   case 5 : 
     return " Fifth Grade";
   case 6 : 
     return "Sixth Grade";
   case 7  : 
     return "Seventh Grade";
   case 8 : 
      return "Eighth Grade";
   case 9 : 
      return "Ninth Grade";
   case 10 : 
    return "Tenth Grade";
   case 11 : 
     return "Eleventh Grade";
   case 12 : 
   return "Twelfth grade";
   case 13  : 
    return "College student";
   case 14: 
    return "Professor";
  
 
    
    }
   
       
       

 

  
  
  
}
