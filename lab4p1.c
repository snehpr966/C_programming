/*WAP to check Vowel or Consonant*/
#include <stdio.h>
int main()
{
    char ch;
    printf("enter an alphabet:\n");
    scanf("%c", &ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
     printf("\nVowel",ch); 
    }
    else{
        printf("Consonant",ch);
    }
    return 0;
}    
    