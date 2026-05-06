#include <stdio.h>
/*
//51번
int main()
{
    int a;
    int b; 
    
    scanf("%d %d", &a, &b);
    if(a<=b){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}

//52번
int main()
{
    int a;
    int b; 
    
    scanf("%d %d", &a, &b);
    if(a!=b){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}

//53번
int main()
{
    int a;

    scanf("%d", &a);
    printf("%d", !a);

    return 0;
}

//54번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d", a&&b);

    return 0;
}

//55번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d", a||b);

    return 0;
}

//56번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d", a^b);

    return 0;
}

//57번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    if((a==1 && b==1) || a==0 && b==0){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}

//58번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    if((a==0 && b==0)){
        printf("1");
    }
    else{
        printf("0");
    }

    return 0;
}

//59번
int main()
{
    int a;

    scanf("%d", &a);
    printf("%d", ~a);
    
    return 0;
}

//60번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d", a&b);
    
    return 0;
}

//61번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d", a|b);
    
    return 0;
}

//62번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d", a^b);
    
    return 0;
}

//62번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d", a^b);
    
    return 0;
}

//63번
int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("%d", a>b? a:b);
    
    return 0;
}
*/

//64번
int main()
{
    int a;
    int b;
    int c;

    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a<c? a:c)<b? (a<c? a:c):b);
    
    return 0;
}
