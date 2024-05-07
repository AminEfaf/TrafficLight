#include <io.h>
#include <mega16.h>
#include <delay.h>

void main(void)
{
DDRA=0Xff;
DDRC=0Xff;

while (1)
    {       
    PORTC.1=0; 
    PORTC.0=1; 
      
    PORTA=0b00000001;
    delay_ms(1000); 
    PORTA=0b00000010;
    delay_ms(1000);
    PORTA=0b00000011;
    delay_ms(1000);  
    PORTA=0b00000100;
    delay_ms(1000);  
    PORTA=0b00000101;
    delay_ms(1000);  
    PORTA=0b00000110;
    delay_ms(1000);  
    PORTA=0b00000111;
    delay_ms(1000);  
    PORTA=0b00001000;
    delay_ms(1000);  
    PORTA=0b00001001;
    delay_ms(1000);  
    PORTA=0b00010000;
    delay_ms(1000);  
    PORTA=0b00010001;
    delay_ms(1000);  
    PORTA=0b00010010;
    delay_ms(1000);  
    PORTA=0b00010011;
    delay_ms(1000);  
    PORTA=0b00010100;
    delay_ms(1000);  
    PORTA=0b00010101;
    delay_ms(1000);  
 
    PORTC.0=0; 
    PORTC.1=1;
    
    PORTA=0b10001000;     
    delay_ms(5000); 
     
    PORTC.1=0; 
    PORTC.2=1;   
    
    PORTA=0b00000001;
    delay_ms(1000); 
    PORTA=0b00000010;
    delay_ms(1000);
    PORTA=0b00000011;
    delay_ms(1000);  
    PORTA=0b00000100;
    delay_ms(1000);  
    PORTA=0b00000101;
    delay_ms(1000);  
    PORTA=0b00000110;
    delay_ms(1000);  
    PORTA=0b00000111;
    delay_ms(1000);  
    PORTA=0b00001000;
    delay_ms(1000);  
    PORTA=0b00001001;
    delay_ms(1000);  
    PORTA=0b00010000;
    delay_ms(1000);  
    PORTA=0b00010001;
    delay_ms(1000);  
    PORTA=0b00010010;
    delay_ms(1000);  
    PORTA=0b00010011;
    delay_ms(1000);  
    PORTA=0b00010100;
    delay_ms(1000);  
    PORTA=0b00010101;
    delay_ms(1000);       
    
    PORTC.2=0; 
    PORTC.1=1;
    
    PORTA=0b10001000;     
    delay_ms(5000); 
          
    
    


  
    
    

    

    }
}
