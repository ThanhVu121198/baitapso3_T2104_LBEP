#include<stdio.h>
int main(){
	int n,nghichdao=0;
	printf("Nhap n=");
	scanf("%d",&n);
if (10000>n && n>10){
	
	if (n>0)
    {
        nghichdao=nghichdao*10 + n%10;
        n/=10;
    }
    else{
        printf("so dao nguoc la %d", nghichdao);
        return 0;}
        
     
	if (n>0)
    {
        nghichdao=nghichdao*10 + n%10;
        n/=10;
    }
    else{
        printf("so dao nguoc la %d", nghichdao);
        return 0;}
   
   
   
   if (n>0)
    {
        nghichdao=nghichdao*10 + n%10;
        n/=10;
    }
    else{
        printf("so dao nguoc la %d", nghichdao);
        return 0;}
   
   
   if (n>0)
    {
        nghichdao=nghichdao*10 + n%10;
        n/=10;
    }
    else{
        printf("so dao nguoc la %d", nghichdao);
        return 0;}
   
   if (n>0)
    {
        nghichdao=nghichdao*10 + n%10;
        n/=10;
    }
    else{
        printf("so dao nguoc la %d", nghichdao);
        return 0;}
   
   
}else{
	printf("So khong hop le");
	
}return 0;
}

    
    
