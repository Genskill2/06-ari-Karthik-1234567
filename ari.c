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
     break;
   case 2 :
     return "First/Second Grade";
     break;
   case 3  : 
     return "Third Grade";
     break;
   case 4 : 
     return "Fourth Grade";
     break;
   case 5 : 
     return " Fifth Grade";
     break;
   case 6 : 
     return "Sixth Grade";
     break;
   case 7  : 
     return "Seventh Grade";
     break;
   case 8 : 
      return "Eighth Grade"; 
      break;
   case 9 : 
      return "Ninth Grade";
      break;
   case 10 : 
    return "Tenth Grade";
    break;
   case 11 : 
    return "Eleventh Grade";
    break;
   case 12 : 
    return "Twelfth grade";
    break;
   case 13  : 
    return "College student";
    break;
   case 14: 
    return "Professor";
    break;
  
 
    
    }
   
       
       

 

  
  
  
}
