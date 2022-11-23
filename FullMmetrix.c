void main() {
        TRISB = 0b00000000;
   TRISD = 0b00000000;
   while(1){
            PORTB = 0b00000001;
            PORTD = 0b00000000;
            delay_ms(1);
            PORTB = 0b01000010;
            PORTD = 0b11111110;
            delay_ms(1);
            PORTB = 0b00000100;
            PORTD = 0b11111101;
            delay_ms(1);
            PORTB = 0b00001000;
            PORTD = 0b11111011;
            delay_ms(1);
            PORTB = 0b00010000;
            PORTD = 0b11111011;
            delay_ms(1);
            PORTB = 0b00100000;
            PORTD = 0b11111101;
            delay_ms(1);



            PORTB = 0b10000000;
            PORTD = 0b00000000;
            delay_ms(1);
            }
}