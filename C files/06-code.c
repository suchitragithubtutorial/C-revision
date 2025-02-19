/*
WAP in C input a consumer name , ID address, privious month reading, current month reading, calculate the electricity bill from this condition
if unit charge <= 100 calculate 25 paise. if unit charge is >= 100 and < 200 unit charge per 50 paise, if unit charge >=300 and <400 unit 
charge per 1 rupee. calculate the electricity bill of the consumer.
*/
#include<stdio.h>
#include<math.h>
int main(){
  char cname[20],id[10],caddr[20];
  int pmr, cmr, unit, unitcharge;
  printf("\n enter consumer name");
  scanf("%s",cname);
  printf("\n enter consumer id");
  scanf("%s",id);
  printf("\n enter consumer adress");
  scanf("%s",caddr);
  printf("\n enter pre month reading");
  scanf("%d" ,&pmr);
  printf("\n enter current month reading");
  scanf("%d",&cmr);
  
  unit = cmr-pmr;
  if(unit<=100){
    unitcharge = unit*.25;
  }else{
    if(unit >= 100 && unit < 200){
    unitcharge = unit*.25 + (unit-100)+ unit*.50;
  }else if(unit>=300 && unit<400) {
    unitcharge = unit*.25+unit*.50+unit*.75+(unit-300)+unit*.1;
  }
  printf("\n\t DISPLAY THE ELECTRICITY STATUS ");
  printf("\n\t =consumer name:-%s",cname);
  printf("\n\t =consumer id:-%s",id);
  printf("\n\t =consumer address:-%s",caddr);
  printf("\n\t =privious month reading:-%d",pmr);
  printf("\n\t =current month reading:-%d",cmr);
  printf("\n\t =total current unit charge=%d",unitcharge);
  return 0;
  }
}