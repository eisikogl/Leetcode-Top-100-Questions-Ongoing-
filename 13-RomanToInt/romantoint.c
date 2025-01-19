int str_size(char *s)
{
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}


int romanToInt(char* s) 
{
    int num = 0;
    int size = str_size(s);

    for(int i=0; i < size; i++)
    {

        if(s[i] == 'M')
            num += 1000;

        if(s[i] == 'D')
            num += 500;
    
        if(s[i] == 'L')
            num += 50;

        if(s[i] == 'V')
            num += 5;

        if(s[i] == 'C' && i + 1 < size && s[i+1] == 'M')
        {
            num += 900;
            i++;
        }
        else if(s[i] == 'C' && i + 1 < size && s[i+1] == 'D')
        {
            num += 400;
            i++;
        }
        else if(s[i] == 'C')
            num += 100;
        
        
        if(s[i] == 'X' && i + 1 < size && s[i+1] == 'C')
        {
            num += 90;
            i++;
        }
        else if(s[i] == 'X' && i + 1 < size && s[i+1] == 'L')
        {
            num += 40;
            i++;
        }
        else if(s[i] == 'X')
            num += 10;


        if(s[i] == 'I' && i + 1 < size && s[i+1] == 'X')
        {
            num += 9;
            i++;
        }
        else if(s[i] == 'I' && i + 1 < size && s[i+1] == 'V')
        {
            num += 4;
            i++;
        }
        else if(s[i] == 'I')
            num += 1;

    }
    

    return num;
}

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000