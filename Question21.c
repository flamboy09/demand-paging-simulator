#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int pfst_not_mod,pfst_mod,mem_access_time,effat;
  float per_of_mod;
  printf("Please Enter Page Fault Service Time when No Modification(ms) ::: ");
  scanf("%d",&pfst_not_mod);
   printf("Please Enter Page Fault Service Time with Modification(ms) ::: ");
  scanf("%d",&pfst_mod);
  printf("Please Enter Page Fault Modification rate(%) ::: ");
  scanf("%f",&per_of_mod);
  per_of_mod/=100;
   printf("Please Enter Memmory Access Time(ns) ::: ");
  scanf("%d",&mem_access_time);
   printf("Enter Required Access Time(ns) ::: ");
   scanf("%d",&effat);
   float num=effat-mem_access_time;
   float modpf=per_of_mod*pfst_mod*pow(10.0,6.0);
   float nmodpf=(1-per_of_mod)*pfst_not_mod*pow(10.0,6.0);
   float denom=modpf+nmodpf-mem_access_time;
   float pfr=num/denom;
   printf("Maximum Accepted Page Fault Rate is:(%f/%f)= %f\n",num,denom,pfr);
}
