#include<stdio.h>
#include<string.h>

void tabandegistirme(char t[20],int,int);
 int main()
{
    char t[20];
    int taban1,taban2;
    printf("****Sayi Taban Cevirici****\n");
    printf("Sayiyi giriniz:");
    scanf("%s",t);
    printf("--------------------\n");
    printf("Tabani giriniz:");
    scanf("%d",&taban1);
    printf("--------------------\n");
    printf("Donusturulecek tabani giriniz:");
    scanf("%d",&taban2);
    printf("--------------------\n");
    tabandegistirme(t,taban1,taban2);
}

void tabandegistirme(char t[20],int x1,int x2)
{
    int count=0,y,hane,i,n=0,x=1;
    for(i=strlen(t)-1;i>=0;i--)
        {
         if(t[i]>='A'&&t[i]<='Z')
            {
            hane=t[i]-'0'-7;
            }
         else
            {
             hane=t[i]-'0';
            }
        n=hane*x+n;
        x=x*x1;
        }
    while(n!=0)
    {
        y=n%x2;
        hane='0'+y;
        if(hane>'9')
        {
            hane+=7;
        }
         t[count]=hane;
         count++;
         n=n/x2;
    }
    printf("Hesaplama sonucu:");
for(i=count-1;i>=0;i--){


    printf("%c",t[i]);
    }

 printf("\n");

}
