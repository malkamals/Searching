
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    int jumlah,i,n,data[10],cari;
    printf("input berapa data?");
    scanf("%d",&n);
    printf("\ninput %d berapa data?",n);
    for(i=0;i<n;i++)
    scanf("%d",&data[i]);
    printf("cari angka berapa?");
    scanf("%d",&cari);
    for(i=0;i<n;i++){
        if(data[i]==cari){
            
            printf("angka ketemu %d di %d",cari,i+1);
            jumlah++;
            break;
        }
    }
    return 0;
}
