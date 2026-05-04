#include <stdio.h>

/*
//1번
int main()
{
    printf("Hello");

    return 0;
}

//2번
int main()
{
    printf("Hello World");

    return 0;
}

//3번
int main()
{
    printf("Hello\nWorld");

    return 0;
}


//4번
int main()
{
    printf("\'Hello\'");

    return 0;
}

//5번
int main()
{
    printf("\"Hello World\"");

    return 0;
}

//6번
int main(void){
	printf("\"!@#$%%^&*()\"");
	return 0;
}

//7번
int main(void){
	printf("\"C:\\Download\\hello.cpp\"");
	return 0;
}

//10번
int main()
{
    int a;
    
    scanf("%d", &a);
    printf("%d", a);

    return 0;
}

//11번
int main()
{
    int a;
    
    scanf("%c", &a);
    printf("%c", a);

    return 0;
}

//12번
int main()
{
    float a;
    
    scanf("%f", &a);
    printf("%f", a);

    return 0;
}

//13번
int main()
{
    int a;
    int b;
    
    scanf("%d %d", &a, &b);
    printf("%d %d", a, b);

    return 0;
}

//14번
int main()
{
    char a;
    char b;
    
    scanf("%c %c", &a, &b);
    printf("%c %c", b, a);

    return 0;
}

//15번
int main()
{
    float a;
    
    scanf("%f", &a);
    printf("%.2f", a);

    return 0;
}

//17번
int main()
{
    int a;
    
    scanf("%d", &a);
    printf("%d %d %d", a, a, a);

    return 0;
}

//18번
int main()
{
    int a;
    int b;
    
    scanf("%d:%d", &a, &b);
    printf("%d:%d", a, b);

    return 0;
}

//19번
int main()
{
    int a;
    int b;
    int c;
    
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%04d.%02d.%02d", a, b, c);

    return 0;
}

//20번
int main()
{
    int a;
    int b;
    
    scanf("%d-%d", &a, &b);
    printf("%06d%07d", a, b);

    return 0;
}

//21번
int main()
{
    char a[51]="";
    
    scanf("%s", &a);
    printf("%s", a);

    return 0;
}

//22번
int main()
{
    char a[2001]="";
    
    fgets(a, 2000, stdin);
    printf("%s", a);

    return 0;
}

//23번
int main()
{
    int a;
    int b;
    
    scanf("%d.%d", &a, &b);
    printf("%d\n%d", a, b);

    return 0;
}

//24번
int main()
{
    char a[21]="";
    
    scanf("%s", &a);
    
    for (int i=0; a[i]!='\0'; i++){
     printf("\'%c\'\n", a[i]);   
    }

    return 0;
}
*/

//25번
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
    printf("[%d]\n", a*10000);
    printf("[%d]\n", b*1000);
    printf("[%d]\n", c*100);
    printf("[%d]\n", d*10);
    printf("[%d]\n", e);
    
    return 0;
}
