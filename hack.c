#include <math.h>
#include <stdio.h>
long int n;
  int L;
  double w1,w2,i1,i2,net,o,error1,error2,dw1,dw2;
double total_error;
int main()
{
    
    printf("selamat datang di program NNku v2");
    printf("ini dua input silahkan masukan w1,w2");

    printf("\ndan i1 i2 untuk p=1 0.9,0.1 \ndan i1 i2 untuk p=2 0.1 0.8");
   
    n=0;
    L=3;
    printf("\nW1 = ");
    scanf("%lf",&w1);
	printf("\nW2 = %lf");
    scanf("%lf",&w1);
	i1=0.9;    ///*p=1*/
    i2=0.2;
    total_error=1;
    while(total_error>0.01&&n<1000){
    net=i1*w1+i2*w2;
    o=1/(1+exp(-L*net));
    error1=0.5*pow((0-o),2);
    dw1=L*(0-o)*o*(1-o)*i1;
    dw2=L*(0-o)*o*(1-o)*i2;
    w1=w1+dw1;
    w2=w2+dw2;

    i1=0.1;        /*p=2*/
    i2=0.8;
    net=i1*w1+i2*w2;
    o=1/(1+exp(-L*net));
    error2=0.5*pow((1-o),2);
    dw1=L*(1-o)*o*(1-o)*i1;
    dw2=L*(1-o)*o*(1-o)*i2;
    w1=w1+dw1;
    w2=w2+dw2;
    n++;
	}
    printf("\n%lf",w1);
    printf("\n%lf",w2);
    printf("\n%lf",total_error);
    printf("\n%ld",n);





return 0;

}
