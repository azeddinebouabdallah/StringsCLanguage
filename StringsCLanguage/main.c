//
//  main.c
//  StringsCLanguage
//
//  Copyright © 2018 Azeddine Bouadbdallah. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    char w[50];
    char s[100];
    
    scanf("%c", &ch);
    scanf("%s", w);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    
    printf("%c\n%s\n%s\n", ch, w, s);
    return 0;
}
