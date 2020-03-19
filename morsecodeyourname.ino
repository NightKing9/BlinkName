int light = D7;
void setup() 
{
      pinMode(light, OUTPUT);
}

void dash()
{
    digitalWrite(light, HIGH);
    delay(1000); 
    digitalWrite(light, LOW);
    delay(100);
}

void dot()
{
    digitalWrite(light, LOW);
    delay(250);
    digitalWrite(light, HIGH);
    delay(500);
    digitalWrite(light, LOW);
    delay(250);
}

void space()
{
    digitalWrite(light, LOW);
    delay(1000);
}

void end()
{
    digitalWrite(light, LOW);
    delay(2000);
}
void Display(char ch)
{
    switch (ch)
    {
        case 'a':
            dot(); dash();
            break;
        case 'b':
            dash(); dot(); dot(); dot();
            break;
        case 'c':
            dash(); dot(); dash(); dot();
            break;
        case 'd':
            dash(); dot(); dot();
            break;
        case 'e':
            dot();
            break;
        case 'f':
            dot(); dot(); dash(); dot();
            break;
        case 'g':
            dash(); dash(); dot();
            break;
        case 'h':
            dot(); dot(); dot(); dot();
            break;
        case 'i':
            dot(); dot();
            break;
        case 'j':
            dot(); dash(); dash(); dash(); 
            break;
        case 'k':
            dash(); dot(); dash(); 
            break;
        case 'l':
            dot(); dash(); dot(); dot();
            break;
        case 'm':
            dash(); dash(); 
            break;
        case 'n':
            dash(); dot();
            break;
        case 'o':
            dash(); dash(); dash();
            break;
        case 'p':
            dot(); dash(); dash(); dot();
            break;
        case 'r':
            dot(); dash(); dot();
            break;
        case 's':
            dot(); dot(); dot();
            break;
        case 't':
            dash();
            break;
        case 'u':
            dot(); dot(); dash(); 
            break;
        case 'v':
            dot(); dot(); dot(); dash(); 
            break;
        case 'w':
            dot(); dash(); dash(); 
            break;
        case 'x':
            dash(); dot(); dot(); dash(); 
            break;
        case 'y':
            dash(); dot(); dash(); dash(); 
            break;
        case 'z':
            dash(); dash(); dot(); dot(); 
            break;
    }
}

char *message = "khanh";
void loop() 
{
    for (int i = 0; i <= arraySize(message); i++)
    {
        Display(message[i]);
        space();
    }
    end();
}