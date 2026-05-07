#include <stdio.h>

//66번
int main()
{
    int a;
    int b;
    int c;
    
    scanf("%d %d %d", &a, &b, &c);
    printf("%s\n", a%2==0? "even": "odd");
    printf("%s\n", b%2==0? "even": "odd");
    printf("%s\n", c%2==0? "even": "odd");

    return 0;
}

//67번
#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);
    if(a<0){
        printf("minus\n");
        if(a%2==0){
            printf("even");
        }else{ printf("odd");}
    }else{
        printf("plus\n");
        if(a%2==0){
            printf("even");
        }else{ printf("odd");}
    }

    return 0;
}

//68번

#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);
    if(a>=90){
        printf("A");
    }
    else if(a>=70){
        printf("B");
    }
    else if(a>=40){
        printf("C");
    }
    else{
        printf("D");
    }

    return 0;
}

//69번
#include <stdio.h>

int main()
{
    char a;
    
    scanf("%c", &a);
    if(a=='A'){
        printf("best!!!");
    }
    else if(a=='B'){
        printf("good!!");
    }
    else if(a=='C'){
        printf("run!");
    }
    else if(a=='D'){
        printf("slowly~");
    }
    else{
        printf("what?");
    }

    return 0;
}

//70번
#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a);
    switch(a){
        case 1:
        case 2:
        case 12:
            printf("winter");
            break;
        
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
            
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
            
        case 9:
        case 10:
        case 11:
            printf("fall");
            break;
    }

    return 0;
}
