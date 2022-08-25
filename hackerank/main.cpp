#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

char* getPhoneNumber(char* s) {
    // char str[80] = "This is-www.me.com ---website";
     // Delimeter
    const char del[2] = " "; // Delimeter
    char *token;/* get the first token */
    token = strtok(s, del);/* walk through other tokens */
    char *result;
    result = (char *)malloc(11);
    result[10] = 0;
    int count = 0;
    while( token != NULL )
    {
        if(strcmp(token, "double") == 0)
        {
            token = strtok(NULL, del);
            if(strcmp(token, "zero") == 0)
            {

                result[count++] = '0';
                result[count++] = '0';
                //strcat(result, digit);
            }
            else if(strcmp(token, "one") == 0)
            {
                result[count++] = '1';
                result[count++] = '1';
            }
            else if(strcmp(token, "two") == 0)
            {
                result[count++] = '2';
                result[count++] = '2';
            }
            else if(strcmp(token, "three") == 0)
            {
                result[count++] = '3';
                result[count++] = '3';
            }
            else if(strcmp(token, "four") == 0)
            {
                result[count++] = '4';
                result[count++] = '4';
            }
            else if(strcmp(token, "five") == 0)
            {
                result[count++] = '5';
                result[count++] = '5';
            }
            else if(strcmp(token, "six") == 0)
            {
                result[count++] = '6';
                result[count++] = '6';
            }
            else if(strcmp(token, "seven") == 0)
            {
                result[count++] = '7';
                result[count++] = '7';
            }
            else if(strcmp(token, "eight") == 0)
            {
                result[count++] = '8';
                result[count++] = '8';
            }
            else if(strcmp(token, "nine") == 0)
            {
                result[count++] = '9';
                result[count++] = '9';
            }

        }
        else if(strcmp(token, "triple") == 0)
        {
            token = strtok(NULL, del);
            if(strcmp(token, "zero") == 0)
            {

                result[count++] = '0';
                result[count++] = '0';
                result[count++] = '0';
                //strcat(result, digit);
            }
            else if(strcmp(token, "one") == 0)
            {
                result[count++] = '1';
                result[count++] = '1';
                result[count++] = '1';
            }
            else if(strcmp(token, "two") == 0)
            {
                result[count++] = '2';
                result[count++] = '2';
                result[count++] = '2';
            }
            else if(strcmp(token, "three") == 0)
            {
                result[count++] = '3';
                result[count++] = '3';
                result[count++] = '3';
            }
            else if(strcmp(token, "four") == 0)
            {
                result[count++] = '4';
                result[count++] = '4';
                result[count++] = '4';
            }
            else if(strcmp(token, "five") == 0)
            {
                result[count++] = '5';
                result[count++] = '5';
                result[count++] = '5';
            }
            else if(strcmp(token, "six") == 0)
            {
                result[count++] = '6';
                result[count++] = '6';
                result[count++] = '6';
            }
            else if(strcmp(token, "seven") == 0)
            {
                result[count++] = '7';
                result[count++] = '7';
                result[count++] = '7';
            }
            else if(strcmp(token, "eight") == 0)
            {
                result[count++] = '8';
                result[count++] = '8';
                result[count++] = '8';
            }
            else if(strcmp(token, "nine") == 0)
            {
                result[count++] = '9';
                result[count++] = '9';
                result[count++] = '9';
            }
        }
        else
        {
            if(strcmp(token, "zero") == 0)
            {

                result[count++] = '0';
                //strcat(result, digit);
            }
            else if(strcmp(token, "one") == 0)
            {
                result[count++] = '1';
            }
            else if(strcmp(token, "two") == 0)
            {
                result[count++] = '2';
            }
            else if(strcmp(token, "three") == 0)
            {
                result[count++] = '3';
            }
            else if(strcmp(token, "four") == 0)
            {
                result[count++] = '4';
            }
            else if(strcmp(token, "five") == 0)
            {
                result[count++] = '5';
            }
            else if(strcmp(token, "six") == 0)
            {
                result[count++] = '6';
            }
            else if(strcmp(token, "seven") == 0)
            {
                result[count++] = '7';
            }
            else if(strcmp(token, "eight") == 0)
            {
                result[count++] = '8';
            }
            else if(strcmp(token, "nine") == 0)
            {
                result[count++] = '9';
            }
        }


        token = strtok(NULL, del);
    }
    printf("%s", result);
    return result;
}
int main()
{
    char m[50] = "one two three four five six seven eight nine zero";
    printf("%s", getPhoneNumber(m));
    //char str[80] = "This is-www.me.com ---website";
    //charTest(str);
    return 0;
}
void charTest(char* s){
    const char del[2] = " "; // Delimeter
    char *token;/* get the first token */
    token = strtok(s, del);/* walk through other tokens */
    while( token != NULL )
    {
        printf( "%s\n", token );
        token = strtok(NULL, del);
    }
}
